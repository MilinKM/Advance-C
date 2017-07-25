#include<stdio.h>
//**********************************function body of array_to_integer***********************************************************
int atoi(char *str,int limit)
{
	int idx,number=0,sum=0,reminder;
	//convert string of numbers to integer by multipling numbers by 10 from first position and add the numbers
	for (idx = 0;idx < limit;idx++)
	{
		number = number * 10 + (*(str + idx) - 48);
	}
	return number;
}
//*****************************************************end***********************************************************************
//**********************************************function body of integer_to_array************************************************
char *itoa(int number,int count)
{
	static char arr[50] = {'\0'}, reminder;
	//store each number in an array
	while (number)
	{
		reminder = number % 10;
		number = number / 10;
		arr[--count] = reminder + 48;
	}
	return arr;
}
//**********************************************************end**********************************************************************
//*********************************************************function body of get word*************************************************
int get_word(char *ptr)
{
	int idx = 0,count,test;
	for (idx = 0;idx < 30;idx++)
	{
		count=0;
		test = 0;
		// loop for calculate the number of characters in the first word
		while ((*(ptr + idx) != 0) && *(ptr + idx) != 32 )
		{
			idx++;
			count++;
			test = 1;
		}
		if (test == 1)
			break;
	}
	return count;
}
//**********************************************************end************************************************************************
		


int main()
{
	int limit,number,number1,input,idx,decesion=1;
	while (decesion == 1)
	{
	printf("1. atoi\n 2. itoa\n 3. get word\n");
	scanf("%d",&input);
	char character[100];
	char string[100];
	switch (input)
	{
		case 1: printf("enter the limit\n");
				scanf("%d",&limit);
				printf("enter characters\n");
				scanf("%s",character);
				char *ptr;
				ptr = character;
				//function call
				number = atoi(ptr,limit);
				printf("number = %d\n",number);
				break;
		case 2: printf("enter the number\n");
				scanf("%d",&number);
				int temp = number,count=0,count1;
				char *result;
				while (temp)
				{
					count++;
					temp = temp / 10;
				}
				count1=count;
				result = itoa(number,count);// function call
					printf("%s\n",result);
				break;
		case 3: printf("enter the string\n");
				__fpurge(stdin);
				scanf("%[a-z A-Z]s",string);
				int number_of_character;
				//function call
				number_of_character = get_word(string);
				printf("number of character in first word is : %d\n",number_of_character);
				break;
	}
	printf("want to continue 1/0\n");
	scanf("%d",&decesion);
	}
	return 0;
}
