#include <stdio.h>
int main()                                            //starts a main turn an integer value
{                                                     //begins he function
    int number;                                       //declare the integer variable 'number'
    printf("Enter a number: ");                       //prints a statement to the screen asking the user to enter a number
    scanf("%d", &number);                             //takes the inputted value from the user and assigns it to the variable 'number'
    if (typeof(number) == int)
    {
        break
    }
    if (number <= 0)                                  //checks if the value of 'number' is equal to or less than zero
    {                                                 //begins the if statement
        if (number == 0)                              //checks if the value of'number' is equal to zero
            printf("You entered 0");                  //if this is true, prints that the value is inputted was zero
        else                                          //if the value is not equal to zero:
            printf("You entered a negative number."); //print that the value must be negative
    }                                                 //closes the if statement
    else                                              //if the value is not less than or equal to zero:
        printf("You entered a positive number.");     //print that the value must be positive
    return 0;                                         //returns the value '0' to the function
}                                                     //closes the funciton
