#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {
	string data="data";
	ofstream Data("trial.dat");

	Data << data;
	Data << "Hey, Did this work?";
}
