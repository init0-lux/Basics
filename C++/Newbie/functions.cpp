#include <iostream>

using namespace std;

// void doesn't have a return type
void print_hello() {
	cout << "Hello" << endl;
}

double get_age() {
	double age = 23.003;
	return age;
}

string get_name() {
	return "Hahahahahaa";
}

int main() {
	
	print_hello();
	cout << get_name() << endl;
	
	return 0;
}
