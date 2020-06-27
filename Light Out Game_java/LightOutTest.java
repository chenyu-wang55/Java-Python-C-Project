package LightOutGame;
import java.util.Scanner;
import java.util.Random;
public class LightOutTest{
	public static void main(String []args){
		//input
		Scanner keyboard=new Scanner(System.in);
		System.out.println("enter the size of the field(m and n)");
		int m=keyboard.nextInt();
		int n=keyboard.nextInt();
		
		LightOut light =new LightOut(m,n);
		Random random= new Random();
		int x, y;
		int sum=0;
	    //get the number of steps
		for (int i=0;;i++){
			x=random.nextInt(m);
			y=random.nextInt(n);
			light.togglePatch(x, y);
			sum++;
			if(light.isDark()||light.isWhite()) {
				break;
			}		
		}
		//output
		System.out.println("the number of steps is :" + sum );
		

	}
}