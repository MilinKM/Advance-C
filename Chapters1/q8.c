#include<stdio.h>
main()
{
	int decesion=1;
	while(decesion==1)
	{
	int number,sum=5,idx,jdx,number1;
	printf("enter the number of rows\n");
	scanf("%d",&number);
	number1=number;
	for(idx=1;idx<=number;idx++) //loop for row
	{
    for(jdx=1;jdx<=number;jdx++) // loop for column
	{
		if(jdx==idx || idx==number-jdx+1)
			printf("Hello");
		else
			printf(" ");
	}
	printf("\n");
	}
	printf("want to continue\n");
	scanf("%d",&decesion);
	}
}





