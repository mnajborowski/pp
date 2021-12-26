package pl.poznan.put.gol.game;

public class Generation {

	private Rules rules;
	private Cells aliveCells;

	public Generation(Rules rules, Cell... aliveCells) {
		this(rules, new Cells(aliveCells));
	}

	public Generation(Rules rules, Cells aliveCells) {
		this.rules = rules;
		this.aliveCells = aliveCells;
	}

	public void evolve() {
		Cells nextGenAliveCells = new Cells();
		aliveCells.getNeighbors().cells.forEach(
				cell -> {
					if (rules.inNextGeneration(isAlive(cell), countAliveNeighbors(cell)))
						nextGenAliveCells.cells.add(cell);
				});
		aliveCells = nextGenAliveCells;
	}

	public boolean isAlive(Cell cell) {
		return aliveCells.contains(cell);
	}

	public int countAliveNeighbors(Cell cell) {
		return (int) aliveCells.cells.stream()
				.filter(c -> c.neighbors().contains(cell))
				.count();
	}

	public boolean extinct() {
		return aliveCells.isEmpty();
	}

	public Cells getAliveCells() {
		return aliveCells;
	}

	@Override
	public boolean equals(Object obj) {
		if (obj == null) {
			return false;
		}
		if (this == obj) {
			return true;
		}
		if (!(obj instanceof Generation)) {
			return false;
		}
		Generation other = (Generation) obj;
		return aliveCells.equals(other.aliveCells);
	}
}
