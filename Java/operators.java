import java.io.*;

class Prediction {
	public static void main ( String args[] ) throws IOException{
		BufferedReader input = new BufferedReader( new InputStreamReader( System.in ) );
		int a = 2;

		a += ++a * a++ / a;

		System.out.println(a);
	}
}
