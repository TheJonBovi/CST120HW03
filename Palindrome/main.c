// main.c
// This program reads in a string and outputs whether or not it is a palindrome.
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  // NOLINT
#include <string.h>  // NOLINT

#define MAX_STRING 100

void isPalindrome(char str[])
{
	// Start from leftmost and rightmost corners of str
	int l = 0;
	int h = strlen(str) - 1;

	// Keep comparing characters while they are same
	while (h > l)
	{
		if (str[l++] != str[h--])
		{
			printf("%s is Not Palindrome.", str);
			return;
		}
	}
	printf("%s is palindrome.", str);
}

void main(void)
{

	int run_program = 1;
	while(run_program)
	{
		char input[MAX_STRING];
		printf("Please enter a phrase with no spaces: ");
		fgets(input, MAX_STRING, stdin);

		input[strcspn(input, "\n")] = 0;

		isPalindrome(input);

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