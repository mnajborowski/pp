import org.apache.lucene.index.IndexableField;

import java.util.Iterator;
import java.util.Spliterator;
import java.util.function.Consumer;

public class Item implements Iterable<IndexableField> {

	private int id;
	private float price;
	private String name;
	private String category;
	private String description;

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public float getPrice() {
		return price;
	}

	public void setPrice(float price) {
		this.price = price;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getCategory() {
		return category;
	}

	public void setCategory(String category) {
		this.category = category;
	}

	public String getDescription() {
		return description;
	}

	public void setDescription(String description) {
		this.description = description;
	}

	@Override
	public Iterator<IndexableField> iterator() {
		return null;
	}

	@Override
	public void forEach(Consumer<? super IndexableField> action) {

	}

	@Override
	public Spliterator<IndexableField> spliterator() {
		return null;
	}
}
