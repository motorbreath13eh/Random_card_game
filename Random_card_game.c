#include <stdio.h>
#include <stdlib.h>
#include <time.h> // ��� �� rand()
#include <conio.h> // ��� �� getch()

// global variables and arrays
int i,j;
char x[] = {'A','2','3','4','5','6','7','8','9','1','0','J','Q','K','\0'};
char s[]= {'\3','\4','\5','\6','\0'};

// declaration of methods
void trapouloxarto();
void trapouloxarto2();

int main()
{
	char n; // � char ��������� ��� ��� ������� ��������� '0' � ��������� '1'
	do
	{
		trapouloxarto();
		n = getch(); // ��������� ��������� '0' � ��������� '1' ����� ENTER!!!
	}while (n=='0'); // ���� n=='0', ���������� �� ���������!!
	
	system("pause");
	return 0;
}

void trapouloxarto()
{
	srand(time(NULL));
	system("cls");
	
	i = rand()%14; // for 14 choices of i, ��� �� �������� ��� ������ x[]
	j = rand()%4; // for 4 choices of j, ��� �� 4 �������� ��� ������ s[]
	
	// ��� ��� ��������� ��� �� ������������� ���� ������ 10 ������� �� ��������� trapouloxarto2()
	if (i==10 || i==11)
	{
		trapouloxarto2();
	}
	else
	{
		if (j==0 || j==1) // ��� ������ ��� ����
		{
			system("color f4");  // ����� background, ������� ����� ��������
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
		else if (j==2 || j==3) // ��� ���������� ��� ������
		{
			system("color f0"); // ����� background, ����� ����� ��������
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

void trapouloxarto2() // ��� ��� ��������� ��� �� ������������� ���� ������ 10
{
	srand(time(NULL));
	system("cls");
	
	j = rand()%4;
	if (j==0 || j==1) // ��� ������ ��� ����
		{
			system("color f4");  // ����� background, ������� ����� ��������
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
		else if (j==2 || j==3)  // ��� ���������� ��� ������
		{
			system("color f0"); // ����� background, ����� ����� ��������
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
