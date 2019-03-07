#include <stdio.h>

int main
{
	int month
	
	printf("Please enter the month (number):");
	scanf("%d", %month);
	
	switch(month) {
		case 31:
			printf("Jan/March/May/July/Aug/Oct/Dec");	
			break;
		case 30:
			printf("April/June/Sept/Nov");	
			break;
		case 28:
			printf("Feb");
		default:
			//last something
			break;
		}
return 0
}




