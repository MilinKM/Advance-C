// pgm to check the given number is even or odd by using bit operation
#include<stdio.h>
main()
{
	int number,decesion=1;
	while(decesion==1)
	{
	printf("enter the number\n");
	scanf("%x",&number);
	if(number<=0)
		printf("enter positive number\n");
	else
	{
	if(number & 1) // check LSB of the number is 1 or not if 1 then odd else even
		printf("odd\n");
	else
		printf("even\n");
	}
	printf("want to continue 1 /0\n");
	scanf("%d",&decesion);
	}
}

