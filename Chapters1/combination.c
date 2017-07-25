#include <stdio.h>
#include <string.h>
//function body of swap
swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
// function body of permutation
permutation(char *str, int start, int stop)
{
	int idx;
	if (start == stop)
		printf("%s\n",str);
	else
	{
		// loop for making all possible combinations
		for (idx = start; idx <= stop; idx++)
		{
			// make character constant
			swap(str + start, str + idx);
			permutation(str, start + 1, stop);
			swap(str + start, str + idx);
		}
	}
}


main()
{
	char str[50];
	int decesion = 1;
	while (decesion == 1)
	{
	printf("enter the string: ");
	scanf("%s",str);
	int length = strlen(str) - 1;
	permutation(str,0,length);
	printf("want to continue 1/0\n");
	scanf("%d",&decesion);
	}
}
