// pgm to remove unwanted spaces in program
#include<stdio.h>

void space(char *ptr)
	{
		int idx, jdx, count = 0, flag = 1, temp,test;
		if (*(ptr + 0) == 32)
			flag = 0;
		for (idx = 0;idx < 50;idx++)
		{
			test = 0;
			while (*(ptr + idx) == 32 )
			{
				count++;
				idx++;
				test = 1;
			}
			// if it contain spaces, idx will increment so need to change the value of current idx to the initial value
			if (test == 1)
				temp = idx - count;
			// loop for replace the space by alphabets or to remove the unwanted spaces 
			for (jdx = 0;jdx < count;jdx++)
			{
				// this flag is for remove all spaces in the begining of string
			if (flag == 0)
			{
				while (*(ptr + idx) != 0)
				{
					*(ptr + idx) = *(ptr + (idx + 1));
					idx++;
				}
			}
			if (flag == 1)
			{
				if (jdx < count-1)
				{
				while (*(ptr + idx) != 0)
				{
					*(ptr + idx ) = *(ptr + (idx + 1));
					idx++;
				}
				}
			}
			idx = temp;
			}
		}
	}
main()
{
	char string[50];
	printf("enter the string\n");
	scanf("%[a-z A-Z]s",string);
	space(string);
	printf("%s\n",string);
}

