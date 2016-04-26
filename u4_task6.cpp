#include <iostream>
#include <vector>
#include <string>

int main(int argc, char const *argv[])
{
    std::vector<std::string> v = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};
    std::string a;
    std::cin >> a;
    for (int i = 0; i < v.size(); ++i)
    {
        if (a == v[i]) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}