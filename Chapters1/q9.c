#include<stdio.h>
main()
{
	int decesion=1;
	while(decesion==1)
	{
	int limit,idx,number,count=0,median,middle_number1,middle_number2;
	printf("enter the limit\n");
	scanf("%d",&limit);
	if(limit<=0)
		printf("enter a positive number\n");
		else
		{
	printf("enter the number\n");
	for(idx=1;idx<=limit;idx++) // loop for read number from keyboard
	{
		scanf("%d",&number);
		count++;
			if(limit%2!=0) // check the limit is odd or even
			{
			if(count==(limit/2)+1)
			{
				median=number;
			}
		    }
		    else
			{
				if(count==(limit/2))
					middle_number1=number;
				if(count==(limit/2)+1)
					middle_number2=number;
				median=(middle_number1+middle_number2)/2;
			}
	}
	printf("median is %d\n",median);
		}
	printf("want to continue 1 / 0\n");
	scanf("%d",&decesion);
	}
}



