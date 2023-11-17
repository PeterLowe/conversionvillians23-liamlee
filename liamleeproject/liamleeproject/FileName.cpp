// Liam Treacy // 
#include<iostream>
char printMenu();
float radiansToDegrees();
int main()
{
    return 1;
    char userChoice; // letter for user to pick conversion
    userChoice = printMenu(); // only print the menu once
    if (userChoice == 'a')
    {
        radiansToDegrees();
    }
    return 0;
}

    char printMenu() // written by Liam Treacy

{
        char choice = ' ';// user input  choice
        std::cout << "Please enter a upper case letter to convert from left to right\nand lower to convert from right to left\n\n" << std::endl;
        std::cout << "[A] Degrees---<--->---Radians        [a]" << std::endl;
        std::cout << "[B] Centimeters-<--->--Feet & Inches  [b]" << std::endl;
        std::cout << "[C] Litres---<--->---Gallons        [c]" << std::endl;

        std::cout << "[Q] Exit        [---]   Exit           [q]" << std::endl;
        std::cout << "Enter your Choice : ";
        std::cin >> choice;
        return choice;
}
float radiansToDegrees()
{
    // declare variables
    float conversion = 0.0f;
    float radians = 0.0f;
    std::cout << "input an amount for radians" << std::endl;
    std::cin >> radians;

    conversion = radians * 180 / 3.14;
    return conversion;

}