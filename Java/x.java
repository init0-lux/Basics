import java.io.*;

class Prediction {
	public static void main ( String args[] ) throws IOException{
		BufferedReader input = new BufferedReader( new InputStreamReader( System.in ) );
	
		int x=10, y=10, m=10, n=10;
		double Z;

		Z= Math.pow((x+y), 5) + Math.pow( (m+n), 2/3 );
	
		System.out.println(Z);
		
	}
}
