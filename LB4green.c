#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to implement the game
int game(char you, char computer);
int main()
{
	// Stores the random number
	int n,ctr;

	char you, computer, result;
	
	// Chooses the random number every time
	srand(time(NULL));

	// Make the random number less than 100, divided it by 100
	n = rand() % 100;
	
	// Using simple probability 100 is
	// roughly divided among BATO,
	// GUNTING AT PAPEL
	if (n < 33)
	{
		// r is denoting Bato
		computer = 'b';
	}
	else if (n > 33 && n < 66)
	{
		// g is denoting Gunting
		computer = 'g';
	}
	else
		{
		//p is denoting Papel
		computer = 'p';
		}

		printf("Bato Bato Pick!\n");
		printf("itayp ang b kung BATO ang napili, g kung GUNTING, at p kung PAPEL\n\n");

		// input from the user
		printf("Desisyon:");
		scanf("%c", &you);

		// Function Call to play the game
		result = game(you, computer);

		if (result == -1) 
		{
			printf("\nTabla!");
		}
		else if (result == 1) 
		{
			printf("\nWow! Ikaw ang nanalo!");
		}
		else 
		{
			printf("\nHala! Ikaw ay talunan!");
		}
		printf("\nIyong Napili : %c at ang Kalaban : %c",you, computer);
	return 0;
}

int game(char you, char computer)
{
	// If both the user and computer
	// has chose the same thing
	if (you == computer)
	{
		return -1;
	}
	// If user's choice is Bato and
	// computer's choice is paper
	if (you == 'b' && computer == 'p')
	{
		return 0;
	}
	// If user's choice is paper and
	// computer's choice is Bato
	else if (you == 'p' && computer == 'b')
	{
	return 1;
	}
	// If user's choice is Bato and
	// computer's choice is Gunting
	if (you == 'b' && computer == 'g')
	{
		return 1;
	}
	// If user's choice is Gunting and
	// computer's choice is bato
	else if (you == 'g' && computer == 'b')
	{
		return 0;
	}
	// If user's choice is paper and
	// computer's choice is gunting
	if (you == 'p' && computer == 'g')
	{
		return 0;
	}
	// If user's choice is gunting and
	// computer's choice is paper
	else if (you == 'g' && computer == 'p')
	{
		return 1;
	}
}