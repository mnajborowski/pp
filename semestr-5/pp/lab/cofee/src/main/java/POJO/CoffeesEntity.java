package POJO;

import javax.persistence.*;
import java.math.BigDecimal;

@Entity
@Table(name = "coffees", schema = "public", catalog = "db")
public class CoffeesEntity {
    private String cofName;
    private BigDecimal price;
    private int sales;
    private int total;
    private CoffeeDescriptionsEntity coffeeDescriptionsByCofName;

    @Id
    @Column(name = "cof_name")
    public String getCofName() {
        return cofName;
    }

    public void setCofName(String cofName) {
        this.cofName = cofName;
    }

    @Basic
    @Column(name = "price")
    public BigDecimal getPrice() {
        return price;
    }

    public void setPrice(BigDecimal price) {
        this.price = price;
    }

    @Basic
    @Column(name = "sales")
    public int getSales() {
        return sales;
    }

    public void setSales(int sales) {
        this.sales = sales;
    }

    @Basic
    @Column(name = "total")
    public int getTotal() {
        return total;
    }

    public void setTotal(int total) {
        this.total = total;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;

        CoffeesEntity that = (CoffeesEntity) o;

        if (sales != that.sales) return false;
        if (total != that.total) return false;
        if (cofName != null ? !cofName.equals(that.cofName) : that.cofName != null) return false;
        if (price != null ? !price.equals(that.price) : that.price != null) return false;

        return true;
    }

    @Override
    public int hashCode() {
        int result = cofName != null ? cofName.hashCode() : 0;
        result = 31 * result + (price != null ? price.hashCode() : 0);
        result = 31 * result + sales;
        result = 31 * result + total;
        return result;
    }

    @OneToOne(mappedBy = "coffeesByCofName")
    public CoffeeDescriptionsEntity getCoffeeDescriptionsByCofName() {
        return coffeeDescriptionsByCofName;
    }

    public void setCoffeeDescriptionsByCofName(CoffeeDescriptionsEntity coffeeDescriptionsByCofName) {
        this.coffeeDescriptionsByCofName = coffeeDescriptionsByCofName;
    }
}
