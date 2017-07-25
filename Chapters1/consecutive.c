#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//***************************************function body of add element*************************************************
add_element(int *arr, char *ptr1)
{
	int choice_to_insert, idx, jdx, number, test, count1 = 0;
	static int	position = 0;
	double double_number;
	char character;
	float float_number;
	void *ptr2;
			printf("Enter the type you have to insert: \n"
					         "1. int\n"
					         "2. char\n"
					         "3. float\n"
					         "4. double\n");
			scanf("%d",&choice_to_insert);
			if (choice_to_insert == 1 || choice_to_insert == 3)
			{
				if (choice_to_insert == 1)
				{
					scanf("%d",&number);
					ptr2 = &number;
				}
				else if (choice_to_insert == 3)
				{
					scanf("%f",&float_number);
					ptr2 = &float_number;
				}
					for (idx = 0; idx <= 4; idx++)
					{
					if (!arr[idx] && !arr[idx + 3])
					{
						test = 0;
						for (jdx = 0; jdx < 4; jdx++)
						{
							//take characterwise , frst byte from the number
							ptr1[idx] = *((char *)ptr2 + jdx);
							if (choice_to_insert == 1)
								//dummy array to understand what we stored in the array
								arr[idx] = 1;
							else if (choice_to_insert == 3)
								arr[idx] = 3;
							idx++;
						}
						break;
					}
					else
					{
					test = 1;
					continue;
					}
					}
				if (test == 1)
					printf("no space available\n");
			}
			else if (choice_to_insert == 2)
			{
				__fpurge(stdin);
				scanf("%c", &character);
				for (idx = 0; idx < 8; idx++)
				{
				if (!arr[idx])
				{
					test = 0;
					ptr1[idx] = character;
					arr[idx] = 2;
					break;
				}
				else
				{
					test = 1;
					continue;
				}
				}
				if (test)
					printf("no space available\n");
			}
			else if (choice_to_insert == 4)
			{
				scanf("%lf",&double_number);
				ptr2 = &double_number;
				for (idx = 0; idx < 8; idx++)
				{
					if (arr[idx] == 0)
						count1++;
					else
						break;
				}
				if (count1 == 8)
				{
					for (jdx = 0; jdx < 8; jdx++)
					{
						ptr1[jdx] = *((char *)ptr2 + jdx);
						arr[jdx] = 4;
					}
				}
				else
					printf("no space available\n");
			}
}
//************************************************************************end****************************************************
//*************************************function body of display element*******************************************************

display_element(int *arr, char *ptr1)
{
int idx, test = 0, count = 0;
char *tmp;
printf("-----------------------------------------------------------------------------------------\n");
for (idx = 0; idx < 8; idx++)
{
	if (arr[idx] == 1 || arr[idx] == 3)
	{
		if (test == 0)
		{
			tmp = &ptr1[idx];
			if(arr[idx] == 1)
				printf("%d :-> %d\t(int)\n",idx,*((int *)tmp));
			else if(arr[idx] == 3)
				printf("%d :-> %f\t(float)\n",idx,*((float *)tmp));
		}
		test = 1;
		count++;
		if (count == 4)
		{
		count = 0;
		test = 0;
		}
	}
	else if (arr[idx] == 2)
		printf("%d :-> %c\t(char)\n",idx,ptr1[idx]);
	else if (arr[idx] == 4)
	{
		if (test == 0)
			printf("%d :-> %lf\t(double)\n",idx,*((double *)ptr1 + idx));
		test = 1;
	}
}
printf("-----------------------------------------------------------------------------------------\n");
}
//******************************************************end***********************************************************************
//***************************************************function body of remove element**********************************************
remove_element(int *arr, char *ptr1)
{
	int choice, idx;
	printf("which type you want to remove\n"
			  "1. int\n"
			  "2. char\n"
			  "3. float\n"
			  "4. double\n");
	scanf("%d",&choice);
for (idx = 0; idx < 8; idx++)
{
	if (choice == 1 && arr[idx] == 1)
	{
		arr[idx] = 0;
		ptr1[idx] = 0;
	}
	else if (choice == 2 && arr[idx] == 2)
	{
		ptr1[idx] = 0;
		arr[idx] = 0;
	}
	else if (choice == 3 && arr[idx] == 3)
	{
		ptr1[idx] = 0;
		arr[idx] = 0;
	}
	else if (choice == 4 && arr[idx] == 4)
	{
		arr[idx] = 0;
		ptr1[idx] = 0;
	}
}
}
//****************************************************************end*****************************************************************
//*****************************************************function body of main********************************************************
int main()
{
	char *ptr1, *tmp;
	ptr1 = calloc(8, sizeof(char));
	tmp = ptr1;
	int choice, decesion = 1, idx;
	int arr[8];
	for (idx = 0; idx < 8; idx++)
	{
		arr[idx] = 0;
	}
	while (decesion == 1)
	{
		printf("1. Add element\n"
				"2. Remove element\n"
				"3. Display element\n"
				"4. Exit from the program\n");
		scanf("%d",&choice);
		switch (choice)
		{
		case 1:
				add_element(arr,ptr1);
				break;
		case 2:
				remove_element(arr,ptr1);
				break;
		case 3: 
				display_element(arr,ptr1);
				break;
		case 4:
				return 0;
		}
		printf("want to continue: 1/0\n");
		scanf("%d",&decesion);
	}
	free(ptr1);
	return 0;
}
