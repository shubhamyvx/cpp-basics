//Input two boolean values (or conditions) and demonstrate &&, ||, and !.
#include <iostream>
using namespace std;

int main() {
    bool a, b;
    cin >> a >> b;

    cout << "a && b = " << (a && b) << endl;
    cout << "a || b = " << (a || b) << endl;
    cout << "!a = " << (!a) << endl;
    cout << "!b = " << (!b) << endl;

    return 0;
}