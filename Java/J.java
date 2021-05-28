import java.io.*;

class Prediction {
	public static void main ( String args[] ) throws IOException{
		BufferedReader input = new BufferedReader( new InputStreamReader( System.in ) );
		int n=20;
	
		System.out.println("Here");	

		while(n>10){
			if(n%4==0){
				System.out.println("Here Again");
				break;
			}
			
			System.out.println(n);
			n = n-2;
		}
		
		System.out.println("Jlk");
	}
}
