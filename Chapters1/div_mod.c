// pgm of div and mod using negativenumbers
#include<stdio.h>
main()
{
    int number1,mod;
	float div;
	signed number2;
		printf("enter two numbers\n");
	scanf("%d %d",&number1,&number2);
	printf("s=%d\n",number1);
	mod=number1%number2;
	printf("modulus is %d\n",mod);
	div=number1/number2;
	printf("div is %f\n",div);
}
