import org.apache.lucene.analysis.standard.StandardAnalyzer;
import org.apache.lucene.document.Document;
import org.apache.lucene.document.Field;
import org.apache.lucene.document.StringField;
import org.apache.lucene.document.TextField;
import org.apache.lucene.index.DirectoryReader;
import org.apache.lucene.index.IndexReader;
import org.apache.lucene.index.IndexWriter;
import org.apache.lucene.index.IndexWriterConfig;
import org.apache.lucene.queryparser.classic.ParseException;
import org.apache.lucene.queryparser.classic.QueryParser;
import org.apache.lucene.search.IndexSearcher;
import org.apache.lucene.search.Query;
import org.apache.lucene.search.ScoreDoc;
import org.apache.lucene.search.TopDocs;
import org.apache.lucene.store.Directory;
import org.apache.lucene.store.SimpleFSDirectory;

import javax.xml.stream.XMLStreamException;
import java.io.File;
import java.io.IOException;

public class Main {

    public static void main(String[] args) throws IOException, ParseException {
        StandardAnalyzer analyzer = new StandardAnalyzer();
        Directory index = new SimpleFSDirectory(new File("index").toPath());
        IndexWriterConfig config = new IndexWriterConfig(analyzer);
        config.setOpenMode(IndexWriterConfig.OpenMode.CREATE); // to overwrite index
        IndexWriter w = new IndexWriter(index, config);



        try (ItemProvider provider = new ItemProvider("items.xml")) {
            while (provider.hasNext()) {
                Item item = provider.next();
                addItem(w, item);
            }
            w.close();
        } catch (XMLStreamException | IOException ex) {
            ex.printStackTrace();
        }

        // 1.
        executeQuerry("name:Gruszka NOT name:czyszcząca", analyzer, index);
        System.out.println();
        // 2.
        executeQuerry("name:Gruszka AND description:(+nie +pęka)", analyzer, index);
        System.out.println();
        // 3.
        executeQuerry("category:Akce*", analyzer, index);
        System.out.println();
        // 4.
        executeQuerry("name:Akumaletor~2", analyzer, index);
        System.out.println();
        // 5.
        executeQuerry("price:[100 TO 180]", analyzer, index);
        System.out.println();
    }

    private static void addItem(IndexWriter w, Item item) throws IOException {
        Document doc = new Document();
        doc.add(new StringField("id", Integer.toString(item.getId()), Field.Store.YES));
        doc.add(new StringField("price", Float.toString(item.getId()), Field.Store.YES));
        doc.add(new TextField("name", item.getName(), Field.Store.YES));
        doc.add(new TextField("category", item.getCategory(), Field.Store.YES));
        doc.add(new TextField("descryption", item.getDescription(), Field.Store.YES));
        w.addDocument(doc);
    }

    private static void executeQuerry(String querryStr, StandardAnalyzer analyzer, Directory index) throws IOException, ParseException {
        Query q =new QueryParser("", analyzer).parse(querryStr);

        IndexReader reader = DirectoryReader.open(index);
        IndexSearcher searcher =new IndexSearcher(reader);
        TopDocs docs = searcher.search(q, 10);
        ScoreDoc[] hits = docs.scoreDocs;

        System.out.println("Found " + hits.length + " hits.");
        for(int i = 0; i < hits.length; ++i) {
            int docId = hits[i].doc;
            Document d = searcher.doc(docId);
            System.out.println((i+1) + ". " + d.get("id") + "\t" + d.get("name") + "\t" + d.get("price") + "\t");
        }
        reader.close();
    }
}
