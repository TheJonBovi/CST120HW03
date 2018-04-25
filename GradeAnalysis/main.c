// main.c
// This program calculates a students grade and gives them a ranking.
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  // NOLINT
#include <math.h>  // NOLINT

void main(void)
{
	int run_program = 1;

	while (run_program)
	{
		double student_score;
		double max_score;
		printf("Please provide the student's test score: ");
		scanf(" %lf", &student_score);

		printf("Please enter the total points possible for the test: ");
		scanf(" %lf", &max_score);

		while (max_score < student_score)
		{
			printf("Total less than student score, please enter again: ");
			scanf(" %lf", &max_score);
		}

		int const actual_score = round(100 * student_score / max_score);

		printf("The students percentage is: %d%% \n", actual_score);

		if(actual_score > 90)
		{
			printf("Excellent\n");
		}
		else if(actual_score >= 80)
		{
			printf("Bad\n");
		}
		else if(actual_score >= 70)
		{
			printf("Catastrophe\n");
		}
		else if(actual_score >= 60)
		{
			printf("Death\n");
		}
		else if(actual_score < 60)
		{
			printf("F\n");
		}

		char run_again;
		printf("Enter Y or y to run again: ");
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