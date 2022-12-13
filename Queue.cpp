#include<stdio.h>
#include<conio.h>

int f=-1,r=-1;

void enqueue(int a[],int n)
{
	if(r==14)
	printf("\nQueue is full!!!");
	else
	{
		if(f==-1)
		{
			f=0;
		}
		a[++r]=n;
		
	}
}

void dequeue(int a[])
{
	if(f==-1||f>r)
	printf("\nQueue is empty!!!\n");
	else
	f++;
}

void display(int a[])
{
	int i;
	if(f==-1||f>r)
	printf("\nQUEUE IS EMPTY\n");
	else
	{
		printf("\nIN QUEUE");
		for(i=f;i<=r;i++)
		printf("\n%d",a[i]);
	}
}

int main()
{
	int a[15],n;
	char ch;
	printf("Enter\n1 for ENQUEUE\n2 for DEQUEUE\n3 for DISPLAY\n4 for EXIT");
	while(1)
	{
		printf("\n\nEnter the operation you want to perform :: ");
		ch=getche();
		if(ch=='1')
		{
			printf("\nEnter the element insert :: ");
			scanf("%d",&n);
			enqueue(a,n);
		}
		else if(ch=='2')
		dequeue(a);
		else if(ch=='3')
		display(a);
		else if(ch=='4')
		{
			printf("\nEXIT");
			break;
		}
		else
		printf("WRONG CHOICE!!!");
	}
	getch();
	return 0;
}
