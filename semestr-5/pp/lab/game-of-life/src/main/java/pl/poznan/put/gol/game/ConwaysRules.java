package pl.poznan.put.gol.game;

public class ConwaysRules implements Rules {

	@Override
	public boolean inNextGeneration(boolean alive, int numberOfNeighbors) {
		if (alive && (numberOfNeighbors == 2 || numberOfNeighbors == 3))
			return true;
		else return !alive && numberOfNeighbors == 3;
	}

}
