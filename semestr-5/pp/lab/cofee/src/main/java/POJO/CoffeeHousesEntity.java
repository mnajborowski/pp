package POJO;

import javax.persistence.*;

@Entity
@Table(name = "coffee_houses", schema = "public", catalog = "db")
public class CoffeeHousesEntity {
    private int storeId;
    private String city;
    private int coffee;
    private int merch;
    private int total;

    @Id
    @Column(name = "store_id")
    public int getStoreId() {
        return storeId;
    }

    public void setStoreId(int storeId) {
        this.storeId = storeId;
    }

    @Basic
    @Column(name = "city")
    public String getCity() {
        return city;
    }

    public void setCity(String city) {
        this.city = city;
    }

    @Basic
    @Column(name = "coffee")
    public int getCoffee() {
        return coffee;
    }

    public void setCoffee(int coffee) {
        this.coffee = coffee;
    }

    @Basic
    @Column(name = "merch")
    public int getMerch() {
        return merch;
    }

    public void setMerch(int merch) {
        this.merch = merch;
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

        CoffeeHousesEntity that = (CoffeeHousesEntity) o;

        if (storeId != that.storeId) return false;
        if (coffee != that.coffee) return false;
        if (merch != that.merch) return false;
        if (total != that.total) return false;
        if (city != null ? !city.equals(that.city) : that.city != null) return false;

        return true;
    }

    @Override
    public int hashCode() {
        int result = storeId;
        result = 31 * result + (city != null ? city.hashCode() : 0);
        result = 31 * result + coffee;
        result = 31 * result + merch;
        result = 31 * result + total;
        return result;
    }
}
