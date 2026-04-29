#include <iostream>
using namespace std;

extern "C" int run();

int main() {
    cout << "The skeleton code for the assembly langauge" << endl;
    cout << "return value: " << run() << endl;
    return 0;
}