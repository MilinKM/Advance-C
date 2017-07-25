#include<stdio.h>
#include<string.h>
//***********************************function body of my_strtkr******************************************************************
char *my_strtok(char *string, char *delimiter)
{
	int idx,jdx,position=0, flag = 0, not_deli = 0;
	const int length = strlen(delimiter);
	static char *ptr;
	//check the argument is null or not
	if (!string)
	{
		if (ptr == NULL)
			return NULL;
		string = ptr;
	}
	// loop for checking the delimiter
	for (idx = 0; idx < 20; idx++)
	{
		if (string[idx] == '\0')
		{
			ptr = NULL;
			break;
		}

		for (jdx = 0; jdx < length;jdx++)
		{
			//condition to check the previous chara was delimiter or not
			if (string[idx] == delimiter[jdx])
			{
				flag = 1;
				string[idx] = '\0';
				not_deli = 0;
				break;
			}
			else
				not_deli = 1;
		}
		if (not_deli && flag)
		{
			ptr = &string[idx];
			break;
		}
	}
	return 	string;	
}

//****************************************function body of string compare*********************************************/*

int my_strcmp(char *string1, char *string2)
{
	int idx = 0;
	while (string1[idx] != '\0' || string2[idx] != '\0')
	{
		if (string1[idx] > string2[idx])
			return 1;
		else if (string2[idx] == string1[idx])
		{
			idx++;
			continue;
		}
		else if (string2[idx] > string1[idx])
			return -1; // if string2 is larger then return -1
		idx++;
	}
	return 0;
}
//**********************************************function body of mystrstr**************************************************
char *my_strstr(char *string1, char *string2)
{
	int length = strlen(string1), idx, jdx = 0, position = 0, flag = 0, not_eq;
	for(idx = 0; idx <= length; idx++)
	{
		if (string2[jdx] == '\0' && (flag == 1 && not_eq == 0))
		{
			return &string1[position];
		}
		else if (flag && not_eq)
		{
			flag = 0;
			jdx = 0;
		}
		if (string1[idx] == string2[jdx])
		{
			if (flag == 0)
				position = idx;
			flag = 1;
			not_eq = 0;
			jdx++;
		}
		else
			not_eq = 1;
	}
	return NULL;
}

main()
{
	char delimiter[50];
	int input,result, decesion = 1;
	char string[100], string1[50], string2[50], *ch;
	while (decesion == 1)
	{
		printf("1. strtkr\n"
			   "2. strcmp\n"
			   "3. strstr\n");
		scanf("%d",&input);
		__fpurge(stdin);
		switch (input)
		{
			case 1:
				printf("enter the delimiter: ");
				scanf("%s",delimiter);
				__fpurge(stdin);
				printf("enter the string: ");
				scanf("%s",string);
				ch = my_strtok(string,delimiter); //function call
				while (ch != NULL)
				{
					printf("%s\n",ch);
					ch = my_strtok(NULL, delimiter); //function call
				}
				break;
			case 2:
				printf("enter the string1: ");
				scanf("%[^\n]",string1);
				__fpurge(stdin);
				printf("enter the string2: ");
				scanf("%[^\n]", string2);
				result = my_strcmp(string1,string2); //function call
				if(result == -1)
					printf("string2 is greater\n");
				else if (result == 1)
					printf("not equal\n");
				else
					printf("equal\n");
				break;
			case 3:
				printf("enter the string: ");
				scanf("%[^\n]",string1);
				__fpurge(stdin);
				printf("enter the next string to take portion from string1: ");
				scanf("%[^\n]",string2);
				ch = my_strstr(string1,string2); //function call
				if(ch)
					printf("%s\n",ch);
				else
					printf("NULL\n");
				break;
		}
		printf("want to continue 1/0: ");
		scanf("%d",&decesion);
	}
}

