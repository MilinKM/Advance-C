#include<stdio.h>

main()
{
	char character_count = 0, ch, line_count = 0, word_count = 0, arr[100];

	while ((ch = getchar()) != EOF)
	{
		arr[++character_count] = ch;
		/* if character equal to \n it is a line */
		if (ch=='\n')
			line_count++;
	}
	int i, test;
	for (i = 1;i <= character_count;i++) 
	{
		test = 0;
		// if character is not a space or enter it is word
		while ((arr[i] != 32 && arr[i] != '\n')) //loop for check word
		{
			test = 1;
			if (i == character_count)
				break;
			i++;
		}
		if (test == 1)
		{
			word_count++;
		}
	}
	printf("%6d %6d %6d\n", character_count, line_count, word_count);
}
