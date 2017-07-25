//pgm for perform bitwise operations using functions

#include<stdio.h>

int get_nbits(unsigned int number,int number_of_bits)
{ 
	// for get n bits number AND with corresponding number(1 shifted to get that num)
	number = number & ((1<<number_of_bits)-1);
	printf("get n bits\n");
	print_bits(number);
}

int	set_nbits(unsigned int number,int number_of_bits,int value)
{
	if(value==1) // 1 means set ie make bit 1, for that OR operation
		number = number | ((1<<number_of_bits)-1);
	else if(value==0) // 0 means clear, for that AND operation
		number = number & ~((1<<number_of_bits)-1); // make the corresponding bit to 0 to clear
	printf("set n bits\n");
	print_bits(number);
}

int get_nbits_from_pos(unsigned int number,int number_of_bits,int position)
{
	number = number & (((1<<number_of_bits)-1)<<position-1);
	number=number>>position-1;
	printf("get n bits from position\n");
	print_bits(number);
}

int set_nbits_from_pos(unsigned int number,int number_of_bits,int position,int value)
{
	if(value==1)
		number = number | (((1<<number_of_bits)-1)<<position-1);
	else if(value==0)
		number = number & ~(((1<<number_of_bits)-1)<<position-1);
	printf("set n bits from pos\n");
	print_bits(number);
}

int toggle_bits_from_pos(unsigned int number,int number_of_bits,int position)
{
	number = number ^ (((1<<number_of_bits)-1)<<position-1); // for toggle(1 to 0, 0 to 1) use XOR operator
	printf("toggle n bits from position\n");
	print_bits(number);
}

int print_bits(unsigned int number)
{
	int idx;
	for(idx=((sizeof(number)*8)-1);idx>=0;idx--)
	{
		if((number & (1<<idx)))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}


main()
{
	unsigned int number;
	int number_of_bits,position,value,decesion=1;
	while(decesion==1)
	{
	printf("enter the number\n");
	scanf("%d",&number);
	printf("enter number of bits\n");
	scanf("%d",&number_of_bits);
	printf("enter position\n");
	scanf("%d",&position);
	printf("enter value\n");
	scanf("%d",&value);
	printf("number\n");
	//==========================function call===============================
	print_bits(number);
	get_nbits(number,number_of_bits);
	set_nbits(number,number_of_bits,value);
	get_nbits_from_pos(number,number_of_bits,position);
	set_nbits_from_pos(number,number_of_bits,position,value);
	toggle_bits_from_pos(number,number_of_bits,position);
	printf("want to continue 1 / 0\n");
	scanf("%d",&decesion);
	}
}
