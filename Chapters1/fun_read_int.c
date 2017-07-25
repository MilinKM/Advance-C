#include<stdio.h>
//************************function_body********************************************************************
int read_int(char *number)
	{
		if(*number>=48 && *number<=57)
			return number;
		else
			return 48;
	}
//************************************************************************************************************
main()
{
	char number;
	int decesion=1;
	while(decesion==1)
	{
	printf("enter a character\n");
	__fpurge(stdin);
	scanf("%c",&number);
	char result=read_int(&number);
	printf("%c\n",result);
	printf("want to continue 1/0\n");
	scanf("%d",&decesion);
	}
}
