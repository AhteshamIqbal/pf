#include <iostream>
using namespace std;

// Function overloads with different signatures
void display(int num) {
    cout << "Integer: " << num << endl;
}

void display(double num) {
    cout << "Double: " << num << endl;
}

int main() {
    display(5);        // Calls the int version
    display(5.5);      // Calls the double version
    return 0;
}


