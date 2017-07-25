#include <stdio.h>
struct num
{
	unsigned  mantissa : 23;
	unsigned  exponential : 8;
	unsigned  sign : 1;
}

main()
{
	struct num number;
	int decesion = 1;
	while (decesion == 1)
	{
	printf("enter the number\n");
	scanf("%f",(float *)&number);
	// check the decimal part is zero or not
	if ((number.exponential - 127) < 0)
		printf("0\n");
	else
	{
		//finding the decimal part
		number.mantissa = (number.mantissa >> (23 - (number.exponential - 127))) | (1 << (number.exponential - 127));
	if (number.sign) // check the number is 
		printf("-%d\n", number.mantissa);
	else
		printf("%d\n", number.mantissa);
	}
	printf("want to continue 1/0\n");
	scanf("%d",&decesion);
	}
}
