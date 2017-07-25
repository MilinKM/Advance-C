// pgm to print bits of floatin point number
#include<stdio.h>
main()
{
	double number;
	int idx,jdx,test = 0;
	printf("enter the floating number\n");
	scanf("%lf",&number);
	long long int *ptr;
	int count = 0;
	ptr = (long long int *) &number;
	for(jdx = 0, idx = (sizeof(number)*8 - 1);idx >= 0;idx--, jdx++)
	{
		if (jdx == 0)
		{
			printf("signbit\n");
		if(*ptr & (1LL<<idx))
			printf("1");
		else
			printf("0");
		}
		else if(jdx > 0 && jdx < 12)
		{
			if(test == 0)
				printf("exponential part\n");
		if(*ptr & (1LL<<idx))
			printf("1");
		else
			printf("0");
		test = 1;
		}
		else if(jdx >= 12 && jdx <= 52)
		{
			if(test == 1)
				printf("mantisa part\n");
		if(*ptr & (1LL<<idx))
			printf("1");
		else
			printf("0");
		test = 2;
		}
	}
	printf("\n");
}


        



 		


