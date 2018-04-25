class Point{

	private float x;
	private float y;
	private Cluster cluster;
	private boolean visited = false;

	
	public float getX(){
		return this.x;
	}

	public void setX(float x){
		this.x = x;
	}
	
	public float getY(){
		return y;
	}

	public void setY(float y){
		this.y = y;
	}

	public boolean isVisited(){
		return visited;
	}

	public void setVisited(boolean visited){
		this.visited = visited;
	}	
	
	public void setCluster(Cluster cluster){
		this.cluster = cluster;
	}

	public Cluster getCluster(){
		return this.cluster;
	}
	
	public double distance(Point p){
		double x1 = this.x-p.getX();
		double x2 = this.y-p.getY();
		return Math.sqrt(x1*x1 + x2*x2);
	}
}
