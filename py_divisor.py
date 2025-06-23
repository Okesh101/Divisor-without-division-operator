print("Welcome to the divisor.")

while (True):
    try:
        bigNum = float(input("Enter big number: "))
        smallNum = float(input("Enter small number: "))

        count = 1
        if (bigNum >= smallNum):
            actualSmallNum = smallNum
            while (smallNum < bigNum):
                if ((smallNum + actualSmallNum) <= bigNum):
                    smallNum += actualSmallNum
                    count += 1
                else:
                    break
        print(count)
    except ValueError:
        print("Wrong Input!")
        break
  
    choice = str(input("\nDo you want to divide again? "))
    if (choice.casefold() == "yes" or choice.casefold() == "y"):
        continue
    elif (choice.casefold() == "no" or choice.casefold() == "n"):
        print("\nThank you for dividing! \nExiting the divisor.")
        break
    else:
        print("Wrong Input!")
        break
