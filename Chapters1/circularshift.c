// pgm to shift bitwise in circular order
#include<stdio.h>
int circular_shift(int shift,int number,int num_of_bits)
{
	int temp;
	switch(shift)
	{
	case 'l' :	temp = number & (((1<<num_of_bits)-1)<<sizeof(number)*8-1-num_of_bits); //take shifting bits from num and stored in temp
		      		temp = temp >> sizeof(number)*8-num_of_bits; // rightshift temp
					number = number<<num_of_bits;
					number = number | temp;
				  break;
		case 'r' :	temp = number & ((1<<num_of_bits)-1);
		      		temp = temp << sizeof(number)*8-num_of_bits; // leftshift temp
					number = number>>num_of_bits;
					number = number | temp;
					break;
	}
	return number;
}
main()
{
	unsigned int number,number1;
	int num_of_bits,idx,temp,decesion=1;
	char shift;
	while(decesion==1)
	{
	printf("enter the number\n");
	scanf("%d",&number);
	printf("r/l shift\n");
	scanf("\n%c",&shift);
	printf("How many bit want to shift\n");
	scanf("%d",&num_of_bits);
	printf("number in bits is\n");
	for(idx=sizeof(number)*8-1;idx>=0;idx--)
	{
		if( number & (1<<idx))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	printf("number after shifting\n");
	number1=circular_shift(shift,number,num_of_bits);
					for(idx=sizeof(number1)*8-1;idx>=0;idx--)
					{
						if( number1 & (1<<idx))
							printf("1");
						else
							printf("0");
					}
	printf("\n");
	printf("want to continue 1/0\n");
	scanf("%d",&decesion);
	}
}
