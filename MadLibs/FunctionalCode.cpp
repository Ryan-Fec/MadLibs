#include <iostream>

int main() {
	std::cout << "Give me an occupation: ";
	std::string occu;
	std::cin >> occu;
	std::cout << "\nGive me an object: ";
	std::string obj;
	std::cin >> obj;
	std::cout << "The " << occu << " went to the " << obj << " store.";
}