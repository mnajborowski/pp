package POJO;

import javax.persistence.*;
import java.sql.Timestamp;

@Entity
@Table(name = "merch_inventory", schema = "public", catalog = "db")
public class MerchInventoryEntity {
    private int itemId;
    private String itemName;
    private int quan;
    private Timestamp dateVal;

    @Id
    @Column(name = "item_id")
    public int getItemId() {
        return itemId;
    }

    public void setItemId(int itemId) {
        this.itemId = itemId;
    }

    @Basic
    @Column(name = "item_name")
    public String getItemName() {
        return itemName;
    }

    public void setItemName(String itemName) {
        this.itemName = itemName;
    }

    @Basic
    @Column(name = "quan")
    public int getQuan() {
        return quan;
    }

    public void setQuan(int quan) {
        this.quan = quan;
    }

    @Basic
    @Column(name = "date_val")
    public Timestamp getDateVal() {
        return dateVal;
    }

    public void setDateVal(Timestamp dateVal) {
        this.dateVal = dateVal;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;

        MerchInventoryEntity that = (MerchInventoryEntity) o;

        if (itemId != that.itemId) return false;
        if (quan != that.quan) return false;
        if (itemName != null ? !itemName.equals(that.itemName) : that.itemName != null) return false;
        if (dateVal != null ? !dateVal.equals(that.dateVal) : that.dateVal != null) return false;

        return true;
    }

    @Override
    public int hashCode() {
        int result = itemId;
        result = 31 * result + (itemName != null ? itemName.hashCode() : 0);
        result = 31 * result + quan;
        result = 31 * result + (dateVal != null ? dateVal.hashCode() : 0);
        return result;
    }
}
