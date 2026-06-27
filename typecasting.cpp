//Demonstrate implicit and explicit type casting with integers and floating-point numbers
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.5;

    // Implicit Type Casting
    float sum = a + b;
    cout << "Implicit Type Casting: " << sum << endl;

    // Explicit Type Casting
    int x = static_cast<int>(b);
    cout << "Explicit Type Casting: " << x << endl;

    return 0;
}