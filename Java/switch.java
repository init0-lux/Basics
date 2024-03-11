import java.io.*;

class Prediction {
	public static void main ( String args[] ) throws IOException{
		BufferedReader input = new BufferedReader( new InputStreamReader( System.in ) );
		
		int a=0, b=0,c=0,d=0;
		for( int i = 1; i <= 3; i++){
			switch(i){
				case 1:
					a++;
				case 2:
					b++;
				case 3:
					c++;
				default:
					d++;
			}
		
			System.out.println(a+" "+b+" "+c+" "+d);
		}
	}
}
