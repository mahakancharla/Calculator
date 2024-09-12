/**
* Name: Maha Kancharlapalli
* Program Name: Calculator
* Date: 9/12/2024
* Extra: Lines 34-40; Checks which number is greater. If the numbers are equal, it prints that out. 
*/


#include <iostream>
using namespace std;
int num, num2;
int main()
{
    //takes user input for the first number
    std::cout << "Enter a Number:" <<endl;
    cin >> num;
    //takes the user input for the second number
    std::cout << "Enter another Number:" <<endl;
    cin >> num2;

    //prints and calculates all of the calculations
    std::cout << "Sum: " << num + num2 << endl;
    std::cout << "Difference: " << num - num2 << endl;
    std::cout << "Multiplying: " << num * num2 << endl;
    std::cout << "Integer Division: " << num / num2 << endl;
    std::cout << "Mod: " << num % num2 << endl;
    std::cout << "Increment the first number: " << ++num << endl;
    std::cout << "Decrement the second number: " << --num2 << endl;

    //reverts variables to their initial value
    --num;
    ++num2;

    //EXTRA
    if (num > num2)
        std::cout << num << "is the larger number" << endl;
    else if (num2 > num)
        std::cout << num2 << "is the larger number" << endl;
    else
        std::cout << "The numbers are equal" << endl;
}




//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
