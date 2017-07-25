#include<stdio.h>
#include<string.h>
char *my_strtkr(char *string, char *delimiter)
{
    int idx,jdx,position=0, flag = 0, not_deli = 0;
    const int length = strlen(delimiter);
 static char *ptr;
    if (!string)
    {
	if(ptr == NULL)
	    return NULL;
	string = ptr;
    }
    for (idx = 0;idx < 20;idx++)
    {
	if (string[idx] == '\0')
	{
	    ptr = NULL;
	    break;
	}

	for (jdx = 0; jdx < length;jdx++)
	{
	    if (string[idx] == delimiter[jdx])
	    {
		flag = 1;
		string[idx] = '\0';
		not_deli = 0;
		break;
	    }
	    else
		not_deli = 1;
	}
	if (not_deli && flag)
	{
	    ptr = &string[idx];
	    break;
	}
    }
return 	string;	
}
main()
{
    char delimiter[50];
    char string[100], *ch;
    printf("enter the delimiter: ");
    scanf("%s",delimiter);
    __fpurge(stdin);
    printf("enter the string: ");
    scanf("%s",string);
    ch = my_strtkr(string,delimiter);
    while (ch != NULL)
    {
	printf("%s\n",ch);
	ch = my_strtkr(NULL, delimiter);
    }
}

