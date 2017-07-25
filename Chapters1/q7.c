#include<stdio.h>
main()
{
	int decesion=1;
	while(decesion==1)
	{
	int first_number,common_difference,multiplicant,total_number_of_terms,idx,sum,product;
	float reciprocal=0;
	printf("enter the first number\n");
	scanf("%d",&first_number);
	printf("enter the common_difference/multiplicant\n");
	scanf("%d",&common_difference);
	printf("enter the total number of terms\n");
	scanf("%d",&total_number_of_terms);
	printf(".............AP....................\n");
	for(idx=0;idx<total_number_of_terms;idx++)
	{
		sum=first_number+idx*common_difference;
		printf("%d ",sum);
	}
	printf("\n");
	printf("................GP..............\n");
	multiplicant=common_difference;
	printf("%d ",first_number);
	product=first_number;
	for(idx=1;idx<total_number_of_terms;idx++)
	{
		product=product*multiplicant;
		printf("%d ",product);
	}
	printf("\n");
	float sum1;
	printf("..................HP.................\n");
	for(idx=0;idx<total_number_of_terms;idx++)
	{
		sum1=first_number+idx*common_difference;
		reciprocal=1/sum1;
		printf("%f ",reciprocal);
	}
	printf("\n");
	printf("want to continue 1 or 0\n");
		scanf("%d",&decesion);
	}
}
