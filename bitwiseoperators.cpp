//Perform bitwise AND, OR, XOR, NOT, left shift, and right shift on two integers
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    return 0;
}