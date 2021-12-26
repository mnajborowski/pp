import org.springframework.dao.DataAccessException;
import org.springframework.dao.EmptyResultDataAccessException;
import org.springframework.jdbc.core.ResultSetExtractor;
import org.springframework.jdbc.core.RowMapper;
import org.springframework.jdbc.core.namedparam.MapSqlParameterSource;
import org.springframework.jdbc.core.namedparam.NamedParameterJdbcTemplate;

import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class CoffeeDao {

    private final NamedParameterJdbcTemplate jdbc;

    public CoffeeDao() {
        this.jdbc = new NamedParameterJdbcTemplate(DbUtilities.getDataSource("jdbc:postgresql://localhost:5432/db", "postgres", "1"));
    }

    /**
     * Returns a coffee with given name.
     *
     * @param name coffee name
     * @return coffee object or null
     */
    public Coffee get(String name) {
        String sql = "SELECT cof_name, sup_id, price, sales, total FROM coffees "
                + "WHERE cof_name = :cof_name";
        MapSqlParameterSource params = new MapSqlParameterSource("cof_name", name);
        return jdbc.query(sql, params, new ResultSetExtractor<Coffee>() {

            @Override
            public Coffee extractData(ResultSet rs) throws SQLException, DataAccessException {
                while (rs.next()) {
                    return new Coffee(
                            rs.getString("cof_name"),
                            rs.getInt("sup_id"),
                            rs.getBigDecimal("price"),
                            rs.getInt("sales"),
                            rs.getInt("total")
                    );
                }
                throw new UnsupportedOperationException("Error.");
            }
        });
    }

    /**
     * Returns a list of all coffees.
     *
     * @return list of all coffees
     */
    public List<Coffee> getAll() {
        String sql = "SELECT cof_name, sup_id, price, sales, total FROM coffees";
         return jdbc.query(sql, new RowMapper<Coffee>() {

            @Override
            public Coffee mapRow(ResultSet rs, int i) throws SQLException {
                Coffee c = new Coffee();
                c.setName(rs.getString("cof_name"));
                c.setSupplierId(rs.getInt("sup_id"));
                c.setPrice(rs.getBigDecimal("price"));
                c.setSales(rs.getInt("sales"));
                c.setTotal(rs.getInt("total"));
                return c;
            }
        });
    }

    public void update(Coffee c) {
        String sql = "UPDATE coffees "
                + "SET price = :price, sales = :sales, total = :total "
                + "WHERE cof_name = :cof_name AND sup_id = :sup_id";
        Map<String, Object> parameters = new HashMap<>();
        parameters.put("price", c.getPrice());
        parameters.put("sales", c.getSales());
        parameters.put("total", c.getTotal());
        parameters.put("cof_name", c.getName());
        parameters.put("sup_id", c.getSupplierId());
        jdbc.update(sql, parameters);
    }

    public void delete(String name, int supplierId) {
        String sql = "DELETE FROM coffees WHERE cof_name = :name AND sup_id = :supplierId";
        Map<String, Object> params = new HashMap<>();
        params.put("name", name);
        params.put("supplierId", supplierId);
        jdbc.update(sql, params);
    }

    public void create(Coffee c) {
        String sql = "INSERT INTO coffees(cof_name, sup_id, price, sales, total) "
        + "VALUES(:cof_name, :sup_id, :price, :sales, :total)";
        Map<String, Object> params = new HashMap<>();
        params.put("cof_name", c.getName());
        params.put("sup_id", c.getSupplierId());
        params.put("price", c.getPrice());
        params.put("sales", c.getSales());
        params.put("total", c.getTotal());
        jdbc.update(sql, params);
    }

}
