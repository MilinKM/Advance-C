// pgm to check whether machine is little endinne or BE
#include<stdio.h>
main()
{
	int t = 0x12345678;// store in place 12 34 56 78
	int *i1ptr;
	char *c1ptr;
	i1ptr = &t;
	c1ptr = &t;
	if (*c1ptr == 0x78)
		printf("it is little endinne\n");
	else if (*c1ptr == 0x12)
		printf("it is big endinne\n");
}

