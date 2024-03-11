import java.io.*;

class Numbers {
	public static void main ( String args [] ) throws IOException {
		BufferedReader input = new BufferedReader ( new InputStreamReader ( System.in ) );

		int Num, D;

		System.out.println( "Enter the Number: " );
		Num = Integer.parseInt( input.readLine() );

		D = Num / 10;

		if ( D == 0 );
			System.out.println( Num * Num );

		if ( D >= 1 && D < 100 )
			System.out.println( Math.sqrt( Num ) );

		if ( D >= 100 && D < 100 )
			System.out.println( Num * Num * Num );

		else
			System.out.println("The number entered in more than three digits.");
	}
}
