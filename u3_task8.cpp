#include <iostream>
//эта программа получает слова и выдает соответсвующие буквы
int main(int argc, char const *argv[])
{
	std::cout << "Enter a word one, two, three, or four:\n";
	
	std::string word;
	std::cin >> word;
	int a;

	if ("one" == word) a = 1;
	if ("two" == word) a = 2;
	if ("three" == word) a = 3;
	if ("four" == word) a = 4;

	std::cout << a << std::endl;
	return 0;
}
