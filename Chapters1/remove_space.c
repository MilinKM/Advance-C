// pgm to remove unwanted spaces in program
#include<stdio.h>
//******************************************remove space function body********************************************
void space(char *ptr)
	{
		int idx, jdx, count = 0, flag = 1, temp,test;
		for (idx = 0;idx < 50;idx++)
		{
			test = 0;
			// loop to print only printable character
				while (*(ptr + idx) != 32 && *(ptr + idx) != 0 )
				{
					test = 1;
					printf("%c",*(ptr + idx));
					idx++;
				}
				if (*(ptr + idx) == 0)
					break;
				// for print space after one word
			if (test == 1)
			printf(" ");
		}
	}
			
main()
{
	char string[50];
	int decesion = 1;
	while (decesion == 1)
	{
	printf("enter the string\n");
	__fpurge(stdin);
	scanf("%[a-z A-Z]s",string);
	// function call
	space(string);
	printf("want to continue 1/0\n");
	scanf("%d",&decesion);
	}
}

