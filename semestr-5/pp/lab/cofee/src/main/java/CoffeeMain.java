import POJO.CoffeesEntity;
import org.springframework.jdbc.core.namedparam.MapSqlParameterSource;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;
import javax.persistence.Query;
import java.math.BigDecimal;
import java.util.List;
import java.util.Scanner;

public class CoffeeMain {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws ClassNotFoundException {
        System.out.println("Coffee");

        System.out.println("1. Using NamedParameterJdbcTemplate");
        System.out.println("2. Using EntityManager");
        Scanner in = new Scanner(System.in);
        String choice;
        switch (in.nextInt()) {
            case 1: {
                do {
                    System.out.println("\n"
                            + "Choose an action\n"
                            + "(a) select coffee,\n"
                            + "(b) list all,\n"
                            + "(c) create new coffee,\n"
                            + "(d) update coffee,\n"
                            + "(e) delete coffee,\n"
                            + "(0) exit.\n");

                    CoffeeDao dao = new CoffeeDao();
                    in.reset();
                    choice = in.nextLine();
                    switch (choice) {
                        case "a": {
                            System.out.println("Please enter coffee name : ");
                            String name = in.nextLine();
                            System.out.println(dao.get(name));
                            break;
                        }
                        case "b": {
                            List<Coffee> coffeeList = dao.getAll();
                            for (Coffee c : coffeeList) {
                                System.out.println(c.toString());
                            }
                            break;
                        }
                        case "c": {
                            System.out.print("Please enter coffee name : ");
                            String name = in.nextLine();
                            System.out.print("Please enter coffee supplier ID : ");
                            int supId = Integer.parseInt(in.nextLine());
                            System.out.print("Please enter coffee price: ");
                            BigDecimal price = new BigDecimal(in.nextLine());
                            System.out.print("Please enter coffee sales : ");
                            int sales = Integer.parseInt(in.nextLine());
                            System.out.print("Please enter coffee total : ");
                            int total = Integer.parseInt(in.nextLine());
                            dao.create(new Coffee(name, supId, price, sales, total));
                            break;
                        }
                        case "d": {
                            System.out.print("Please enter coffee name : ");
                            String name = in.nextLine();
                            System.out.print("Please enter coffee supplier ID : ");
                            int supId = Integer.parseInt(in.nextLine());
                            System.out.print("Please enter new coffee price : ");
                            BigDecimal price = new BigDecimal(in.nextLine());
                            System.out.print("Please enter new coffee sales : ");
                            int sales = Integer.parseInt(in.nextLine());
                            System.out.print("Please enter new coffee total : ");
                            int total = Integer.parseInt(in.nextLine());
                            dao.update(new Coffee(name, supId, price, sales, total));
                            break;
                        }
                        case "e": {
                            System.out.print("Please enter coffee name : ");
                            String name = in.nextLine();
                            System.out.print("Please enter coffee suppplier ID : ");
                            int supId = Integer.parseInt(in.nextLine());
                            dao.delete(name, supId);
                            break;
                        }
                        case "0":
                            choice = "0";
                            break;
                    }
                } while (!choice.equals("0"));
                return;
            }
            case 2: {
                while (true) {
                    System.out.println("\n"
                            + "Choose an action\n"
                            + "(a) select coffee,\n"
                            + "(b) list all,\n"
                            + "(c) create new coffee,\n"
                            + "(d) update coffee,\n"
                            + "(e) delete coffee,\n"
                            + "(any other key) exit.\n");

                    EntityManagerFactory emf = Persistence.createEntityManagerFactory("persistenceUnit");
                    EntityManager em = emf.createEntityManager();

                    switch (in.nextLine()) {
                        case "a": {
                            System.out.println("Please enter coffee name : ");
                            String name = in.nextLine();
                            System.out.println(em.find(CoffeesEntity.class, name));
                            break;
                        }
                        default:
                            return;
                    }
                }
            }
        }
    }
}
