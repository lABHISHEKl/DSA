#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b)
{
	*a= *a+*b;
	*b= *a-*b;
	*a= *a-*b;	
}

void bubblesort(int a[], int n)
{
	int i, j;
	
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j], &a[j+1]);
			}
		}
	}
}

void display(int a[], int n)
{
	int i;
	
	printf("\nThe elements in the array after sorting: ");
	for(i=0; i<n; i++)
	{
		printf("\nElement %d: %d", i+1, a[i]);
	}
}

int main()
{
	int a[20], i, n;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	printf("\nEnter the elements in the array: ");
	for(i=0; i<n; i++)
	{
		printf("\nElement %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	bubblesort(a, n);
	display(a,n);
	
	getch();
	return 0;
}
