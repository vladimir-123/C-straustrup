#include <iostream>
// программа получает на вход 3 числа и выводит их в порядке убывания
int main(int argc, char const *argv[])
{
	std::cout << "Enter three numbers:\n";
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a >= b && a >= c){
		std::cout << a << ", ";
		if (b >= c){
			std::cout << b << ", " << c << ".\n";
		} else {
			std::cout << c << ", " << b << ".\n";
		}
	} else if (b >= c){
		std::cout << b << ", ";
		if (a >= c){
			std::cout << a << ", " << c << ".\n";
		} else {
			std::cout << c << ", " << a << ".\n";
		}
	} else {
		std::cout << c << ", ";
		if (a >= b){
			std::cout << a << ", " << b << ".\n";
		} else {
			std::cout << b << ", " << a << ".\n";
		}
	}
	return 0;
}