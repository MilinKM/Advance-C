#include <stdio.h>
#include <err.h>
#define READ_SIZE 1024
int main(int argc, char *argv[])
{
	int idx, jdx;
	if (argc < 3)
	{
		printf("invalid arguments\n");
		return 1;
	}
	if (argc > 3)
	{
		FILE *fp[argc];
		for (idx = 1, jdx = 0; idx < argc; idx++, jdx++)
		{
			if (idx != argc - 1)
			{
				fp[jdx] = fopen(argv[idx], "r"); // open the file
			}
			else
			{
				fp[jdx] = fopen(argv[argc - 1], "a+"); // open the file
			}
			if (NULL == fp[jdx])
			{
				perror("open:");
				printf("error! File %s could not be opened\n", argv[idx]);
				return 2;
			}
		}
		
	// code for write operation
		char ch;
		for (idx = 0; idx < argc - 1; idx++)
		{
			while ((ch = fgetc(fp[idx])) != EOF )
			{
				fputc(ch,fp[argc - 2]);
			}
		}
		fseek(fp[argc - 2], 0L, SEEK_SET);
		while ((ch = fgetc(fp[argc - 2])) != EOF)
			printf("%c",ch);
	}
//	fclose(fp1);
	return 0;
    }
