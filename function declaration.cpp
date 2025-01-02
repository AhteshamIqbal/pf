#include <iostream>
using namespace std;

// Function declaration (prototype)
int add(int a, int b);

int main() {
    cout << "Sum: " << add(3, 7) << endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

