#include <iostream>

int main()
{
    std::cout << "Welcome to the C++ divisor program!" << std::endl;

    while (true)
    {
        try {
            float bigNum, smallNum;
            int count;

            std::cout << "\nPlease enter the bigger number: ";
            std::cin >> bigNum;
            std::cout << "\nPlease enter the smaller number: ";
            std::cin >> smallNum;

            if (bigNum >= smallNum) {
                float actualDivisor = smallNum;
                while (smallNum < bigNum) {
                    if ((smallNum + actualDivisor) <= bigNum) {
                        smallNum += actualDivisor;
                        count += 1;
                    }
                    else {
                        break;
                    }
                }
            }
            std::cout << "\nThe number of times the bigger number can be divided by the smaller number is: " << count << std::endl;
        }
        catch (std::exception& ValueError) {
            std::cerr << "\nSorry, you entered a wrong input!" << std::endl;
        }

        std::string choice;
        std::cout << "\nDo you want to divide again? (yes/no): ";
        std::cin >> choice;
        if (choice == "yes" || choice == "y") {
            continue;
        }
        else {
            std::cout << "\nThank you for using the C++ divisor program!" << std::endl;
            break;
        }
    }
    
}
