#include <iostream>

int main(int argc, char const *argv[])
{
	int i = 0;
	char first_letter = 'a';
	int last_letter = 'z';
	while (first_letter <= last_letter) {
		std::cout << i << '\t' << first_letter << std::endl;
		++i;
		++first_letter;
	}
	return 0;
}