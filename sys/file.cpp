/** LCPP Compiler - (c) Litikz 2018
LCPP is an open-source compiler check at : https://www.github.com/Rappaaa
*/

#include <iostream>

#include "file.h"

using namespace std;

#include <fstream>
char* file_bytes;
const char* path;
unsigned int length;
void file::init_file() {
	ifstream input(path);
	unsigned int i;
	i = 0;
	while ( !input.eof() ) {
		i = i+1;
	}
	length = i;
	input.close();
	file_bytes = new char[length];
	ifstream in(path);
	i = 0;
	while ( !in.eof() ) {
		in.get(file_bytes[i]);
		cout << file_bytes[i];
		i = i + 1;
	}
	in.close();
	cout << "File successfully readed" << endl;
}
