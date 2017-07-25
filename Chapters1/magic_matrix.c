// pgm to generate a matrix its row and colum sum should equal to n^2+2n
#include<stdio.h>
main()
{
	int number,i,j,idx,jdx,row,column,decesion=1;
	while(decesion==1)
	{
loop:
	printf("enter the dimension\n");
	scanf("%d",&number);
	if(number%2==0 || number<=0)
	{
		printf("enter a positive odd number\n");
	goto loop;
	}
int arr[number][number];
for(idx=0;idx<number;idx++)
{
	for(jdx=0;jdx<number;jdx++)
	{
	arr[idx][jdx]=0;
	}
}
printf("enter row\n");
scanf("%d",&i);
printf("enter coloum\n");
scanf("%d",&j);
int element=1;
int limit=number*number;
while(element<=limit)
{ 
	if(!arr[i][j])
	{
		arr[i][j]=element;
		element++;
	}
	else
	{
		i=(i-1+number)%number;
		j=(j-1+number)%number;
		continue;
	}
		i=((i-1+number)%number);
		j=((j+1)%number);
}
for(idx=0;idx<number;idx++)
{
	for(jdx=0;jdx<number;jdx++)
	{
		printf("%d\t",arr[idx][jdx]);
	}
	printf("\n");
}
printf("want to continue 1/0 \n");
scanf("%d",&decesion);
}
}
