#include <iostream>
#include <string>
#include <math.h>

using namespace std;
const double PI = 3.141592653589793;

int main() {
	string name = "\nCalculatorApp";
	string version = "v0.8\n";
	string operators = "'+', '-', '*', '/', 'sin', 'cos', 'tan', 'pow' | Commands: 'help', 'about', 'exit'";

	cout << name << " " << version;

	while (true) {
		double x, y, result;
		string op, first_value, second_value;

		cout << "\nAvailable  mathematical operators: " << operators << "\n" << endl;
		cout << "Enter math operator or command: ";
		getline(cin, op);

		if (op != "help" && op != "about" && op != "exit") {
			if (op != "sin" && op != "cos" && op != "tan") {
				cout << "Enter first value: ";
				getline(cin, first_value);
				cout << "Enter second value: ";
				getline(cin, second_value);
			}
			else {
				cout << "Enter first value: ";
				getline(cin, first_value);
			}

			if (op != "sin" && op != "cos" && op != "tan") {
				try {
					x = stod(first_value);
					y = stod(second_value);
				} catch (invalid_argument& e) {
					cout << "[ERROR] Invalid number format." << endl;
					continue;
				}
			} else {
				try {
					x = stod(first_value);
				} catch (invalid_argument& e) {
					cout << "[ERROR] Invalid number format." << endl;
					continue;
				}
			}

			if (op == "+") {
				result = x + y;
				cout << "Result: " << first_value << " " << op << " " << second_value << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "-") {
				result = x - y;
				cout << "Result: " << first_value << " " << op << " " << second_value << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "*") {
				result = x * y;
				cout << "Result: " << first_value << " " << op << " " << second_value << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "/") {
				if (y != 0) {
					result = x / y;
					cout << "Result: " << first_value << " " << op << " " << second_value << " = " << result << endl;
					cout << "------\n";
				}
				else {
					cout << "[ERROR] Division by zero is impossible." << endl;
					cout << "------\n";
				}
			}

			else if (op == "sin") {
				result = sin(x * PI / 180);
				cout << "Result: " << "sin(" << x << "°)" << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "cos") {
				result = cos(x * PI / 180);
				cout << "Result: " << "cos(" << x << "°)" << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "tan") {
				result = tan(x * PI / 180);
				cout << "Result: " << "tan(" << x << "°)" << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "pow") {
				result = pow(x, y);
				cout << "Result: " << first_value << "^" << second_value << " = " << result << endl;
				cout << "------\n";
			}

			else {
				cout << "[ERROR] Invalid mathematical operator." << endl;
			}
		}

		else {
			if (op == "help") {
				cout << "\n* Mathematicals operators *\n";
				cout << "'+': The addition operator. Example: 5 + 5 = 10\n";
				cout << "'-': The subtraction operator. Example: 10 - 5 = 5\n";
				cout << "'*': The multiplication operator. Example: 10 * 5 = 50\n";
				cout << "'/': The division operator. Example: 10 + 2 = 5\n";
				cout <<"'sin': The sinusoidal operator. Example: sin(90°) = 1\n";
				cout <<"'cos': The cosine operator. Example: cos(90°) = 0\n";
				cout <<"'tan': The tangent operator. Example: tan(45°) = 1\n";
				cout <<"'pow': Exponentiation. Example: 5 ^ 5 = 3125\n";
				cout << "------\n";
			}
			else if (op == "about") {
				cout << name << " " << version << endl;
				cout << "Programming language: C++\n";
				cout << "GitHub: levalyukov/CalculatorApp-Cpp\n";
				cout << "Thank you for using our calculator. ❤️\n";
				cout << "------\n";
			}
			else if (op == "exit") {
				break;
			}
			else {
				cout << "[ERROR] Invalid command.";
			}
		}
	}
	
	return 0;
}