/*
Justin Hollmer - 9/21/17   3rd period
Assignment Name: Display Text
Inrto to C++ through printing "Hello World!", Name, and period (displayed as a variable)
*/

//Libraries
#include <iostream> // Gives accesss to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // Gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
// Functions()
void pause() {
	cout << "Press key to continue...";
	while (!_kbhit());
	_getch();
	cout << '/n';
}
// MAIN
void main() {
	int l = 3;
	cout << "Justin Hollmer" << endl;
	cout << "Period " << l << endl;
	cout << "Hello World!" << endl;

	pause(); // Pauses to see the displayed text
}