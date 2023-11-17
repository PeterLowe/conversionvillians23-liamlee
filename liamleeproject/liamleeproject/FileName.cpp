
// Liam Treacy // Lee Lindsay
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

char printMenu() // written by Lee
{

    char choice = ' ';// user input  choice
    std::cout << "Please enter a upper case letter to convert from left to right\nand lower to convert from right to left\n\n" << std::endl;
    std::cout << "[A] Degrees---<--->---Radians        [a]" << std::endl;
    std::cout << "[B] Centimeters-<--->--Feet & Inches  [b]" << std::endl;
    std::cout << "[C] Litres---<--->---Gallons        [c]" << std::endl;

	std::cout << "[D] Mpg---------<--->---L/100km        [d]" << std::endl;
	std::cout << "[E] Kilograms---<--->---Stone   & Pounds" << std::endl;
	std::cout << "[F] Celsius---<--->---Fahrenheit     [f]" << std::endl;
	std::cout << "[Q] Exit------[---]----Exit           [q]" << std::endl;
	std::cout << " Enter your choice  : ";
	std::cin >> choice;
	return choice;
}

