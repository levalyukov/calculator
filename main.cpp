#include <iostream>
#include <string>
#include <math.h>

using namespace std;
#define PI 3.14159265

int main() {
	string name = "\nCalculatorApp";
	string version = "v0.8\n";
	string operators = "'+', '-', '*', '/', 'sin', 'cos', 'tg', 'pow' | Commands: 'help', 'about', 'exit'";

	cout << name << " " << version;

	while (true) {
		double x, y, result;
		string op, first_value, second_value;

		cout << "\nAvailable  mathematical operators: " << operators << "\n" << endl;
		cout << "Enter math operator or command: ";
		getline(cin, op);

		if (op != "help" && op != "about" && op != "exit") {
			if (op != "sin" && op != "cos" && op != "tg") {
				cout << "Enter first value: ";
				getline(cin, first_value);
				cout << "Enter second value: ";
				getline(cin, second_value);
			}
			else {
				cout << "Enter first value: ";
				getline(cin, first_value);
			}

			if (op != "sin" && op != "cos" && op != "tg") {
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
				cout << fixed << "Result: " << first_value << " " << op << " " << second_value << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "-") {
				result = x - y;
				cout << fixed << "Result: " << first_value << " " << op << " " << second_value << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "*") {
				result = x * y;
				cout << fixed << "Result: " << first_value << " " << op << " " << second_value << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "/") {
				if (y != 0) {
					result = x / y;
					cout << fixed << "Result: " << first_value << " " << op << " " << second_value << " = " << result << endl;
					cout << "------\n";
				}
				else {
					cout << "[ERROR] Division by zero is impossible." << endl;
					cout << "------\n";
				}
			}

			else if (op == "sin") {
				result = sin(x * PI / 180);
				cout << fixed << "Result: " << "sin(" << x << "°)" << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "cos") {
				result = cos(x * PI / 180);
				cout << fixed << "Result: " << "cos(" << x << "°)" << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "tg") {
				result = tan(x * PI / 180);
				cout << fixed << "Result: " << "tg(" << x << "°)" << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "pow") {
				result = pow(x, y);
				cout << fixed << "Result: " << first_value << "^" << second_value << " = " << result << endl;
				cout << "------\n";
			}

			else {
				cout << "[ERROR] Invalid mathematical operator." << endl;
			}
		}

		else {
			if (op == "help") {
				cout << "\n* Mathematicals operators *\n";
				cout << "'+': Adds two values Example: 5 + 5 = 10\n";
				cout << "'-': Subtracting two values. Example: 10 - 5 = 5\n";
				cout << "'*': Multiplication of two values. Example: 10 * 5 = 50\n";
				cout << "'/': Dividing two values. Example: 10 + 2 = 5\n";
				cout <<"'sin': Calculation of the sine. Example: sin(90°) = 1\n";
				cout <<"'cos': Calculating the cosine. Example: cos(90°) = 0\n";
				cout <<"'tan': Calculation of the tangent. Example: tan(45°) = 1\n";
				cout <<"'pow': Exponentiation of a number. Example: 5 ^ 5 = 3125\n";
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