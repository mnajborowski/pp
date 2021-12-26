package POJO;

import javax.persistence.Basic;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Table;
import java.sql.Timestamp;

@Entity
@Table(name = "cof_inventory", schema = "public", catalog = "db")
public class CofInventoryEntity {
    private int warehouseId;
    private int quan;
    private Timestamp dateVal;

    @Basic
    @Column(name = "warehouse_id")
    public int getWarehouseId() {
        return warehouseId;
    }

    public void setWarehouseId(int warehouseId) {
        this.warehouseId = warehouseId;
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

        CofInventoryEntity that = (CofInventoryEntity) o;

        if (warehouseId != that.warehouseId) return false;
        if (quan != that.quan) return false;
        if (dateVal != null ? !dateVal.equals(that.dateVal) : that.dateVal != null) return false;

        return true;
    }

    @Override
    public int hashCode() {
        int result = warehouseId;
        result = 31 * result + quan;
        result = 31 * result + (dateVal != null ? dateVal.hashCode() : 0);
        return result;
    }
}
