package LightOutGame;
import java.util.Random;
public class LightOut{
	private int m,n;
	private boolean [][]array;
	public LightOut(int m,int n){
		this.m=m;
		this.n=n;
		array=new boolean[m][n];
	}
	public void reset(){
		Random random =new Random();
		for(int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				array[i][j]=random.nextBoolean();			
			}
		}
	}
	public boolean getPatch(int x, int y){
		if(x<0 ||x>=m || y<0 || y>=n){
			throw new RuntimeException("it is not a valid position");
		}
		return array[x][y];
	}
	public void setPatch(int x, int y, boolean newValue){
		array[x][y]=newValue;
		if (x<0 ||x>=m || y<0 || y>=n){
			throw new RuntimeException("it is not a valid position");
		}
	}
	public void togglePatch(int x, int y){
		if(x<0 ||x>=m || y<0 || y>=n){
			throw new RuntimeException("it is not a valid position");
		}
		array[x][y]=!array[x][y];
		array[(x-1+m)%m][y]=!array[(x-1+m)%m][y];
		array[(x+1)%m][y]=!array[(x+1)%m][y];
		array[x][(y-1+n)%n]=!array[x][(y-1+n)%n];
		array[x][(y+1)%n]=!array[x][(y+1)%n];
	}	
	public boolean isDark(){
		for(int i=0;i<m;i++){
			for (int j=0;j<n;j++){
				if (array[i][j]==false)
					return false;
			}
		}
		return true;
	}
	public boolean isWhite(){
		for(int i=0;i<m;i++){
			for (int j=0;j<n;j++){
				if (array[i][j])
					return false;
			}
	    }
	    return true;
	}
	
}