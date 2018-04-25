import java.io.FileReader;
import java.io.BufferedReader;
import java.util.*;

public class PointsReader{
	
	private int noOfPoints = 0;
	
	public void printPoints(){
		for (Point p : readPoints){
			System.out.print(p.getX() + " " + p.getY());
			System.out.println();
		}
	}
	
	public points readPoints() throws Exception{
		List<Point> points = new ArrayList<Point>();

		int i = 0;
		BufferedReader b = new BufferedReader(new FileReader("DBSCAN.txt"));
		String l = b.readLine();
		if (l == null){
			return;
		}
		String[] tokens = l.split(" ");
		noOfPoints = Integer.valueOf(tokens[0]).intValue();
		Point p = null;
		while( i < noOfPoints && (l = b.readLine()) != null){

			tokens = l.split(" ");	
			p = new Point();
			p.setX(Float.valueOf(tokens[0]).floatValue());
			p.setY(Float.valueOf(tokens[1]).floatValue());
			points.add(p);			
			i++;
		}
			
	}
}
