#include <iostream>

std::string divide (long int dividend, long int divisor) {
    int count = 1;
    long int actualDivisor = divisor;
    if (actualDivisor == 0 && dividend != 0) {
        std::string answer = "\nDivisor cannot be zero. Math Error!";
        return answer;
    }

    else if (actualDivisor == 0 && dividend == 0) {
        count = 0;
        std::string answer = std::to_string(dividend) + "/" + std::to_string(actualDivisor) + " = " + std::to_string(count);
        return answer;
    }

    else if (dividend >= actualDivisor) {
        while (divisor < dividend) {
            if ((divisor + actualDivisor) <= dividend) {
                divisor += actualDivisor;
                count += 1;
            }
            else {
                break;
            }
        }
    }

    else if (actualDivisor > dividend) {
        count = 0;
    }

    else {
        std::string answer = "\nInvalid Operation!";
        return answer;
    }

    std::string answer = std::to_string(dividend) + "/" + std::to_string(actualDivisor) + " = " + std::to_string(count);
    return answer;
}

int main()
{
    std::cout << "Welcome to the C++ divisor program!" << std::endl;

    while (true)
    {
        // Block of codes that collect input and try for exceptions
        int dividend, divisor;
        try {
            std::cout << "\nPlease enter the bigger number: ";
            std::cin >> dividend;
            std::cout << "\nPlease enter the smaller number: ";
            std::cin >> divisor;
        }
        catch (std::exception& ValueError) {
            std::cerr << "\nSorry, you entered a wrong input!" << std::endl;
            break;
        }
        
        // Block of codes that provide the result from the division function
        std::string answer = divide(dividend, divisor);
        std::cout << answer;

        // Block of codes that checks if user wants to continue
        std::string choice;
        std::cout << "\nDo you want to divide again? (yes/no): ";
        std::cin >> choice;
        for (auto &c : choice) {
            c = std::tolower(c);
        }
        if (choice == "yes" || choice == "y") {
            continue;
        }
        else if (choice == "no" || choice == "n") {
            std::cout << "\nYou exited the program!"
                         "\nThank you for using the C++ divisor program!" << std::endl;
        }
        else {
            std::cout << "\nWrong Input! \nThank you for using the C++ divisor program!" << std::endl;
            break;
        }
    }
    
}
