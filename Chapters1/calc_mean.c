#include <stdio.h>
#include <stdlib.h>
//*************************************function body of calculate mean******************************************
float calc_mean(void *ptr,int type, int number)
{
	int idx;
	float sum = 0, average;
	switch (type)
	{
		case 1:
			//loop for calculate the sum
			for (idx =0; idx < number; idx++)
			{
			sum = sum + *((int *)ptr + idx);	
			}
			average = sum / number;
			break;
		case 2:
			for (idx = 0; idx < number; idx++)
			{
				sum = sum + *((float *)ptr + idx);
			}
			average = sum / number;
			break;
		case 3:
			for (idx = 0; idx < number; idx++)
			{
				sum = sum + *((char *)ptr + idx);
			}
			average = sum / number;
			break;
	}
	return average;

}
//**************************************************************main body******************************************************
main()
{
	int number, int_numbers, idx, type, decesion = 1;
	float float_numbers, result;
	char char_numbers;
	void *ptr;
	while (decesion == 1)
	{
		printf("enter the number of elements\n");
		scanf("%d",&number);
		//asssigning base address to pointer
		ptr = calloc(number, sizeof(int *));
		printf("enter the type of number\n"
				"1. int\n"
				"2. float\n"
				"3. char\n");
		scanf("%d",&type);
		printf("enter the numbers\n");
		switch (type)
		{
			case 1:
				for (idx = 0; idx < number; idx++)
				{
					scanf("%d", &int_numbers);
					*((int *)ptr + idx) = int_numbers;
				}
				result = calc_mean(ptr,type,number);
				break;
			case 2:
				for (idx = 0; idx < number; idx++)
				{
					scanf("%f", &float_numbers);
					*((float *)ptr + idx) = float_numbers;
				}
				result = calc_mean(ptr,type,number);
				break;
			case 3:
				for (idx = 0; idx < number; idx++)
				{
					__fpurge(stdin);
					scanf("%c", &char_numbers);
					*((char *)ptr + idx) = char_numbers;
				}
				result = calc_mean(ptr,type,number);
				break;
		}
		printf("mean = %f\n",result);
		printf("want to continue 1/0\n");
		scanf("%d",&decesion);
	}
}
