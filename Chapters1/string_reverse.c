#include<stdio.h>
#include<string.h>
//*************************************reverse function body*****************************************************

char *reverse1(char *string)
{
	int idx,length = strlen(string);
	static char string1[50];
	// assign string in the reverse order to another string
	for (idx = length - 1;idx >= 0;idx--)
	{
		string1[length - 1 - idx] = string[idx];
	}
	return string1;
}

//***********************************reverse string by using recursive methode function body******************************
char *reverse(char *string,int idx)
{
	const int length = strlen(string);
	static char string1[50];
	string1[length - 1 - idx] = string[idx];
	if (idx <= 0)
		return string1;
	return reverse(string,--idx);
}

//**************************main function body***********************************************************************
main()
	{
		char string[50];
		int decesion = 1,input,length;
		while (decesion == 1)
		{
		printf("enter the string: ");
		scanf("%[a-z A-Z]s",string);
		printf("1.iteration_method\n"
			   "2. recursive_method\n");
		scanf("%d",&input);
		switch (input)
		{
			case 1: printf("%s\n",reverse1(string));
					break;
			case 2: length = strlen(string);
					printf("%s\n",reverse(string,length - 1));
					break;
		   default: printf("enter valid number\n");
		}
		printf("want to continue 1/0: ");
		scanf("%d",&decesion);
		__fpurge(stdin);
		}
	}

