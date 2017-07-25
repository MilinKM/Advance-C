#include<stdio.h>
// function body of tower of hanoi
void towerofhanoi(int n, char from, char to, char aux)
{
	if (n == 1)
		{
			printf("move disc 1 from %c to %c\n", from, to);
			return;
		}
	towerofhanoi(n - 1, from, aux, to);
	printf("move disc %d from %c to %c\n",n, from, to);
	towerofhanoi(n - 1, aux, to, from);
}

main()
{
	int n, decesion = 1;
	while (decesion == 1)
	{
	printf("enter the number of disc\n");
	scanf("%d",&n);
	// function call
	towerofhanoi(n,'A','C','B');
	printf("want to continue\n");
	scanf("%d",&decesion);
	}
}
