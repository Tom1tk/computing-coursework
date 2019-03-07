#include <stdio.h>

int main
{
	int num1, num2, num3,
	printf("Please input 3 numbers:\n")
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 < num3){
		if (num1 < num2){
			printf("%d is the biggest number", num1);
		}else if (num2 < num1){
				printf("%d is the biggest number", num2);
		}
	}else if (num2 < num3){
		printf("%d is the biggest number", num2);
	}else
		printf("%d is the biggest number", num3);

return 0
}
