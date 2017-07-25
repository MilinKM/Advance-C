#include<stdio.h>
//===================function body========================================================
int bit_cut(int number_for_take_bit,int number_of_bits,int number,int starting_position)
{
	int temp;
	temp   = number_for_take_bit & ((1<<number_of_bits)-1);
	temp   = temp << starting_position-1;
	number = number & ~(((1<<number_of_bits)-1)<<starting_position-1);
	number = number | temp;
	return number;
}



main()
{
	int number,number_of_bits,number_for_take_bit,starting_position,ending_position,temp,idx,decesion=1;
	while(decesion==1)
	{
	printf("enter the number to replace bit\n");
	scanf("%d",&number);
loop1:
	printf("starting bit position\n");
	scanf("%d",&starting_position);
	if(starting_position<1)
	{
		printf("enter a valid position\n");
		goto loop1;
	}
loop2:
	printf("ending bit position\n");
	scanf("%d",&ending_position);
	if(ending_position>32 || ending_position<starting_position)
	{
		printf("enter a valid position\n");
		goto loop2;
	}
	printf("enter number for take bit\n");
	scanf("%d",&number_for_take_bit);
	number_of_bits=ending_position-starting_position+1;
	printf("number for replace in bits\n");
	for(idx=31;idx>=0;idx--)
	{
		if(number & 1<<idx)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	printf("number for take bits\n");
	for(idx=31;idx>=0;idx--)
	{
		if(number_for_take_bit & 1<<idx)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	number = bit_cut(number_for_take_bit,number_of_bits,number,starting_position); //========= call the function here============
	printf("number after replacing\n");
	for(idx=31;idx>=0;idx--)
	{
		if(number & 1<<idx)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	printf("want to continue\n");
	scanf("%d",&decesion);
	}
}
