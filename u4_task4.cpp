#include <iostream>
// the programm guesses a numer from the range of 1 to 100
int main(int argc, char const *argv[])
{
    std::cout << "Think of a number between 1 and 100\n";
    int low = 0, high = 100, guess = 50, range;
    std::string ans = "lower";
    for (int i = 0; i < 7; ++i) {
        std::cout << "Is it " << ans << " than " << guess << std::endl
                  << "answer \"lower\" or \"higher\", or \" right\" if it is right\n";
        std::cin >> ans;
        if (ans == "lower") {
            high = guess;
            range = high - low;
            guess = low + range / 2;
            std::cout << "high " << high <<"\tlow " << low << std::endl;
        } else if (ans == "higher") {
            low = guess;
            range = high - low;
            guess += range / 2;
            std::cout << "high " << high <<"\tlow " << low << std::endl;
        } else if (ans == "right") {
            std::cout << "What a fancy program!\n";
            return 0;
        } else {
            std::cout << "Better luck next time!\n";
            return 0;
        }
    }
    std::cout << "Better luck next time!\n";
    return 0;
}