import java.util.*;

class Cluster{
	
	private int id;	
	private List<Point> points = new ArrayList<Point>();
	
	public Cluster(int id){
		this.id = id;
	}

	public List<Point> getPoints(){
		return points;
	}

	public int getId(){
		return id;
	}

	public void setId(int id){
		this.id = id;
	}
	
	public void addPoint(Point p){
		p.getCluster().setId(id);
		points.add(p);
	}


}
