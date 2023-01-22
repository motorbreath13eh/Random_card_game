#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for rand() and srand()
#include <conio.h> // for getch()

// Declaration of global variables and arrays
int i,j;
char x[] = {'A','2','3','4','5','6','7','8','9','1','0','J','Q','K','\0'};
char s[]= {'\3','\4','\5','\6','\0'};

// Calling our methods
void trapouloxarto();
void trapouloxarto2();

int main()
{
	char n; // char variable for user's choice '0' or '1'
	do
	{
		trapouloxarto();
		n = getch(); // The user can enter character '0' or character '1' without ENTER!!!
	}while (n=='0'); // When n=='0', the program terminates!!
	
	system("pause");
	return 0;
}

void trapouloxarto()
{
	srand(time(NULL));
	system("cls");
	
	i = rand()%14; // for 14 choices of i, of the 14 elements of array x[]
	j = rand()%4; // for 4 choices of j, of the 4 elements of array s[]
	
	// In case the card has the number 10, we call the method "trapouloxarto2()"
	if (i==10 || i==11)
	{
		trapouloxarto2();
	}
	else
	{
		if (j==0 || j==1) // for hearts and diamons
		{
			system("color f4");  // white background, red text
			printf("\t\t\t ___________________ \n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|   %c               |\n",x[i]);
			printf("\t\t\t|   %c               |\n",s[j]);
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|         %c         |\n",x[i]);
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|               %c   |\n",s[j]);
			printf("\t\t\t|               %c   |\n",x[i]);
			printf("\t\t\t|___________________|\n\n\n");
			printf("Next card: Yes(0) , Exit(1))");
		}
		else if (j==2 || j==3) // for clubs and spades
		{
			system("color f0"); // white background, black text
			printf("\t\t\t ___________________ \n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|   %c               |\n",x[i]);
			printf("\t\t\t|   %c               |\n",s[j]);
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|         %c         |\n",x[i]);
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|               %c   |\n",s[j]);
			printf("\t\t\t|               %c   |\n",x[i]);
			printf("\t\t\t|___________________|\n\n\n");
			printf("Next card: Yes(0) , Exit(1))");
		}
	}
}

void trapouloxarto2() // In case the random card picks the number 10
{
	srand(time(NULL));
	system("cls");
	
	j = rand()%4;
	if (j==0 || j==1) // for hearts and diamonds
		{
			system("color f4");  // white background, red text
			printf("\t\t\t ___________________ \n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|  %c%c               |\n",x[9],x[10]);
			printf("\t\t\t|   %c               |\n",s[j]);
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|         %c%c        |\n",x[9],x[10]);
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|               %c   |\n",s[j]);
			printf("\t\t\t|               %c%c  |\n",x[9],x[10]);
			printf("\t\t\t|___________________|\n\n\n");
			printf("Next card: Yes(0) , Exit(1))");
		}
		else if (j==2 || j==3)  // for clubs and spades
		{
			system("color f0"); // white background, black text
			printf("\t\t\t ___________________ \n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|  %c%c               |\n",x[9],x[10]);
			printf("\t\t\t|   %c               |\n",s[j]);
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|         %c%c        |\n",x[9],x[10]);
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|                   |\n");
			printf("\t\t\t|               %c   |\n",s[j]);
			printf("\t\t\t|               %c%c  |\n",x[9],x[10]);
			printf("\t\t\t|___________________|\n\n\n");
			printf("Next card: Yes(0) , Exit(1))");
		}
}
