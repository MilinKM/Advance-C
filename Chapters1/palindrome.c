// pgm to check a given number is pallindrome or not

#include<stdio.h>
main()
{
	int number,sum,reminder,temp,decession=1;
	while(decession==1)
	{
	sum=0;
	printf("enter a number\n");
	scanf("%d",&number);
	temp=number;
	while(number!=0)
	{
		reminder=number%10;
		number=number/10;
        sum=sum*10+reminder;
	}
	if(temp==sum)
		printf("number is pallindrome\n");
	else
		printf("number is not pallindrome\n");
	printf("want to continue\n");
	scanf("%d",&decession);
	}
}
