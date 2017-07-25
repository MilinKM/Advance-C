#include <stdio.h>
main()
{
	int idx, jdx, kdx, column1, row1, column2, row2, type, decesion = 1;
	while (decesion == 1)
	{
		printf("enter the number of rows and  columns of 1st matrix\n");
		scanf("%d %d",&row1,&column1);
		int matrix1[row1][column1];
		int arr[2][2];
		printf("enter the 1st matrix %d elements\n", row1 * column1);
		// loop for store first matrix elements
		for (idx = 0; idx < row1; idx++)
		{
			for (jdx = 0; jdx < column1; jdx++)
				scanf("%d",&matrix1[idx][jdx]);
		}
		int matrix2[10][10];
		int product[10][10];
		int test = 0, pdx, qdx, product1, result;
		printf("which one\n"
				"1. matrix multiplication\n"
				"2. transpose\n"
				"3. determinent\n");
		scanf("%d",&type);
		switch (type)
		{
			case 1:
				printf("enter the number of rows and  columns of second matrix\n");
				scanf("%d %d",&row2,&column2);
				printf("enter the 2nd matrix %d elements\n", row2 * column2);
				for (idx = 0; idx < row2; idx++)
				{
					for (jdx = 0; jdx < column2; jdx++)
						scanf("%d",&matrix2[idx][jdx]);
				}
				if (column1 == row2)
				{
					// loop for finding multiplication of matrics
					for (idx = 0; idx < row1; idx++)
					{
						for (jdx = 0; jdx < column2; jdx++)
						{
							product[idx][jdx] = 0;
							for (kdx = 0; kdx < column1; kdx++)
								product[idx][jdx] += matrix1[idx][kdx] * matrix2[kdx][jdx]; 
						}
					}
					// loop for display the product
					for (idx = 0; idx < row1; idx++)
					{
						for (jdx = 0; jdx < column2; jdx++)
							printf("%d ",product[idx][jdx]);
						printf("\n");
					}
				}
				else
					printf("matrix multiplication not possible\n");
				break;
			case 2:
				// loop for the transpose
				for (idx = 0; idx < column1; idx++)
				{
					for (jdx = 0; jdx < row1; jdx++)
						printf("%d ",matrix1[jdx][idx]);
					printf("\n");
				}
				break;
			case 3:
				if (row1 == column1)
				{
					// loop for the determinent
					pdx = 0, qdx = 0, result = 0, product1 = 1;
					for (kdx = 0; kdx < column1; kdx++)
					{
						pdx = 0, qdx = 0;
						for (idx = 0; idx < row1; idx++)
						{
							for (jdx = 0; jdx < column1; jdx++)
							{
								if (idx != 0 && jdx != kdx)
								{
									test = 1;
									// store into another array if the number is not in the row or column
									arr[pdx][qdx] = matrix1[idx][jdx];
									qdx++;
								}
							}
							if (test == 1)
							{
								qdx = 0;
								pdx++;
							}
							test = 0;
						}
						product1 = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
						if (kdx %2 != 0)
							result = result - matrix1[0][kdx] * product1;
						else
							result = result + matrix1[0][kdx] * product1;
						for (idx = 0; idx < 2; idx++)
						{
							for (jdx = 0; jdx < 2; jdx++)
							{
								printf("%d ",arr[idx][jdx]);
							}
							printf("\n");
						}
					}
					printf("determinent is %d \n", result);
				}
				else
					printf("enter square matrix\n");
		}
		printf("want to continue 1/0\n");
		scanf("%d",&decesion);
	}
}
