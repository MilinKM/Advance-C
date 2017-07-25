#include<stdio.h>
main()
{
	int number,number1,idx,bits,compliment,decesion=1;
	unsigned int unsigned_number;
	while(decesion==1)
	{
	printf("enter the signed and unsigned number\n");
	scanf("%x %x",&number,&unsigned_number);

	//****************************for signed number****************************
	  
	printf("signed_number in bits is: ");
	for(idx=sizeof(number)*8-1;idx>=0;idx--)
	{
     if(bits = (number & (1<<idx))) // checking bit is 1 or not by AND operation
	  printf("1");
	 else
		 printf("0");
	}
	printf("\n");
	if(number<0)
		number1=-1*number;
	else
		number1=number;
	printf("2's compliment of the number is: ");
	for(idx=sizeof(number1)*8-1;idx>=0;idx--)
	{
		compliment=~number1 + 1;
     if(bits = (compliment & (1<<idx)))
	  printf("1");
	 else
		 printf("0");
	}

	printf("\n");

	// ******************* for unsigned number *******************************
	   
	printf("unsigned_number in bits is: ");
	for(idx=sizeof(unsigned_number)*8-1;idx>=0;idx--)
	{
     if(bits = (unsigned_number & (1<<idx)))
	  printf("1");
	 else
		 printf("0");
	}
	printf("\n");
	printf("2's compliment of the unsigned number is: ");
	for(idx=sizeof(unsigned_number)*8-1;idx>=0;idx--)
	{
		compliment=~unsigned_number + 1;
     if(bits = (compliment & (1<<idx)))
	  printf("1");
	 else
		 printf("0");
	}
	printf("\n");
	printf("want to continue 1 /0\n");
	scanf("%d",&decesion);
	}
	printf("\n");
}
