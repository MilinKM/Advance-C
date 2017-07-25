#include <stdio.h>
#include <string.h>
//************************function body of swap*********************************************************************************
int swap(char *string, char *temp)
{
	char temp1;
	int idx = 0;
	//loop to print the combimation
	while (string[idx + 1] != 0)
	{
		temp1 = string[idx];
		string[idx] = string[idx + 1];
		string[idx + 1] = temp1;
		idx++;
		if (!strcmp(string,temp)) // if both strings are equal it returns 0
			return 1;
		printf("%s\n",string);
	}
	swap(string, temp);
}
//************************************************************main body*******************************************************
main()
{
	int idx, decesion = 1;
	char string[100];
	while (decesion == 1)
	{
		printf("enter the string: ");
		scanf("%s",string);
		char temp[strlen(string) + 1]; // declare another character array to store the same string
		//loop for assigning original string to temporary array
		for (idx = 0; idx <= strlen(string); idx++)
		{
			temp[idx] = string[idx];
		}
		// function call
		swap(string, temp);
		printf("want to continue 1/0 \n");
		scanf("%d",&decesion);
	}
}
