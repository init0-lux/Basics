import java.io.*;

class Prediction {
	public static void main ( String args[] ) throws IOException{
		BufferedReader input = new BufferedReader( new InputStreamReader( System.in ) );
	
		for( int i = 50; i >= 0; i = i - 10 ){
			if( i == 20)
				break;
			System.out.println(i);
		}
	}
}
