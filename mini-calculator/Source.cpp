#include "Header.h"

int main() {
    double a {0}, b {0};
    char c {'?'};

    while (1) {
		cout << "Please enter two digits followed by an operator:" << endl;
		a = get_number();
		b = get_number();
		cin >> c;

        switch (c) {
        case '+':
            cout << "The sum of " << a << " and " << b << " is " << a + b << "." << endl;
            break;
        case '-':
            cout << "The subtraction of " << a << " and " << b << " is " << a - b << "." << endl;
            break;
        case '/':
            cout << "The division of " << a << " and " << b << " is " << a / b << "." << endl;
            break;
        case '*':
            cout << "The multiplication of " << a << " and " << b << " is " << a * b << "." << endl;
            break;
        default:
            cout << c << " is not a valid operator." << endl;
            break;
        }

		cout << endl;
    }

    return 0;
}