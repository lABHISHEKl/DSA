#include<stdio.h>
#include<conio.h>

int linearsearch(int a[], int n, int search)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		if(a[i]==search)
		{
			return i;
		}
	}
	return -1;
}

void displayarray(int a[], int n)
{
	int i;
	printf("\n\nThe elements in the array are: ");
	for(i=0; i<n; i++)
	{
		printf("\nElement %d: %d", i+1, a[i]);
	}	
}

int main()
{
	int a[20], i, n, search, x;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("\nElement %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	displayarray(a,n);
	
	printf("\nEnter the element to search: ");
	scanf("%d", &search);
	
	x= linearsearch(a,n,search);
	(x==-1)
	? printf("Element is not present in the array")
	: printf("Element is present in the array at position %d", x+1); 

	getch();
	return 0;
}
