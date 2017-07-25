#include<stdio.h>
main()
{
	srand(22222222222);
	int idx,jdx,l,player_1,player_2,dice_1,dice_2;
	int dice_roll_limit;
	char cont;

	do
	{
		printf("how many times dice roll\n");
		scanf("%d",&dice_roll_limit);
		int p1_arr[dice_roll_limit],p2_arr[dice_roll_limit];
		//==================loop for store sum of outputs of dice to array========
		for(idx=0;idx<2*dice_roll_limit;idx++)
		{
			dice_1=rand()%6;
			dice_2=rand()%6;
			if(dice_1==0)
				dice_1=1;
			if(dice_2==0)
				dice_2=1;
			if(idx<dice_roll_limit)
			{
				player_1=dice_1+dice_2;
				p1_arr[idx]=player_1;
			}
			else
			{
				l=idx-dice_roll_limit;
				player_2=dice_1+dice_2;
				p2_arr[l]=player_2;
			}
		}
		//==================display array elements=================
		for(idx=0;idx<dice_roll_limit;idx++)
		{
			printf(" ""%d",p1_arr[idx]);
		}
		printf("\n");
		for(idx=0;idx<dice_roll_limit;idx++)
		{
			printf(" ""%d",p2_arr[idx]);
		}
		//============to compare arrays=============================
		for(idx=0;idx<dice_roll_limit;idx++)
		{
			for(jdx=0;jdx<dice_roll_limit;jdx++)
			{
				if(p1_arr[idx]==p2_arr[jdx])
				{
					p2_arr[jdx]=0;
					break;
				}
			}
		}
		int test=0;
		for(idx=0;idx<dice_roll_limit;idx++)
		{
			if(p2_arr[idx]!=0)
			{
				test=1;
				break;
			}
		}
		printf("\n");
		if(test)
			printf("unlucky players\n");
		else
			printf("lucky players\n");

		printf("want cont.. press yY: ");
		__fpurge(stdin);
		scanf("%c", &cont);
	}while(cont == 'y' || cont == 'Y');
}
