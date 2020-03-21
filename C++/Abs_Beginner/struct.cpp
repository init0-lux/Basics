#include<iostream>

using namespace std;

int main() {
	struct Student {
		char name[15];
		int age;
		int height;
	};

	Student a;

	a.age=12;
	a.height=122;

	return 0;
}
