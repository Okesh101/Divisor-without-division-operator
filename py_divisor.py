print("Welcome to the divisor.")

while (True):
    try:
        bigNum = int(input("Enter big number: "))
        smallNum = int(input("Enter small number: "))

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
    else:
        print("\nThank you for dividing!")
        break
