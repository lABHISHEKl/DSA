#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b)
{
	*a= *a+*b;
	*b= *a-*b;
	*a= *a-*b;
}

void selectionsort(int a[], int n)
{
	int min=0, i, j;
	
	for(i=0; i<n-1; i++)
	{
		min=i;
		for(j=i+1; j<n; j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
			
			if(min!=i)
			{
				swap(&a[i], &a[min]);
			}
		}
	}		
}

void display(int a[], int n)
{
	int i;
	
	printf("\nThe elements are: ");
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
	
	selectionsort(a,n);
	display(a,n);
	
	getch();
	return 0;
}
