#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cmath>
#include <map>

#define PI 3.14159265

std::string name = "\nCalculatorApp ";
std::string version = "v0.6";
std::string availableOperators = "Available mathematical operators: '+', '-', '*', '/', 'sin', 'cos', | Commands: 'exit'\n";

void welcome() {std::cout << name << version << std::endl;}
void formuls() {std::cout << availableOperators << std::endl;}

bool isInteger(const std::string& str) {
    try {
        std::size_t pos;
        std::stoi(str, &pos);
        return pos == str.length();
    } 
	catch (const std::invalid_argument& e) {return false;} 
	catch (const std::out_of_range& e) {return false;}
}

bool isDouble(const std::string& str) {
    try {
        std::size_t pos;
        std::stod(str, &pos);
        return pos == str.length();
	} 
	catch (const std::invalid_argument& e) {return false;} 
	catch (const std::out_of_range& e) {return false;}
}

bool check(const std::string& a, const std::string& c) {
	return (isInteger(a) || isDouble(a)) && (isInteger(c) || isDouble(c));
}

int main() {
	welcome();

	app:
		formuls();

		char mathOperator;
		double x,y,result;

		std::string a = std::to_string(x);
		std::string b = std::to_string(mathOperator);
		std::string c = std::to_string(y);

		std::cout << "Enter math operator or command: ";
		std::getline(std::cin, b);

		if (b != "exit") {
			if (b != "sin" && b != "cos") {
				std::cout << "Enter first value: ";
				std::getline(std::cin, a);
				std::cout << "Enter second value: ";
				std::getline(std::cin, c);
			} else {std::cout << "Enter value: "; std::getline(std::cin, a); c = std::to_string(0);}
		} else {goto exit_app;}

		if (check(a,c)) {} 
		else {std::cout << "Error: Invalid values.\n" << std::endl; goto app;}

	calculation:
		mathOperator = b.at(0);

		switch (mathOperator) {
			case '+': // add
				result = stod(a) + stod(c);
				goto result;
				break;
				
			case '-': // subtract
				result = stod(a) - stod(c);
				goto result;
				break;
				
			case '*': // multiply
				result = stod(a) * stod(c);
				goto result;
				break;

			case '/': // divide
				result = stod(a) / stod(c);
				goto result;
				break;

			case 's': // sinus
				result = sin(stod(a)*PI/180);
				goto result;
				break;

			case 'c': // cosinus
				result = sin(stod(a)*PI/180);
				goto result;
				break;

			case 'e': // exit the app
				goto exit_app;
				break;

			default:
				std::cout << "Error: Invalid mathematical operator.\n" << std::endl;
				goto app;
				break;
		}

	result:
		if (b == "sin") {
			std::cout << std::fixed << "Result: " << "sin" << "(" << stod(a) <<")" << " = " << result << "\n" << std::endl;
		} else if (b == "cos") {
			std::cout << std::fixed << "Result: " << "cos" << "(" << stod(a) <<")" << " = " << result << "\n" << std::endl;
		} else {
			std::cout << std::fixed << "Result: " << stod(a) << " " << mathOperator << " " << stod(c) << " = " << result << "\n" << std::endl;
		}
		std::cout << "------" << std::endl;
		goto app;

	exit_app:
		return 0;
}