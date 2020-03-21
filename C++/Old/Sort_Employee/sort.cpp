# include <iostream>
# include <cstdlib>
# include <fstream>
# include <iomanip>

using namespace std;

int main() {
	cout << left;

	int salary;
	string name;

	ifstream employee_file ("Employees.txt");
	
	if ( !employee_file ){
		cout << "Employee data file not found!\n";
		return -9;
	}

	cout << "\t    Payroll\n";
	cout << setw (25) << "Name" << "Salary" << endl;

	employee_file.ignore ( 255, '\n' );
	employee_file.ignore ( 255, '\n' );
	
	// Pre-Read
	getline ( employee_file, name, '\t' );
	employee_file >> salary;

	while ( !employee_file.eof() ){
		cout << setw (26) << name << salary; // <<endl; for lines between outputs;

		// Post-Read
		getline ( employee_file, name, '\t' );
		employee_file >> salary;
	}

	cout << endl;
	return 0;
}
