#include<stdio.h>
#include<conio.h>

int main()
{
	int n,a[10],i,j,key;
	printf("Enter number of elements :: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d :: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	printf("\n\n**Sorted Array**");
	for(i=0;i<n;i++)
	{
		printf("\n  Element %d :: %d",i+1,a[i]);
	}
	getch();
	return 0;
}
