#include <stdio.h>
#include <stdlib.h>
//**********************************function body of fragments*********************************************************
fragments(int **array, int row, int *row_length)
{
	int idx,jdx, rw;
	int *tmp;
	// loop for sort avg
	for (idx = row - 1; idx >= 0; idx--)
	{
		for (jdx = 0; jdx < idx; jdx++)
		{
			if (*((float *)(array[jdx] + row_length[jdx])) > (*(float *)(array[jdx + 1] + row_length[jdx + 1])))
			{
				tmp = array[jdx];
				rw = row_length[jdx]; // swap the length also
				row_length[jdx] = row_length[jdx + 1];
				row_length[jdx + 1] = rw;
				array[jdx] = array[jdx + 1];
				array[jdx + 1] = tmp;
			}
		}
	}
}
//**************************************function body of print***********************************************
print(int **array, int row, int *row_length)
{
	int idx,jdx;
	for (idx = 0; idx < row; idx++)
	{
		for (jdx =0; jdx <= row_length[idx]; jdx++)
		{
			if (jdx == row_length[idx])
				printf("%f ",*(float *)(array[idx] + jdx));
			else
			printf("%2d ",*(array[idx] + jdx));
		}
		printf("\n");
	}
}
//*****************************************************function body of main*********************************************8
main()
{
	int row, number_of_elements, sum = 0, idx, jdx;
	float average;
	printf("enter the row\n");
	scanf("%d",&row);
	int **array;
	int row_length[row];
	array = calloc(row, sizeof(int *));
	for (idx = 0; idx < row; idx++)
	{
		printf("enter the number of elements in %d row\n",idx);
		scanf("%d",&number_of_elements);
		row_length[idx] = number_of_elements;
		array[idx] = calloc(number_of_elements + 1, sizeof(int));
		// loop for read element
		for (jdx = 0; jdx < number_of_elements; jdx++)
		{
			scanf ("%d", array[idx] + jdx);
			sum = sum + *(array[idx] + jdx);
		}
		// assign average to last position
		average = (float)sum / number_of_elements;
		*((float *)(array[idx] + jdx)) = average;
		sum = 0;

	}
	print(array,row,row_length);
	fragments(array, row, row_length);
	print(array,row,row_length);
}
