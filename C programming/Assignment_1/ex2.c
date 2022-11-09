#include <stdio.h>

int main(){
	int number1, number2, sum, sum_squares;
	float average;
	printf("Enter first number: ");
	scanf("%d", &number1);
	printf("Enter second number: ");
	scanf("%d", &number2);
	sum = number1 + number2;
	average = (float)sum/2;
	sum_squares = number1*number1 + number2*number2;
	printf("Sum is: %d\n", sum);
	printf("Average is: %.2f\n", average);
	printf("Sum of squares is: %d\n", sum_squares);
	return 0;
}
