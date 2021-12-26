package pl.poznan.put.gol.game;

import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class ConwaysCellTest {

    @Test
    public void testNeighbors() {
        // Given
        Cells actual = new Cells(
                new ConwaysCell(-1, -1),
                new ConwaysCell(-1, 0),
                new ConwaysCell(-1, 1),
                new ConwaysCell(0, -1),
                new ConwaysCell(0, 1),
                new ConwaysCell(1, -1),
                new ConwaysCell(1, 0),
                new ConwaysCell(1, 1)
        );

        // When
        Cells expected = new ConwaysCell(0, 0).neighbors();

        // Then
        assertEquals(actual.size(), expected.size());
    }

    @Test
    public void testEquals() {
        // Given
        ConwaysCell c1 = new ConwaysCell(0, 0);
        ConwaysCell c2 = new ConwaysCell(0, 0);

        // Then
        assertEquals(c1, c2);
    }
}
