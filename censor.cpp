#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	std::cout << "Enter the word to check if it is allowed:\n";
	std::vector<std::string> words;
	for (std::string temp; std::cin >> temp; )
	{
		words.push_back(temp);
	}

	std::cout << "\nThe results are:\n";

	for (int i = 0; i < words.size(); ++i)
	{
		if (words[i] != "Broccoli" || words[i] != "Salad")
		{
			std::cout << words[i] << " ";
		} else {
			std::cout << "Bleep ";
		}
	}
	std::cout << std::endl;
	return 0;
}