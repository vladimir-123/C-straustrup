#include <iostream>

int main(int argc, char const *argv[])
{
	std::cout << "Enter a number and I will tell you if it's odd or even\n";
	int a;
	std::cin >> a;
	a %= 2;
	if (a)
	{
		std::cout << "Odd\n";
	} else {
		std::cout << "Even\n";
	}
	return 0;
}