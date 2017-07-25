#include<stdio.h>
main()
{
	int number;
	char decesion='y';
	while(decesion=='y')
	{
	printf("enter a number\n");
	scanf("%d",&number);
	if(number>0) //condition to check whether it is positive or not
	{
		if(number%2==0)
			printf("positive even number\n");
		else
			printf("positive odd number\n");
	}
	else if(number<0)
	{
		if(number%2==0)
			printf("negative even number\n");
		else
			printf("negative odd number\n");
	}
	else
		printf("not odd or even");
	printf("want to continue y/n\n");
	scanf("\n%c",&decesion);
    }
}
