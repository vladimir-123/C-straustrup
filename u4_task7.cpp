#include <iostream>
#include <vector>
#include <string>
// необходимо сделать калькулятор который будет принимать строковые и числовые значения
int main(int argc, char const *argv[])
{
    std::cout << "Enter 3 arguments: 2 values and a sign\n";
    
    std::vector<std::string> v = {"Zero", "One", "Two", "Three", "Four", "Five",
                                  "Six", "Seven", "Eight", "Nine",
                                  "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    std::string str1, str2;
    int num1, num2;
    char operation;
    
    std::cin >> str1 >> str2 >> operation;
    std::cout << str1 << " " << str2 << " " << operation << std::endl;

    for (int i = 0; i < v.size(); ++i)
    {
        if (str1 == v[i] && i < 10) {
            num1 = i;
        } else if (str1 == v[i]){
            num1 = i - 10;
        }

        if (str2 == v[i] && i < 10)
        {
            num2 = i;
        } else if (str2 == v[i]){
            num2 = i - 10;
        }
    }

    if (operation == '+') {
        std::cout << num1 + num2;
    } else if (operation == '-') {
        std::cout << num1 - num2;
    } else if (operation == '/') {
        std::cout << num1 / num2;
    } else if (operation == '*') {
        std::cout << num1 * num2;
    } else {
        std::cout << "Wrong operation!";
    }
    std::cout << std::endl;
    return 0;
}