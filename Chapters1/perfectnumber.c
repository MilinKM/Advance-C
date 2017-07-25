// program to check given number is perfect or not
#include<stdio.h>
main()
{
	int number,count,sum=0,temp;
	char decesion='y';
		while(decesion=='y')
		{
	printf("enter the number\n");
	scanf("%d",&number);
	if(number<=0)
		printf("it is not perfect\n");
	else
	{
	for(count=1;count<=(number/2);count++) // divide the num with factors
	{
		if(number % count==0) // check whether it is a factor or not
		{
			sum=sum+count; // add factors to sum
		}
	}
	if(number==sum) // if sum of factors equal to number then it is perfect
		printf("it is perfect number\n");
		else
			printf("it is not perfect number");
		}
		printf("want to continue y/n\n");
		scanf("\n%c",&decesion);
		sum=0;
		}
}
