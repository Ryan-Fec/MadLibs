#include <iostream>
#include <string>
int main() {
	std::cout << "Give me an adjective: ";
	std::string adj1;
	std::cin >> adj1;
	std::cout << "Give me a nationality: ";
	std::string nat;
	std::cin >> nat;
	std::cout << "Give me a name: ";
	std::string name;
	std::cin >> name;
	std::cout << "Give me a noun: ";
	std::string n1;
	std::cin >> n1;
	std::cout << "Give me an adjective: ";
	std::string adj2;
	std::cin >> adj2;
	std::cout << "Give me a noun: ";
	std::string n2;
	std::cin >> n2;
	std::cout << "Give me an adjective: ";
	std::string adj3;
	std::cin >> adj3;
	std::cout << "Give me a plural noun: ";
	std::string plun;
	std::cin >> plun;
	std::cout << "Give me a noun: ";
	std::string n3;
	std::cin >> n3;
	std::cout << "Give me a number: ";
	std::string num1;
	std::cin >> num1;
	std::cout << "Give me a shape: ";
	std::string shape;
	std::cin >> shape;
	std::cout << "Give me a food: ";
	std::string food1;
	std::cin >> food1;
	std::cout << "Give me a food: ";
	std::string food2;
	std::cin >> food2;
	std::cout << "Give me a number: ";
	std::string num2;
	std::cin >> num2;
	std::cout << "Pizza was invented by a " << adj1 << " " << nat << " chef named " << name 
		<< ". To make a pizza, you need to take a lump of " << n1 << ", and make a thin, round " << adj2 << " " << n2 << ". Then you cover it with " << adj3 << " sauce, cheese, and fresh chopped "
		<< plun << ". Next you have to bake it in a very hot " << n3 << ". When it is done, cut it into " << num1 << " " << shape << "s. Some kids like " << food1 << " pizza the best, but my favorite is the " << food2 
		<< " pizza. If I could, I would eat pizza " << num2 << " times a day!";
}