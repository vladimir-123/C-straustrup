#include <iostream>
// первое задание из 3й главы страуструп
int main(int argc, char const *argv[])
{
    std::cout << "Enter the adressee name: \n";
    std::string first_name;
    std::cin >> first_name;

    std::cout << "Enter your mutual friend's name: \n";
    std::string friend_name;
    std::cin >> friend_name;

    std::cout << "Enter your mutual friend's sex f/m: \n";
    char friend_sex;
    std::cin >> friend_sex;

    std::string refer;
    if (friend_sex == 'm'){
        refer = "him";
    } else {
        refer = "her";
    }

    std::cout << "Enter your friend's age: \n";
    int age;//возраст получателя письма
    std::cin >> age;

    std::cout << "Dear " << first_name << "," << std::endl
              << "How are you? I am fine. Miss you!" << std::endl
              << "Have you seen " << friend_name << " lately?" << std::endl
              << "If you see " << friend_name << " tell " << refer
              << " to call me\n"
              << "I've heard that you turned " << age << " years\n";

    if (110 < age || 0 >= age){
        std::cout << "You have got to be kidding!\n";
    } else if (12 > age){
        std::cout << "Next year you turn " << ++age << std::endl;
    } else if (17 == age){
        std::cout << "You can vote next year.\n";
    } else  if (70 < age){
        std::cout << "I hope that you don't get lonely on your retirement\n";
    }

    std::cout << "Yours truely\n\nVladimir\n";

    return 0;
}