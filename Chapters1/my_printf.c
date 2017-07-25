#include <stdio.h>
#include <stdarg.h>
#include <string.h>
//**********************************function body of printf*************************************************************
my_printf(const char *buff, ...)
{
	char buffer[100];
	va_list ap;
	int idx;
	va_start(ap,buff);
	for (idx = 0; buff[idx]; idx++)
	{ 
		if (buff[idx] == '%')
		{
			idx++;
			if (buff[idx] == 'd')
			{
				//store value in buffer
				sprintf(buffer,"%d", va_arg(ap, int));
				//printf value in buffer to screen
				fputs(buffer, stdout);
			}
			else if (buff[idx] == 'f')
			{
				sprintf(buffer,"%f",va_arg(ap, double));
				fputs(buffer, stdout);
			}
			else if (buff[idx] == 's')
			{
				sprintf(buffer, "%s", va_arg(ap, char *));
				fputs(buffer, stdout);
			}
			else if (buff[idx] == 'c')
			{
				sprintf(buffer, "%c", (char)va_arg(ap, int));
				fputs(buffer, stdout);
			}
		}
		else
		{
			fputs(buff,stdout);
			break;
		}
	}
	va_end(ap);
}
//**********************************************************function body of scanf**********************************************************
my_scanf(const char *buff, ...)
{
	char buffer[100];
	va_list ap;
	int idx;
	void *ptr;
	va_start(ap,buff);
	for (idx = 0; buff[idx]; idx++)
	{
		if (buff[idx] == 'd')
		{
			// store the address in pointer
			ptr = va_arg(ap, int *);
			// store inut value from keyboard to buffer
			fgets(buffer,sizeof(buffer),stdin);
			//convert to integer and stored in the received address location
			*(int *)ptr = atoi(buffer);
		}
		else if (buff[idx] == 'f')
		{
			ptr = va_arg(ap, float *);
			fgets(buffer,sizeof(buffer),stdin);
			*(float *)ptr = atof(buffer);
		}
		else if (buff[idx] == 's')
		{
			// store the base address of input string array in buffer
			fgets(buffer,sizeof(buffer),stdin);
			// copy strings from buffer to original location.......doubt-> how to find the size of main char array
			strcpy(va_arg(ap, char *), buffer);
		}
	}
	va_end(ap);
}
//******************************************************************main function**********************************************88
main()
{
	char num[100], ch = 'a';
	//char *p = "hello";
	int decesion = 1;
	//char alpha = 'a';
	while (decesion == 1)
	{
		__fpurge(stdin);
		my_printf("%c", ch);
		my_printf("enter the string: ");
		my_scanf("%s",num);
		my_printf("%s",num);
		my_printf("want to continue 1/0\n");
		my_scanf("%d",&decesion);
	}
}
