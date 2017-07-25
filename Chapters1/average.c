// pgm to find the average from the command line
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(int argc, char *argv[], char *envp[])
{
	int sum = 0, count = 0, type, idx, num, limit;
	float average;
	int decesion = 1;
	int arr[100];
	char *ptr;
	while (decesion == 1)
	{
	printf("enter the methode\n"
			"1. scan from keyboard\n"
			"2. take command line arg\n"
			"3. take environmental arg\n");
	scanf("%d",&type);
	switch (type)
	{
		case 1:
			printf("enter the limit\n");
			scanf("%d",&limit);
			printf("enter the numbers\n");
			// loop for read numbers and find the sum
			for (idx = 0; idx < limit; idx++)
			{
				scanf("%d",&arr[idx]);
				sum = sum + arr[idx];
			}
			break;
		case 2:
			// loop for take command line arguments and find sum
			for (idx = 1; idx <= argc - 2; idx++)
			{
				num = atoi(argv[idx]);
				sum = sum + num;
			}
			limit = argc - 2;
			break;
		case 3:
			// loop for finding the environmental variable from the list and store address in ptr
			for (idx = 0; envp[idx] != 	NULL; idx++)
			{
				if (strstr(envp[idx], argv[argc - 1]))
				{
					printf("1\n");;
					ptr = strchr(envp[idx],'=');
					break;
				}
			}
			ptr = strtok(ptr + 1, "/");
			while (ptr != NULL)
			{
				count++;
				sum = sum + atoi(ptr);
				ptr = strtok(NULL, "/");
			}
			limit = count;
			break;
	}
	printf("average = %f\n",(float)sum / limit);
	sum = 0, count = 0;
	printf("want to continue 1/0\n");
	scanf("%d",&decesion);
	}
}
