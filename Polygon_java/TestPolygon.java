package polygon;
import javafx.geometry.*;
public class TestPolygon{
	public static void main (String []args){
		Point2D[] triangle;
		triangle=new Point2D[3];
		triangle[0]=new Point2D(0,0);
		triangle[1]=new Point2D(0,3);
		triangle[2]=new Point2D(4,0);
		Polygon a=new Polygon(triangle);
		System.out.println("it is a triangle:");
		System.out.println("area is "+a.area()+"perimeter is "+ a.perimeter() +"/"
				+"extents is"+ a.extents());
		
		Point2D[] square;
		square=new Point2D[4];
		square[0]=new Point2D(0,0);
		square[1]=new Point2D(0,2);
		square[2]=new Point2D(2,0);
		square[3]=new Point2D(2,2);
		Polygon b=new Polygon(square);
		System.out.println("it is a square:");
		System.out.println("area is "+b.area()+"perimeter is "+ a.perimeter() +"/"
				+"extents is"+ a.extents());
		
		Point2D[] quadrilateral;
		quadrilateral=new Point2D[4];
		quadrilateral[0]=new Point2D(0,0);
		quadrilateral[1]=new Point2D(5,0);
		quadrilateral[2]=new Point2D(0,6);
		quadrilateral[3]=new Point2D(4,6);
		Polygon c=new Polygon (quadrilateral);
		System.out.println("it is a quadrilateral:");
		System.out.println("area is "+c.area()+"perimeter is "+ a.perimeter() +"/"
				+"extents is"+ a.extents());
		
		Point2D[] pentagon;
		pentagon=new Point2D[5];
		pentagon[0]=new Point2D(0,0);
		pentagon[1]=new Point2D(0,5);
		pentagon[2]=new Point2D(3,6);
		pentagon[3]=new Point2D(5,2);
		pentagon[4]=new Point2D(4,0);
		Polygon d=new Polygon(pentagon);
		System.out.println("it is a pentagon:");
		System.out.println("area is "+d.area()+"perimeter is "+ a.perimeter() +"/"
				+"extents is"+ a.extents());				
	}
}
