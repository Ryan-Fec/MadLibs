#include <iostream>
#include <string>
void MadLib(std::string word) {
	if (word[0] == "A" or "O" or "I" or "U" or "E")
		std::cout << "Give me an" << word << ": ";
	else
		std::cout std:: << "Give me a" << word << ": ";
	std::string word;
	std::cin word;
}

int main() {
	std::cout << "Give me an occupation: ";
	std::string occu;
	std::cin >> occu;
	std::cout << "Give me an object: ";
	std::string obj;
	std::cin >> obj;
	std::cout << "Give me an adverb: ";
	std::string adv;
	std::cin >> adv;
	std::cout << "Give me a verb: ";
	std::string verb;
	std::cin >> verb;
	std::cout << "Give me a food: ";
	std::string food;
	std::cin >> food;
	std::cout << "The " << occu << " went to the " << obj << " store. Then, they " << adv << verb <<;
}