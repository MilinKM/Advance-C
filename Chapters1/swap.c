// pgm to swap number using function
#include<stdio.h>
swap(unsigned int *number)
{
	int temp;
	temp=*number & 0x0f; // assign last number to temp variable
	*number=*number>>4; // number shift by 4 to store first num to number
	*number= *number|(temp<<4); // both numbers are again stored to number ie swaped positions
	printf("%x\n",*number);
}
main()
{
	int decesion=1;
	unsigned int *ptr;
	unsigned int number;
	while(decesion==1)
	{
	printf("enter a number\n");
	scanf("%x",&number);
	ptr = &number;
	swap(ptr);
	printf("want to continue 1/0\n");
	scanf("%d",&decesion);
	}
}

