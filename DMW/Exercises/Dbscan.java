public class Dbscan{

	
	public static void main(String[] args) throws Exception{

		double epsilon = 0.5;
		int minpoints = 5;
		List<Point> unvisitedPoints = null;
		int noOfPoints = 0;
		List<Point> visitedPoints = new ArrayList<Point>();
		PointsReader pr = new PointsReader();
		unvisitedPoints = pr.readPoints();
		noOfPoints = unvistedPoints.size();
		double[][] distances = new double[noOfPoints][noOfPoints] ;
		for(int i = 0; i < noOfPoints; i++){
			for( int j = 0; j < noOfPoints; j++){
				if(i <= j){
					distances[i][j] = unvisitedPoints.get(i).distance(unvisitedPoints.get(j));
					if(i != j){
						distances[j][i] = distances[i][j];
					}
				}
			}
		
		}
		int clusters = 0;
		while((thispointindex = unvisitedPoints.size()) != 0){
				
			thisPoint = unvisitedPoints.remove(thispointindex);
			thisPoint.setVisited(true);
			visitedPoints.add(thisPoint);
			int count = 0;
			List<Point> thispointNeighbors = new ArrayList<Point>();

			for(int i = 0; i < noOfPoints; i++){
				if(distance[thispointindex][i] <= epsilon)
					count++;
				thispointNeighbors.add(unvisitedPoints.get(i);
				
			}
			if(count >= minpoints){
				clusters++;
				Cluster c = new Cluster(clusters);
				c.addPoint(thisPoint);
			}
			count = 0;
			int j = 0;
			for(Point p : thispointNeighbors){
				if(!p.isVisited()){
					p.setVisited(true);
					for(int i = 0; i < noOfPoints; i++){
						if(distance[j][i] <= epsilon)
							count++;
							thispointNeighbors.add(unvisitedPoints.get(i);
				
					}
				}
			j++;
			}
			
			
			
		}
		
		//pr.printPoints();
		

	
		
	}
}
