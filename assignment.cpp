//Demonstrate the use of +=, -=, *=, /=, and %=
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int temp;

    temp = a;
    temp += b;
    cout << "a += b : " << temp << endl;

    temp = a;
    temp -= b;
    cout << "a -= b : " << temp << endl;

    temp = a;
    temp *= b;
    cout << "a *= b : " << temp << endl;

    temp = a;
    temp /= b;
    cout << "a /= b : " << temp << endl;

    temp = a;
    temp %= b;
    cout << "a %= b : " << temp << endl;

    return 0;
}