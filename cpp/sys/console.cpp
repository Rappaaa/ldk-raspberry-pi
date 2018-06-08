/** LCPP Compiler - (c) Litikz 2018
LCPP is an open-source compiler check at : https://www.github.com/Rappaaa
*/

#include <iostream>

#include "console.h"

using namespace std;

const char* println_arg;
void console::println() {
	cout << println_arg << endl;
}
const char* print_arg;
void console::print() {
	cout << print_arg;
}
