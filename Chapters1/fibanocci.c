#include<stdio.h>
main()
{
	int limit,previous_num,next_num,sum,count;
	char decesion='y';
	while(decesion=='y')
	{
		previous_num=0;
		next_num=1;
		sum=0;
		printf("enter the limit\n");
		scanf("%d",&limit);
		if(limit<=0)
			printf("enter a positive number other than zero\n");
		else if(limit==1)
			printf("0\n");
		else
		{
			printf("0\n");
			for(count=1;count<limit;count++) //loop for printing fibanocci upto limit
			{
				previous_num=next_num; // assigning values
				next_num=sum;
				sum=previous_num+next_num;
				printf("%d\n",sum);
			}
		}
		printf("want to continue y/n\n");
		scanf("\n%c",&decesion);
	}
}

