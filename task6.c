#include <stdio.h>

int main()
{
	int arr[10], x, sum=0, mult=0, div=0, sub=0;
	char operation;

	printf("Enter 10 numbers: \n");

	for(x=0; x<10; x++){
		scanf(" %d", &arr[x]);
	}

	do{

	printf("\nEnter an operation from the following: \n +, -, *, / \n");
	scanf(" %c", &operation);
	printf("Operation: %c \n", operation);

	for(x=0; x<10; x++){
		printf(" %d", arr[x]);
	}


	if(operation == '+'){
		for(x=0; x<10; x++){
			sum=arr[x]+sum;
		}

		printf("\nThe sum of the numbers is: %d", sum);
	break;
	}

	if(operation == '-'){
		sub=arr[0];
		for(x=1; x<10; x++){
			sub=sub-arr[x];
		}

		//sub=sub-arr[9];
		printf("\nThe numbers subtracted from eachother equal to: %d", sub);
	break;
	}

	if(operation == '*'){
		mult=arr[0];
		for(x=1; x<10; x++){
			mult=arr[x]*mult;
		}
		printf("\nThe product of the numbers is: %d", mult);
	break;
	}

	if(operation =='/'){
		div=arr[0];
		for(x=1; x<10; x++){
			div=div/arr[x];
		}
		printf("\nEach number divided by the next is equal to: %d", div);
	break;
	}

	}while(operation != ('+'|'-'|'*'|'/'));

return 0;
}


/* Assignment task 6

Write a program that reads in 10 numbers into an array and an operation symbol that could be +, -, *, /. Perform the chosen operation on all the elements of the array and print the result.

Make the program interactive. Display the operation symbols and ask the user to select one of them. Perform the chosen operation on all the elements of the array and print the result. Ask the user if they want to continue with another operation or stop. �

Marking scheme:

��� 1 mark for presenting the program in week 8.
��� 5 marks for item 1.
��� 4 marks for item 2.  */
