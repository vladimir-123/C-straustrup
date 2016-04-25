#include <iostream>
#include <string>
// не реализовани возможность ввода 1.2in слитно и с точкой дробных чисел
void translate_in_cm(const std::string& unit, double& a);

int main(int argc, char const *argv[])
{
    std::cout << "Enter a number and cm, m, in, or ft"
              << ", then | to end program\n";

    double biggest, smallest, sum;
    double a;
    int count; // the number of entered numbers
    std::string unit;

    std::cin >> a >> unit; 
    std::cout << unit << std::endl;
    //check if the unit is correct 
    while (!(unit == "cm" || unit == "m" || unit == "in" || unit == "ft")) {
            std::cout << "Wrong unit! Enter again:\n";
            if (!(std::cin >> a >> unit)) {
                return 0;
            }
        }
    // reassign a in terms of centimeters
    translate_in_cm(unit, a);
    biggest = smallest = a; // prepare for the loop
    
    std::cout << "The number of centimeters you entered is " 
              << a << " the unit is " << unit << std::endl
              << "You can enter the next value of | to exit\n";
    sum += a; // sum in centimeters
    ++count;
    // start the loop
    while (std::cin >> a >> unit) { 
        while (!(unit == "cm" || unit == "m" || unit == "in" || unit == "ft")) {
            std::cout << "Wrong unit! Enter the unit of measurement again:\n";
            if (!(std::cin >> unit)) {
                return 0;
            }
        }
        translate_in_cm(unit, a);
        std::cout << "The number of centimeters you entered is "
                  << a << " the unit is " << unit << std::endl
                  << "You can enter the next value of | to exit\n";
        sum += a; // sum in centimeters
        ++count; // keep track of entered numbers
        if (a > biggest) { //values for the biggest and the smallest
            biggest = a;
        } else if (a < smallest) {
            smallest = a;
        }
    }

    // loop ends and results are displayed
    std::cout << "The number " << biggest << " is the biggest of so far entered!\n"
              << "The number " << smallest << " is the smallest of so far entered!\n"
              << "In total " << count << " numbers were entered\n"
              << "They accounted to " << sum/100.0 << " meters\n";

/* 6th step
    while (std::cin >> a) { 
        if (a > biggest) {
            biggest = a;
            std::cout << "The number " << biggest << " is the biggest of so far entered!\n";
        } else if (a < smallest) {
            smallest = a;
            std::cout << "The number " << smallest << " is the smallest of so far entered!\n";
        } else {
            std::cout << "The number you entered is " << a << std::endl;
        }
    }
*/
/* first five steps
    std::cout << "Enter pairs of numbers, then | to end program\n"; // display of two numbers
    double a, b;
    while (std::cin >> a >> b) { // display relative sizes of numbers
        std::cout << "a == " << a << '\t' << "b == " << b << std::endl;
    

        if (a < b + 0.01 && a > b - 0.01 && a != b) { // condition for number to be almost equal
            std::cout << "Numbers are almost equal!\n";
        } else if (a > b) { // conditions for numbers to be distinct
            std::cout << "The bigger number is " << a << std::endl
                      << "The smaller number is " << b << std::endl;
        } else if (a < b) {
            std::cout << "The bigger number is " << b << std::endl
                      << "The smaller number is " << a << std::endl;
        } else { // if not equal nor distinct, then they are equal
            std::cout << "Numbers are equal!\n";
        }
    }
*/

    return 0;
}

void translate_in_cm(const std::string& unit, double& a) {
    double coef;
    if (unit == "cm") {
        coef = 1;
    } else if (unit == "m") {
        coef = 100;
    } else if (unit == "in") {
        coef = 2.54;
    } else if (unit == "ft") {
        coef = 2.54 * 12;
    }
    a *= coef;
}
