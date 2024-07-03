#include <iostream>
#include <iomanip>
#include <string>
#include <map>

std::string name = "CalculatorApp ";
std::string version = "v0.2\n";

void welcome() {std::cout << name << version << std::endl;}

int main() {
	double x;
	double y;
	double result;

	char mathOperator;
	
	std::string a = std::to_string(x);
	std::string b = std::to_string(mathOperator);
	std::string c = std::to_string(y);
	std::string d = std::to_string(result);

	std::cout << "Input: ";
	std::getline(std::cin, a);
	std::cout << "Operator: ";
	std::getline(std::cin, b);
	std::cout << "Input: ";
	std::getline(std::cin, c);

	mathOperator = b.at(0);
	
	switch (mathOperator) {
		case '+':
			result = stod(a) + stod(c);
			break;
		case '-':
			result = stod(a) - stod(c);
			break;
		case '*':
			result = stod(a) * stod(c);
			break;
		case '/':
			result = stod(a) / stod(c);
			break;
		default:
			std::cout << "Error: Invalid mathematical operator.";
			break;
	}

	std::cout << std::fixed << "Result: " << stod(a) << " " << mathOperator << " " << stod(c) << " = " << result << std::endl;
}