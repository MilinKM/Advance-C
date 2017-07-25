#include <stdio.h>
#include <string.h>
#include<stdlib.h>
main()
{
	int length, idx, limit, output, jdx;
	printf("enter the limit\n");
	scanf("%d",&limit);
	char **string;
	char *tmp;
	string = malloc(limit * sizeof(char *));
	char buffer[50];
	printf("enter the strings\n");
	// loop for store the strings
	for (idx = 0; idx < limit; idx++)
	{
		__fpurge(stdin);
		//first  store the string into buffer 
		scanf("%[^\n]",buffer);
		//allocate space
		string[idx] = calloc(strlen(buffer) + 1, sizeof(char));
		// copy string from buffer to array
		strcpy(string[idx],buffer);
	}
	// sorting of strings
	for (idx = limit - 1; idx >= 0; idx--)
	{
		for (jdx = 0; jdx < idx; jdx++)
		{
		if (strcmp(string[jdx],string[jdx + 1]) > 0)
		{
			tmp = string[jdx];
			string[jdx] = string[jdx + 1];
			string[jdx + 1] = tmp;
		}
		}
	}
		printf("string after sorting\n");
	for (idx = 0; idx < limit; idx++)
	{
		printf("%s\n",string[idx]);
	}
	
}
