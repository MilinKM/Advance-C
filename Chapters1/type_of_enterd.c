#include<stdio.h>
//=============function body=====================================

int ascii(char value)
{
if(value>=1 && value<=127)
	return 1;
else
	return 0;
}



int blank(char value)
{
	if(value==32)
		return 1;
	else
		return 0;
}



int digit(char value)
{
if(value >=48 && value<=57)
	return 1;
else
	return 0;
}




int graph(char value)
{
if(value >=33 && value <=126)
	return 1;
else
	return 0;
}





int lower(char value)
{
	if(value>=97 && value<=122)
		return 1;
	else
		return 0;
}





int space(char value)
{
	if(value==32)
		return 1;
	else
		return 0;
}





int upper(char value)
{
if(value>=65 && value<=90)
	return 1;
else 
	return 0;
}


//=======================main function===================================

main()
{
	char value;
	int input,result,decesion=1;
	while(decesion==1)
	{
		printf("enter character: ");
		__fpurge(stdin);
		scanf("%c",&value);
		printf("select one\n");
		printf("1. alnum\n");
		printf("2. alpha\n");
		printf("3. ascii\n");
		printf("4. blank\n");
		printf("5. digit\n");
		printf("6. graph\n");
		printf("7. lower\n");
		printf("8. print\n");
		printf("9. punct\n");
		printf("10. space\n");
		printf("11. upper\n");
		printf("12. xdigit\n");
		scanf("\n%d",&input);

		switch(input)
		{
			case 1: if(lower(value) || upper(value) || digit(value))
						printf("alpha_numeric\n");
					else
						printf("not alpha_numeric\n");
					break;
			case 2: if(lower(value) || upper(value))
						printf("it is alpha\n");
					else
						printf("it is not alpha\n");
					break;
			case 3: if(ascii(value))
						printf("it is ascii\n");
					else
						printf("not ascii\n");
					break;
			case 4: if(blank(value))
						printf("blank\n");
					else
						printf("not blank\n");
					break;
			case 5: if(digit(value))
						printf("digit\n");
					else
						printf("not digit\n");
					break;
			case 6: if(graph(value))
						printf("it is graphical \n");
					else
						printf("it is not graphical\n");
					break;
			case 7: if(lower(value))
						printf("lower alphabet\n");
					else
						printf("not lower\n");
					break;
			case 8: if(graph(value) || space(value))
						printf("printable\n");
					else
						printf("not printable\n");
					break;
			case 9: if(graph(value) && !lower(value) && !upper(value) && !space(value) && !digit(value))
						printf("punctuation\n");
					else
						printf("not punctuation\n");
					break;
			case 10: if(space(value))
						 printf("space\n");
					 else
						 printf("not space\n");
					 break;
			case 11: if(upper(value))
						 printf("upper case\n");
					 else
						 printf("not upper case\n");
					 break;
			case 12: if(digit(value) || (value>=65 && value<=70))
						 printf("hexa decimal\n");
					 else
						 printf("not hexa decimal\n");
					 break;
		}
		printf("want to continue\n");
		scanf("%d",&decesion);
		//while(getchar() != '\n');
	}
}
