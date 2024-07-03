#include <iostream>
#include <string>

std::string name = "CalculatorApp ";
std::string version = "v0.1\n";

void welcome() {
	std::cout << name << version << std::endl;
}

int add(float a, float b) {return a + b;}
int subtract(float a, float b) {return a - b;}
int multiply(float a, float b) {return a * b;}
int division(float a, float b) {return a / b;}

int main() {
	welcome();

	std::string a;
	std::string b;
	std::string math_operator;

	std::cout << "Input a: ";
	std::getline(std::cin, a);
	std::cout << "Input b: ";
	std::getline(std::cin, b);
	std::cout << "Input math operator: ";
	std::getline(std::cin, math_operator);
	
	if (math_operator == "+") {
		std::cout << "Result: " << add(std::stof(a), std::stof(b)) << std::endl;
	}
	else if (math_operator == "-") {
		std::cout << "Result: " << subtract(std::stof(a), std::stof(b)) << std::endl;
	}
	else if (math_operator == "*") {
		std::cout << "Result: " << multiply(std::stof(a), std::stof(b)) << std::endl;
	}
	else if (math_operator == "/") {
		std::cout << "Result: " << division(std::stof(a), std::stof(b)) << std::endl;
	}
	else {
		std::cout << "Error: Invalid mathematical operator.";
	}
}