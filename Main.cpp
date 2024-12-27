#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int *A, *B, k;
	
	printf("Enter number of elements: ");
	scanf("%d",&k);
	
	A = new int[k]; B = new int[k];

	printf("Elements of first array: \n");

	for (int i = 0; i<k;i++)
	{
		printf("Enter element %d: ",i);
		scanf("%d",&A[i]);
	}

	for (int i = 0; i<k; i++)
	{
		int br = 0;
		while (A[i] != 0)
		{
			if (A[i] % 2 == 0) { br += 1; }
			A[i]/=10;
		}
		
		B[i] = br;
	}

	printf("Elements of second array: \n");
	for (int i = 0; i<k; i++)
	{
		printf("Element %d: %d\n",i ,B[i]);
	}

	delete[]A;
	delete[]B;

    return 0;
}