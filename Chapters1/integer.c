#include<stdio.h>
char str(char character)
{
	if (character >=48 && character <=57) // check whether it is integer or not
	return character;
	else
		return 48;
}

main()
{
	char character;
	printf("enter the chara\n");
	character = getchar();
	printf("chara is %c\n",str(character));
}
