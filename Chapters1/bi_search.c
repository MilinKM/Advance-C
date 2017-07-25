#include <stdio.h>
#include <stdlib.h>
sort(void **ptr, int number, int type)
{
	int idx, jdx, temp;
switch (type)
{
	case 1:
		for (idx = number - 1; idx >= 0; idx--)
		{
		for (jdx = 0; jdx < idx; jdx++)
		{
		if (*((int *)ptr + jdx) > *((int *)ptr + (jdx + 1)))
		{
			temp = *((int *)ptr + jdx);
			*((int *)ptr + jdx) = *((int *)ptr + (jdx + 1));
			*((int *)ptr + (jdx + 1)) = temp;
		}
		}
		}
		break;
}
}
display(void **ptr, int number, int type)
{
	int idx;
	for (idx = 0; idx < number; idx++)
	{
		printf("%d ",*((int *)ptr + idx));
	}
}
search(void **ptr, int number, int type, int int_search_element)
{
	int idx, test = 0, position;
	for (idx = 0; idx < number; idx++)
	{
		if (type == 1)
		{
		if (int_search_element == *((int *)ptr + idx))
		{
			test = 1;
			position = idx;
		}
		}
		else if (type == 2)
		{
		if (int_search_element == *((float *)ptr + idx))
		{
			test = 1;
			position = idx;
	    }
		}
	}
	if (test)
		printf("search element in position %d\n",position);
	else
		printf("not found\n");
}

main()
{
	int number, type, idx;
	void **ptr;
	printf("enter the number of elements\n");
	scanf("%d",&number);
	ptr = calloc(number, sizeof(int *));
	printf("1. int\n"
		   "2. float\n"
		   "3. double\n"
		   "4. char\n");
	scanf("%d",&type);
	switch (type)
	{
		case 1:
			printf("enter the numbers of type int\n");
			for (idx = 0; idx < number; idx++)
			{
				scanf("%d",((int *)ptr + idx)); 
			}
			sort(ptr,number,type);
			display(ptr,number,type);
			int int_search_element;
			printf("enter the key element to search\n");
			scanf("%d",&int_search_element);
			search(ptr,number,type,int_search_element);
   }
}

