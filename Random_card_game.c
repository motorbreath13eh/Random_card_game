#include <stdio.h>
#include <stdlib.h>
#include <time.h> // για τη rand()
#include <conio.h> // για τη getch()

// global variables and arrays
int i,j;
char x[] = {'A','2','3','4','5','6','7','8','9','1','0','J','Q','K','\0'};
char s[]= {'\3','\4','\5','\6','\0'};

// declaration of methods
void trapouloxarto();
void trapouloxarto2();

int main()
{
	char n; // η char μεταβλητή για την επιλογή χαρακτήρα '0' ή χαρακτήρα '1'
	do
	{
		trapouloxarto();
		n = getch(); // εισάγουμε χαρακτήρα '0' ή χαρακτήρα '1' χωρίς ENTER!!!
	}while (n=='0'); // όταν n=='0', τερματίζει το πρόγραμμα!!
	
	system("pause");
	return 0;
}

void trapouloxarto()
{
	srand(time(NULL));
	system("cls");
	
	i = rand()%14; // for 14 choices of i, για τα στοιχεία του πίνακα x[]
	j = rand()%4; // for 4 choices of j, για τα 4 στοιχεία του πίνακα s[]
	
	// για την περίπτωση που το τραπουλόχαρτο έχει αριθμό 10 καλούμε τη συνάρτηση trapouloxarto2()
	if (i==10 || i==11)
	{
		trapouloxarto2();
	}
	else
	{
		if (j==0 || j==1) // για κούπες και καρό
		{
			system("color f4");  // άσπρο background, κόκκινο χρώμα γράμματα
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
			printf("Next card: Nai(0) , Exit(1))");
		}
		else if (j==2 || j==3) // για μπαστούνια και σπαθιά
		{
			system("color f0"); // άσπρο background, μαύρο χρώμα γράμματα
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
			printf("Next card: Nai(0) , Exit(1))");
		}
	}
}

void trapouloxarto2() // για την περίπτωση που το τραπουλόχαρτο έχει αριθμό 10
{
	srand(time(NULL));
	system("cls");
	
	j = rand()%4;
	if (j==0 || j==1) // για κούπες και καρό
		{
			system("color f4");  // άσπρο background, κόκκινο χρώμα γράμματα
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
			printf("Next card: Nai(0) , Exit(1))");
		}
		else if (j==2 || j==3)  // για μπαστούνια και σπαθιά
		{
			system("color f0"); // άσπρο background, μαύρο χρώμα γράμματα
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
			printf("Next card: Nai(0) , Exit(1))");
		}
}
