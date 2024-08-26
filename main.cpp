#include <iostream>
#include <string>
#include <math.h>
#define PI 3.14159265

using namespace std;

int main() {
	string name = "\nCalculator";
	string version = "v1.0\n";
	string operators = "'+', '-', '*', '/', 'sin', 'cos', 'tg', 'asin', 'acos', 'atg', 'atg2', 'pow' \nCommands: 'help', 'about', 'exit'";

	cout << name << endl;

	while (true) {
		double x, y, result;
		string op, first_value, second_value;

		cout << "\nMath operators: " << operators << "\n" << endl;
		cout << "Enter math operator or command: ";
		getline(cin, op);

		if (op != "help" && op != "about" && op != "exit") {
			if (op != "sin" && op != "cos" && op != "tg" && op != "asin" && op != "acos" && op != "atg") {
				cout << "Enter first value: ";
				getline(cin, first_value);
				cout << "Enter second value: ";
				getline(cin, second_value);
			}
			else {
				cout << "Enter first value: ";
				getline(cin, first_value);
			}

			if (op != "sin" && op != "cos" && op != "tg" && op != "asin" && op != "acos" && op != "atg") {
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
				cout << fixed << "Result: " << "sin(" << first_value << "°)" << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "cos") {
				result = cos(x * PI / 180);
				cout << fixed << "Result: " << "cos(" << first_value << "°)" << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "tg") {
				result = tan(x * PI / 180);
				cout << fixed << "Result: " << "tg(" << first_value << "°)" << " = " << result << endl;
				cout << "------\n";
			}

			else if (op == "asin") {
				result = asin (x) * 180.0 / PI;
				cout << fixed << "Result: " << "arcsin(" << first_value << ")" << " = " << result << "°" << endl;
				cout << "------\n";
			}

			else if (op == "acos") {
				result = acos (x) * 180.0 / PI;
				cout << fixed << "Result: " << "arccos(" << first_value << ")" << " = " << result << "°" << endl;
				cout << "------\n";
			}

			else if (op == "atg") {
				result = atan (x) * 180.0 / PI;
				cout << fixed << "Result: " << "arctg(" << first_value << ")" << " = " << result << "°" << endl;
				cout << "------\n";
			}

			else if (op == "atg2") {
				result = atan2 (y,x) * 180 / PI;
				cout << fixed << "Result: " << "arctg(" << first_value << ", " << second_value << ")" << " = " << result << "°" << endl;
				cout << "------\n";
			}

			else if (op == "pow") {
				result = pow(x, y);
				cout << fixed << "Result: " << first_value << " ^ " << second_value << " = " << result << endl;
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
				cout <<"'sin': Compute sine. Example: sin(90°) = 1\n";
				cout <<"'cos': Compute cosine. Example: cos(90°) = 0\n";
				cout <<"'tg': Compute tangent. Example: tg(45°) = 1\n";
				cout <<"'asin': Compute arc sine. Example: arcsin(0.5) = 30°\n";
				cout <<"'acos': Compute arc cosine. Example: arccos(0.5) = 60°\n";
				cout <<"'atg': Compute arc tangent. Example: arctg(1) = 45°\n";
				cout <<"'atg2': Compute arc tangent with two parameters. Example: atg2(-10, 10) = 135°\n";
				cout <<"'pow': Raise to power. Example: 5 ^ 5 = 3125\n";
				cout << "------\n";
			}
			else if (op == "about") {
				cout << name << " " << version << endl;
				cout << "Programming language: C++\n";
				cout << "GitHub: levalyukov/CalculatorApp-Cpp\n";
				cout << "Used libraries:\n";
				cout << "> math.h\n";
				cout << "\nThank you for using our calculator!!! \n";
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
}