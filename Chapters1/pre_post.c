#include<stdio.h>

/******************************function body of pre_decrement*************************/

int pre_decrement(int *number)
	{
		int idx;
		for(idx=0;idx<31;idx++)
		{
			if((*number & (1<<idx)))
			{
				*number ^= (1<<idx);
				break;
			}
			else
				*number ^= (1<<idx);
		}
		return *number;
	}
//*******************************************************************************************
//**************************function body of pre_increment***********************************
int pre_increment(int *number)
	{
		int idx;
		for(idx=0;idx<31;idx++)
		{
			if(!(*number & (1<<idx)))
			{
				*number ^= (1<<idx);
				break;
			}
			else
				*number ^= (1<<idx);
		}
		return *number;
	}
//**********************************************************************************************
//*************************************function body of post_increment*************************
int post_increment(int *ptr)
	{
		int idx,temp;
			temp = *ptr;
		for(idx=0;idx<31;idx++)
		{
			if(!(*ptr & (1<<idx)))
			{
				*ptr ^= (1<<idx);
				break;
			}
			else
				*ptr ^= (1<<idx);
		}
		return temp;
	}
//**************************************************************************************************
//***************************************function_body of post_decrement***************************
int post_decrement(int *ptr)
	{
		int idx,temp;
			temp = *ptr;
		for(idx=0;idx<31;idx++)
		{
			if((*ptr & (1<<idx)))
			{
				*ptr ^= (1<<idx);
				break;
			}
			else
				*ptr ^= (1<<idx);
		}
		return temp;
	}
//**************************************************************************************************
main()
{
	int number,temp1,temp2,temp3,temp4,result,*ptr,decesion=1;
	while(decesion==1)
	{
	printf("enter the number\n");
	scanf("%d",&number);
	temp1=number;
	ptr = &temp1;
	result=pre_decrement(ptr);// function call
	printf("pre_decrement=%d\n",result);
	printf("temp1=%d\n",temp1);// original value
	temp2=number;
	ptr=&temp2;
	result=pre_increment(ptr);// function call
	printf("pre_increment=%d\n",result);
	printf("temp2=%d\n",temp2);
	temp3=number;
	ptr = &temp3;
	result=post_increment(ptr);
	printf("post_increment=%d\n",result);
	printf("temp3=%d\n",temp3);
	temp4=number;
	ptr=&temp4;
	result=post_decrement(ptr);
	printf("post_decrement=%d\n",result);
	printf("temp4=%d\n",temp4);
	printf("want to continue 1/0\n");
	scanf("%d",&decesion);
	}
}


