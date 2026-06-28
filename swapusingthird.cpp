//Swap two numbers using a temporary variable.
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}