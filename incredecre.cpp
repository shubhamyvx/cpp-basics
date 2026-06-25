//Input a number and display its value after pre-increment, post-increment, pre-decrement, and post-decrement.
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    cout << "Original = " << num << endl;
    cout << "Pre-increment = " << ++num << endl;
    cout << "Post-increment = " << num++ << endl;
    cout << "After post-increment = " << num << endl;
    cout << "Pre-decrement = " << --num << endl;
    cout << "Post-decrement = " << num-- << endl;
    cout << "After post-decrement = " << num << endl;

    return 0;
}