#include<stdio.h>
//*************************function body of sorting of number****************************************************************
void sort(float *ptr,int limit)
{
	int idx,jdx,tmp;
	for (idx = limit-1;idx >= 0;idx--)
	{
		for (jdx = 0;jdx <= idx;jdx++)
		{
			if (*(ptr+jdx) > *(ptr+idx))
			{
				tmp = *(ptr+idx);
				*(ptr+idx) = *(ptr+jdx);
				*(ptr+jdx) = tmp;
			}
		}
	}
}

//******************************function body of median of numbers************************************************************
float median(float *ptr,int limit)
{
	float median;
	if (limit%2 != 0 )
		median = *(ptr+(limit/2));
	else
		median = (float) (*(ptr+((limit/2)-1)) + *(ptr+(limit/2)))/2;
	return median;
}

//****************************function body of average of numbers**************************************************************
void square_average(float *ptr,int limit,float median)
{
	int idx;
	float sum=0,average;
	for (idx = 0;idx < limit;idx++)
	{
		*(ptr+idx) = (*(ptr+idx) - median) * (*(ptr+idx) - median);
	}
	for (idx = 0;idx < limit;idx++)
	{
		sum = sum + *(ptr+idx);
	}
	average = sum/limit;
	printf("average = %f\n",average);
}

//***************************************************main function***********************************************************************

main()
{
	int limit,decesion=1;
	while (decesion == 1)
	{
		printf("enter the limit\n");
		scanf("%d",&limit);
		float arr[limit];
		int i;
		float median_of_numbers;
		printf("enter the numbers\n");
		for (i = 0;i < limit;i++)
		{
			scanf("%f",&arr[i]);
		}
		sort(arr,limit); // function call
		median_of_numbers=median(arr,limit); // function call
		square_average(arr,limit,median_of_numbers); // function call
		printf("want to continue\n");
		scanf("%d",&decesion);
	}
}

