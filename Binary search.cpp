#include<stdio.h>
#include<conio.h>

void binarysearch(int a[], int n, int search)
{
	int beg=0, end=n-1, mid, flag=0;
	
	while(beg<=end)
	{
		mid=(beg+end)/2;
		
		if(a[mid]==search)
		{
			flag=1;
			break;
		}
		
		else if(a[mid]<search)
		{
			beg=mid+1;
		}
		
		else
		{
			end=mid-1;
		}
	}
	
	if(flag==0)
	{
		printf("\nThe element is not present");
	}
	else
	{
		printf("\nThe element is  present");
	}
}

void swap(int *a, int *b)
{
	*a= *a+*b;
	*b= *a-*b;
	*a= *a-*b;
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


void arraysort(int a[], int n)
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
	
	displayarray(a,n);
}


int main()
{
	int a[20], n, search, i;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	printf("\nEnter the elements in the array");
	for(i=0; i<n; i++)
	{
		printf("\nElement %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	arraysort(a,n);
	
	printf("\nEnter the value to be searched: ");
	scanf("%d", &search);
	
	binarysearch(a,n, search);
	
	getch();
	return 0;
	
}
