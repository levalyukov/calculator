#include <iostream>
#include <iomanip>
#include <sstream>
#include <cctype>
#include <string>
#include <map>

std::string name = "CalculatorApp ";
std::string version = "v0.4 \n";
std::string formuls = "Available mathematical operators: +, -, *, / \n";

void welcome() {std::cout << name << version << formuls << std::endl;}

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

int main() {
	welcome();

	app: 
		char mathOperator;
		double x,y,result;

		std::string a = std::to_string(x);
		std::string b = std::to_string(mathOperator);
		std::string c = std::to_string(y);
		std::string d = std::to_string(result);

		std::cout << "Enter first number: ";
		std::getline(std::cin, a);
		std::cout << "Operator: ";
		std::getline(std::cin, b);
		std::cout << "Enter second number: ";
		std::getline(std::cin, c);

		if (isInteger(a)) {goto calculation;} 
		else if (isDouble(a)) {goto calculation;} 
		else {std::cout << "Error: X is a string.\n" << std::endl; goto app;}

		if (isInteger(c)) {goto calculation;} 
		else if (isDouble(c)) {goto calculation;} 
		else {std::cout << "Error: Y is a string.\n" << std::endl; goto app;}

	calculation:
		mathOperator = b.at(0);

		switch (mathOperator) {
			case '+':
				result = stod(a) + stod(c);
				goto result;
				break;
				
			case '-':
				result = stod(a) - stod(c);
				goto result;
				break;
				
			case '*':
				result = stod(a) * stod(c);
				goto result;
				break;

			case '/':
				result = stod(a) / stod(c);
				goto result;
				break;

			default:
				std::cout << "Error: Invalid mathematical operator.\n" << std::endl;
				goto app;
				break;
		}

	result:
		std::cout << std::fixed << "Result: " << stod(a) << " " << mathOperator << " " << stod(c) << " = " << result << "\n" << std::endl;
		goto app;

	return 0;
}