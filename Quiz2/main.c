// main.c
// Program for Quiz 2: Finding square and factorial of numbers
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  // NOLINT

int factorial(int const num)
{
	int result = 1;
	for (int i = 1; i <= num; i++)
	{
		result *= i;
	}
	return result;
}

void main(void)
{
	int run_program = 1;

	while (run_program)
	{
		int input;
		printf("Enter an integer between 3 and 9: ");

		scanf("%d", &input);

		while (input <= 3 || input >= 9)
		{
			printf("Bad value, please try again!\n");
			printf("Enter an integer between 3 and 9: ");
			scanf("%d", &input);
		}

		printf("The square of the number is %d\n", input * input);

		int const factorial_input = factorial(input);

		printf("The factorial of the number is %d\n", factorial_input);

		if(factorial_input < input * input)
		{
			printf("Yea! Factorial is less than square!\n");
		}

		char run_again;
		printf("\nEnter Y or y to run again: ");
		scanf(" %c", &run_again);

		// ASCII Values for Y and y, respectivly
		if (run_again == 89 || run_again == 121)
		{
			run_program = 1;
			getchar();
		}
		else
		{
			run_program = 0;
		}
			}

	// Below prevents console window from closing after program completion
	while (getchar() != '\n');
	printf("press enter to continue...\n");
	getchar();
}