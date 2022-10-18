#include <iostream>
#include <cmath>

// Just Execute the software by ./math//
using namespace std;

int main() {
    int num1, num2;
    char op;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Operator [ '+' '-' '/' '*']: ";
    cin >> op;
    cout << "Enter Second Number: ";
    cin >> num2;
    int res;
    if(op == '+') {
        res = num1 + num2;
    } else if(op == '-') {
        res = num1 - num2;
    } else if(op == '*') {
        res = num1 * num2;
    } else if(op == '/') {
        res = num1 / num2;
    } else {
        cout << "Invalid input! Killing Process" << endl;
        return 1;
    }

cout << res << " Is the result! (" << num1 << "" << op << "" << num2 << "=" << res << ")" << endl;
return 0;

}