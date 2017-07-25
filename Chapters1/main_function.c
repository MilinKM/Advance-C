#include<stdio.h>
int number,flag = 0, num;
int main()
{
	int result,print=0;
	if (flag == 0)
	{
		printf("enter the number\n");
		scanf("%d",&number);
		num = number;
		flag = 1;
	}

	if (flag == 1)
	{
		if(number == 1)
			return 1;
		// here assign number decrement to local variable result
			result = number--;
		// result == num when it reach initial stack
		if(result == num)
			print = 1;
		result = (result * main()); // recursive function
		if(print)
			printf("%d",result);
		return result;	
	}
}


