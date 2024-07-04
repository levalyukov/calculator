#include <iostream>
#include <iomanip>
#include <string>
#include <map>

std::string name = "CalculatorApp ";
std::string version = "v0.3 \n";
std::string formuls = "Available mathematical operators: +, -, *, / \n";

void welcome() {std::cout << name << version << formuls << std::endl;}

int main() {
	welcome();

	calculator: 
		char mathOperator;
		double x,y,result;

		std::string a = std::to_string(x);
		std::string b = std::to_string(mathOperator);
		std::string c = std::to_string(y);
		std::string d = std::to_string(result);

		std::cout << "Input x: ";
		std::getline(std::cin, a);
		std::cout << "Operator: ";
		std::getline(std::cin, b);
		std::cout << "Input y: ";
		std::getline(std::cin, c);

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
				std::cout << "Error: Invalid mathematical operator." << std::endl;
				std::cout << "------" << std::endl;
				goto calculator;
				break;
		}

	result:
		std::cout << std::fixed << "Result: " << stod(a) << " " << mathOperator << " " << stod(c) << " = " << result << std::endl;
		std::cout << "------" << std::endl;

		goto calculator;

	return 0;
}