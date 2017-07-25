//pgm to generate prime number upto limit
#include<stdio.h>
main()
{
	int decesion=1;
	int limit,test,idx,jdx;
	while(decesion==1)
	{
	printf("enter the limit\n");
	scanf("%d",&limit);
	int arr[limit];
	for(idx=1;idx<=limit;idx++) // loop for store numbers into array
	{
		arr[idx]=idx;
	}
	for(idx=2;idx<=limit/2;idx++)
	{
		for(jdx=2;jdx<=limit;jdx++) // loop for replace the multiple of num by zero
		{ 
			if(arr[idx]==0)
				break;
			test=idx*jdx;
			if(test<=limit)
			{
				if(arr[test]!=0)
					arr[test]=0;
			}
		}
	}
	for(idx=1;idx<=limit;idx++) // loop for print array
	{
		if(arr[idx]!=0)
			printf("%d\n",arr[idx]);
	}
	printf("want to continue\n");
	scanf("%d",&decesion);
	}
}
