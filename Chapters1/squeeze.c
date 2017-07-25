#include<stdio.h>
#include<string.h>
//******************************************************function body of squeeze****************************************************
char *my_squeeze(char *string,char *eliminating_char)
{
	int idx, jdx,tdx = 0,test = 0;
	static char temp[100];
	const int length = strlen(string);
	const int length1 = strlen(eliminating_char);
	for (idx = 0;idx <= length;idx++)
	{
		for (jdx = 0;jdx < length1;jdx++)
		{
			test = 0;
			if (string[idx] != eliminating_char[jdx])
			{
				test = 1;
			}
			if (!test)
				break;
		}
		if (test)
		{
			temp[tdx] = string[idx];
			tdx++;
		}
	}
	if (test)
		return temp;
	else
		return string;
}
//**************************************************************************main*************************************************
main()
{
	char string[100], *ptr;
	char eliminating_char[30];
	printf("enter the string: ");
	scanf("%s",string);
	printf("enter the eliminating characters: ");
	__fpurge(stdin);
	scanf("%s",eliminating_char);
	ptr = my_squeeze(string,eliminating_char);
	printf("%s\n",ptr);
}
