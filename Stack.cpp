#include<stdio.h>
#include<conio.h>

int top=-1;

void push(int a[],int n)
{
	if(top==14)
	{
		printf("\nSTACK OVERFLOW!!!");
	}
	
	else
	{	
		a[++top]=n;
	}
}

void pop(int a[])
{
	int x;
	
	if(top==-1)
	{
		printf("\nSTACK UNDERFLOW!!!");
	}
	
	else	
	{
		x=a[top--];
		printf("\n%d has been popped.",x);
	}
}

void display(int a[])
{
	int i;
	
	if(top==-1)
	{
	printf("\nSTACK IS EMPTY\n");
	}
	
	else
	{
		printf("\nIN STACK");
		for(i=top;i>=0;i--)
		{	
			printf("\n%d",a[i]);
		}
	}
}

int main()
{
	int a[15],n;
	char ch;
	printf("Enter\n1 for PUSH\n2 for POP\n3 for DISPLAY\n4 for EXIT");
	while(1)
	{
		printf("\nEnter the operation you want to perform");
		ch=getch();
		
		if(ch=='1')
		{
			printf("\nEnter the element to push :: ");
			scanf("%d",&n);
			push(a,n);
		}
		
		else if(ch=='2')
		{
			pop(a);
		}
		
		else if(ch=='3')
		{	
			display(a);
		}
		
		else if(ch=='4')
		{	
			break;
		}
		
		else
		{
			printf("WRONG CHOICE!!!");
		}
	}
	
	getch();
	return 0;
}
