// pgm to generate fibanocci series by using functions
#include<stdio.h>
void fiba(int idx,int first_num,int second_num,int limit)
{
	printf("%d\n",first_num);
	if(idx==limit)
		return;
	return fiba(++idx,second_num,first_num+second_num,limit);
}

main()
{
	int limit,idx=1,first_num=0,second_num=1;
	printf("enter the limit\n");
	scanf("%d",&limit);
	fiba(idx,first_num,second_num,limit);
}
