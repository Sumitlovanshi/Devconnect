#include <stdio.h>
#include<conio.h>
int main()
{
	int array[10];
	int i, j, num, temp, keynum;
	int low, mid, high;
	printf("submitted by :\t\t\t submitted to :");
printf("\nSumit Lovanshi \t\t Faculty name");
	printf("\nEnter total number of array  \n");
	scanf("%d", &num);

	printf("Enter %d elements one by one \n",num);
	for (i = 0; i<num; i++)
	{
		scanf("%d", &array[i]);
	}
        for (i = 0; i< num; i++)
	{
		for (j = 0; j < (num - i - 1); j++)
		{
			if (array[j] >array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	low = 1;
	high = num;
	do
	{
		mid = (low + high) / 2;
		if (keynum< array[mid])
			high = mid - 1;
		else if (keynum> array[mid])
			low = mid + 1;
	} while (keynum != array[mid] && low <= high);
	if (keynum == array[mid])
	{
		printf("SEARCH SUCCESSFUL \n");
		printf("Number Located at position:%d ",mid+1);
	}
	else
	{
		printf("SEARCH FAILED! \n Number not found.");
	}
	getch();
}

