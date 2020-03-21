#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

string get_word();
void print_board (int);
void print_blanks (string, string);
int NONCE();

bool flag = true;

int main() {
	int user_lives = 7;
	string letters_guessed = "", guess;
	string word = get_word();

	while ( user_lives > 0 ) {
		flag = true;
		system("clear");
		print_board( user_lives );
		cout << endl << endl;
		print_blanks( word, letters_guessed );
		
		if ( flag )
			break;	

		cout << "\n\nLives left: " << user_lives << endl;
		cout << "Letters Guessed: " << letters_guessed << endl;
		cout << "\n\nEnter a letter: ";
		cin >> guess;

		letters_guessed = letters_guessed + " " + guess;

		if ( word.find( guess ) != -1 )
			continue;
		else
			user_lives--;
	}

	if ( user_lives == 0 ) {
		cout << "\n\nYOU LOSE" << endl << endl;
		cout << "The Word was : " << word;;
	}

	else if ( user_lives > 0 ) {
		cout << "\n\nVICTORY SCREECH!!!" << endl << endl;
		cout << "The word was: " << word;
	}

	cout << endl;
}

string get_word() {
	// Change wordlist size here;
	const int SIZE = 10;
	string temp;
	string wordlist[SIZE] = {""};
	int i = 0;

	ifstream in_file ("word.list");

	if ( !in_file )
		cout << "Error; Wordlist not found...\n";
	
	in_file.ignore ( 255, '\n' );
	in_file.ignore ( 255, '\n' );

	// Pre Read;
	in_file >> temp;
	while ( !in_file.eof() ) {
		wordlist[i] = temp;
		i++;

		// Post Read;
		in_file >> temp;
	}

	// return wordlist[NONCE()];
	return wordlist[ NONCE() ];
	// return 0;
}

void print_board( int lives ) {
	switch (lives) {
		case 7:
			cout << "\t\t\t|-------------------|" 	<< endl;
			cout << "\t\t\t|                  ( )" 	<< endl;
			cout << "\t\t\t|                  /|\\" << endl;
			cout << "\t\t\t|                   |"	<< endl;
			cout << "\t\t\t|                  / \\" << endl;
			cout << "\t\t\t|" 			<< endl;
			cout << "\t\t\t|__" 			<< endl;
		break;
		
		case 6:
			cout << "\t\t\t|-------------------|"	<< endl;
			cout << "\t\t\t|                  ( )" 	<< endl;
			cout << "\t\t\t|                  /|\\"	<< endl;
			cout << "\t\t\t|                   |"	<< endl;
			cout << "\t\t\t|                    \\"	<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|_"			<< endl;
		break;

		case 5:
			cout << "\t\t\t|-------------------|"	<< endl;
			cout << "\t\t\t|                  ( )"	<< endl;
			cout << "\t\t\t|                  /|\\"	<< endl;
			cout << "\t\t\t|                   |"	<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|_"			<< endl;
		break;


		case 4:
			cout << "\t\t\t|-------------------|"	<< endl;
			cout << "\t\t\t|                  ( )"	<< endl;
			cout << "\t\t\t|                  /|"	<< endl;
			cout << "\t\t\t|                   |"	<< endl;
			cout << "\t\t\t|"                       << endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|_"			<< endl;
		break;

		case 3:
			cout << "\t\t\t|-------------------|"	<< endl;
			cout << "\t\t\t|                  ( )"	<< endl;
			cout << "\t\t\t|                   |"	<< endl;
			cout << "\t\t\t|                   |"	<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|_"			<< endl;
		break;

		case 2:
			cout << "\t\t\t|------------------|"	<< endl;
			cout << "\t\t\t|                 ( )"	<< endl;
			cout << "\t\t\t|                  |"	<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|_"			<< endl;
		break;

		case 1:
			cout << "\t\t\t|------------------|"	<< endl;
			cout << "\t\t\t|                 ( )"	<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|_"			<< endl;
		break;

		case 0:
			cout << "\t\t\t|------------------|"	<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|"			<< endl;
			cout << "\t\t\t|_"			<< endl;
		break;

		default:
			cout << "Error";
			exit;
		break;
	}
}

void print_blanks ( string word, string letters_guessed) {
	for ( int i = 0; i < word.size(); i++ ) {
		if ( letters_guessed.find( word.at( i )) != -1 )
			cout << word.at ( i ) << " ";
		else {
			cout << "_ ";
			flag = false;
		}
	}
}

int NONCE() {
	srand ( time(NULL));
	return rand() % 10 + 1;
}
