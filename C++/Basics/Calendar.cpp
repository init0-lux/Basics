#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
	int year, FirstDay, currentMonth = 1, numDays;
	int x1, x2, x3;

	cout << "Year of Calendar : ";
	cin >> year;
	cout << endl;

	// Calculate first day of year;
	x1 = ( year - 1 ) / 4;
	x2 = ( year - 1 ) / 100;
	x3 = ( year - 1 ) / 400;

	// Starting day of year;
	FirstDay = ( year + x1 - x2 + x3 ) % 7; //Figure Out Math;
	cout << year << endl << endl;

	// Loop over all months in a year;
	while ( currentMonth <= 12 ) {
		if ( currentMonth == 1 ) {
			numDays = 31;
			cout << "January:" << endl << endl;
		}
		else if ( currentMonth == 2 ) {
			numDays = 28;
			cout << "February:" << endl << endl;
		}
		else if ( currentMonth == 3 ) {
			numDays = 31;
			cout << "March:" << endl << endl;
		}
		else if ( currentMonth == 4 ) {
			numDays = 30;
			cout << "April:" << endl << endl;
		}
		else if ( currentMonth == 5 ) {
			numDays = 31;
			cout << "May:" << endl << endl;
		}
		else if ( currentMonth == 6 ) {
			numDays = 30;
			cout << "June:" << endl << endl;
		}
		else if ( currentMonth == 7 ) {
			numDays = 31;
			cout << "July:" << endl << endl;
		}
		else if ( currentMonth == 8 ) {
			numDays = 31;
			cout << "August:" << endl << endl;
		}
		else if ( currentMonth == 9 ) {
			numDays = 30;
			cout << "September:" << endl << endl;
		}
		else if ( currentMonth == 10 ) {
			numDays = 31;
			cout << "October:" << endl << endl;
		}
		else if ( currentMonth == 11 ) {
			numDays = 30;
			cout << "Novemeber:" << endl << endl;
		}
		else if ( currentMonth == 12 ) {
			numDays = 31;
			cout << "December:" << endl << endl;
		}

		cout << " S  M  T  W  T  F  S" << endl;
		cout << "--------------------" << endl;

		int day = 1;
		int i = FirstDay;
		while ( i > 0 ) {
			cout << "   ";
			i -= 1;
		}

		// Start Creating Calendar;
		while ( day <= numDays ) {
			cout << setw(2) << day << " ";
			
			// If more than 5 weeks in a month, init FirstDay to 0;
			if ( FirstDay == 6 ) {
				cout << endl;
				FirstDay = 0;
			}

			else
				FirstDay += 1;
			
			day += 1;
		}

		cout << endl << endl;
		currentMonth += 1;
	}

	cout << endl;
	return 0;
}
