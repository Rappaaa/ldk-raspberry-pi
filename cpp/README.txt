Download the cpp folder and rename it "ldk" that's better for after.

Linux/MacOS:

Compilation from  C++

cd <code folder>
g++ -Wall -pedantic <files>.cpp -o myprog

Don't forget to compile the includes files.
example:

#include "ldk/sys/console.h" -> g++ -Wall -pedantic console.cpp <files>.cpp -o myprog

Compilation from Linit

Don't forget to put lcpp.jar in your code folder

cd <code folder>
java -jar lcpp.jar <file1>.lts <file2>.lts
g++ -Wall -pedantic <files>.cpp -o myprog

Don't forget to compile the includes files.
example:

use console from ldk/sys/console.lts -> g++ -Wall -pedantic console.cpp <files>.cpp -o myprog
