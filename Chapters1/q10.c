// program to find  corresponding day with the entered number
#include<stdio.h>
main()
{
	int decesion=1;
	while(decesion==1)
	{
		int number,idx,year,total_days,monday,tuesday,wednesday,thursday,friday,saturday,sunday;
		printf("enter year\n");
		scanf("%d",&year);
		if((year%4==0 && year%100!=0) || year%400==0)
			total_days=366;
		else if(year)
			total_days=365;
		if(year!=0)
		{
			printf("enter number\n");
			scanf("%d",&number);
			for(idx=0;idx<53;idx++) // loop to find the day corresponding number
			{
				monday    = 1+idx*7;
				tuesday   = 2+idx*7;
				wednesday = 3+idx*7;
				thursday  = 4+idx*7;
				friday    = 5+idx*7;
				saturday  = 6+idx*7;
				sunday    = 7+idx*7;
				if(number>total_days || number==0)
				{
					printf("please enter a valid number\n");
					break;
				}
				else if(number==monday)
				{
					printf("%d : monday\n",number);
					break;
				}
				else if(number==tuesday)
				{
					printf("%d : tuesday\n",number);
					break;
				}
				else if(number==wednesday)
				{
					printf("%d : wednesday\n",number);
					break;
				}
				else if(number==thursday)
				{
					printf("%d : thursday\n",number);
					break;
				}
				else if(number==friday)
				{
					printf("%d : friday\n",number);
					break;
				}
				else if(number==saturday)
				{
					printf("%d : saturday\n",number);
					break;
				}
				else if(number==sunday)
				{
					printf("%d : sunday\n",number);
					break;
				}
			}
		}
		else
			printf("enter a valid year\n");
		printf("want to continue\n");
		scanf("%d",&decesion);
	}
}









