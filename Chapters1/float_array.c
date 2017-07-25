#include<stdio.h>
// ***************************************sort function body************************************************************
int sort(float *ptr,int limit)
{
	int idx,jdx,test = 0,count,pdx;
	float smallest,temp,temp1;
	for (idx = 0;idx < limit;idx++)
	{
		count = 0;
		if (test == 0)
			smallest = *(ptr+idx); // assign first number as the smallest
		if (test == 1)
		{
			if (*(ptr+idx) > smallest)
				smallest = *(ptr+idx);
			else
				continue;
		}
		for (jdx = 0;jdx < limit;jdx++)
		{
			if (test == 0)
			{
				if (*(ptr+jdx) < smallest) // loop for find the smallest number first time
					smallest = *(ptr+jdx);
			}
			if (test == 1)
			{
				if (*(ptr+jdx) > temp)
				{
					if (*(ptr+jdx) < smallest)
						smallest = *(ptr+jdx);
				}
				else
					continue;
			}

		}
		idx--;
		temp = smallest; //assign smallest to temp to take numbers greater than the smallest
		test = 1; 
		// loop for print smallest number and the repeated numbers
		for (pdx = 0;pdx < limit;pdx++)
		{
			if (*(ptr+pdx) == temp)
			printf("%f\n",smallest);
		}
	}
}
//***********************************************main function*********************************************************

main()
{
	int limit,idx;
	printf("enter the limit\n");
	scanf("%d",&limit);
	float arr[limit];
	printf("enter the numbers\n");
	for (idx = 0;idx < limit;idx++)
	{
		scanf("%f",&arr[idx]);
	}
	sort(arr,limit); // calling function
}

