import java.io.*;

class Prediction {
	public static void main ( String args[] ) throws IOException{
		BufferedReader input = new BufferedReader( new InputStreamReader( System.in ) );
		
		int m, n=100; 
		m = n >= 200? -n : n++;
		System.out.println("output = " +m);
		
	}
}
