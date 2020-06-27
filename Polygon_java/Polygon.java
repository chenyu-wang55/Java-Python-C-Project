package polygon;
import javafx.geometry.*;//many errors have been suppressed;why
public class Polygon{
	private Point2D[] point;
	
	public Polygon(Point2D[] vertexes){
		vertexes=new Point2D[vertexes.length]; 
		for (int i=0;i<vertexes.length;i++) {
			vertexes[i]=vertexes[i];
		}	
	}
	
	public double area(){
		double sum=0;
		for (int i=0; i<point.length-1; i++){
			sum+=point[i].getX() *point[i+1].getY() -point[i+1].getX() *point[i].getY();
		}
		return Math.abs(sum/2);
	}
	
	public double perimeter(){
		double sum=0;
		for (int i=0; i<point.length; i++){
			sum+=point[i].distance(point[(i+1)%point.length]);
		
		}
		return sum;
	}
	public Polygon extents(){
		int xmax=(int) point[0].getX();
		int ymax=(int) point[0].getY();
		int xmin=(int) point[0].getX();
		int ymin=(int) point[0].getY();
		for (int i=0;i<point.length;i++){
			if (point[i].getX()>xmax){
				xmax=(int) point[i].getX();
			}
			if(point[i].getY()>ymax){
				ymax=(int) point[i].getY();
			}
			if(point[i].getX()<xmin){
				xmin=(int) point[i].getX();
			}
			if(point[i].getY()<ymin){
				ymin=(int) point[i].getY();
			}
		}
		Point2D[] extent=new Point2D[4];
		extent[0]=new Point2D(xmax,ymax);
		extent[1]=new Point2D(xmax,ymin);
		extent[2]=new Point2D(xmin,ymax);
		extent[3]=new Point2D(xmin,ymin);
		Polygon a=new Polygon(extent);		
		return a;
	}
	public String toString(){
		String s="";
		s=point.toString();
		
		return s;
		
	}

	

}