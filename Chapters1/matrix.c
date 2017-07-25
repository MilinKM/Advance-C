#include<stdio.h>
main()
{
	int row,column,idx,jdx;
	printf("enter row and column\n");
	scanf("%d %d",&row,&column);
	int start_from=row*column;
	for(idx=1;idx<=row;idx++)
{
		for(jdx=1;jdx<=column;jdx++)
		{
			if( jdx==column || idx==1)
				printf(" ""%d",start_from--);
			else if(idx==row && jdx<idx)
				printf(" ""%d",start_from--);
			else
				printf(" *");
			

		}
		printf("\n");
	}
}
