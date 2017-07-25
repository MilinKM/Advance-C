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
permutation(char *str, int start, int stop, int n, char *str1)
{
	int idx, jdx;
	static int pdx = 0;
	if (start == stop)
	{
		for (jdx = 0; jdx < strlen(str); jdx++)
		{
			str1[pdx] = str[jdx];
			pdx++;
		} 
	}
	else
	{
		// loop for making all possible combinations
		for (idx = start; idx <= stop; idx++)
		{
			// make character constant
			swap(str + start, str + idx);
			permutation(str, start + 1, stop, n, str1);
			swap(str + start, str + idx);
		}
	}
}


main()
{
	char str[50];
	int decesion = 1, length, n, idx, jdx, factorial = 1;
	while (decesion == 1)
	{
loop:
		printf("enter the string length\n");
		scanf("%d",&length);
		__fpurge(stdin);
	printf("enter the string: ");
	scanf("%s",str);
	if (length != strlen(str) || length <= 0 && length >= 10)
		goto loop;
	printf("enter the output string length\n");
	scanf("%d",&n);
	for (idx = 1; idx <= length; idx++)
	{
		factorial = factorial * idx;
	}
	char string[factorial * length];
	permutation(str,0,length - 1,n,string);
	for (idx = 0, jdx = 0; idx < n; idx++, jdx++)
	{
	printf("%c",string[idx]);
		if (idx == (factorial * length) - 1)
			idx = -1;
	if (jdx == n)
		break;
	}
	printf("\n");
	factorial = 1;
	printf("want to continue 1/0\n");
	scanf("%d",&decesion);
	}
}
