#include <iostream>
// программа получает на вход 3 слова и выводит их в алфавитном порядке 
int main(int argc, char const *argv[])
{
	std::cout << "Enter three words:\n";
	std::string a;
	std::string b;
	std::string c;
	std::cin >> a >> b >> c;
	if (a <= b && a <= c){
		std::cout << a << ", ";
		if (b <= c){
			std::cout << b << ", " << c << ".\n";
		} else {
			std::cout << c << ", " << b << ".\n";
		}
	} else if (b <= c){
		std::cout << b << ", ";
		if (a <= c){
			std::cout << a << ", " << c << ".\n";
		} else {
			std::cout << c << ", " << a << ".\n";
		}
	} else {
		std::cout << c << ", ";
		if (a <= b){
			std::cout << a << ", " << b << ".\n";
		} else {
			std::cout << b << ", " << a << ".\n";
		}
	}
	return 0;
}