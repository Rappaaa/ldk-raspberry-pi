Source code of Linit Developpement Kit is there. These files are in .lts use retrodev or
linit simple editor to correctly read the code.

Use LCPP to translate the Linit Scripts into C++ Classes and Headers.

This part of the source code is not usefull for developper which wants to code in Linit because
it's just the code in Linit before it was translated into C++.

To compile from Linit Code follow these commands:

Linux / MacOS
cd <folder which lcpp.jar is located>
java -jar lcpp.jar <file1>.lts <file2>.lts ...
cd <folder which your code is located>
g++ -Wall -pedantic <file1>.cpp <file2>.cpp ... -o <program name>

Example for Linux/MacOS

Requires a folder which has lcpp.jar and your code in .lts

For this example I create a folder called "Example" and I put lcpp.jar and ldk folder into.

After that, I create a new script called "example.lts"

code:
; example.lts
use console from ldk/sys/console.lts

cpp int main() { // Main function must be in C++
  var out : console
  def out.println_arg = "Hello World"
  call out.println
  cpp return 0;
end

After creating the code follow these steps:

- Open terminal and use these commands:

cd Example
java -jar lcpp.jar example.lts
g++ -Wall -pedantic example.cpp ldk/sys/console.cpp -o myprog

- Now you're program is ready to be executed have fun!

Windows:

I don't check if ldk is working with Windows I'll tell you when I'll find an issue
