#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *first=NULL;
struct Node *last=NULL;

void display()
{
	struct Node *i;
	i=first;
	printf("\nLIST ");
	while(i!=NULL)
	{
		if(i==last)
		{
			printf(" | %d | %u | ", i->data, i->next);
		}
		else
		{
			printf(" | %d | %u", i->data, i->next);
		}
		i=i->next;
	}
}

void insertatlast(int n)
{
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=n;
	newNode->next=NULL;
	if(first==NULL)
	{
		first=last=newNode;
	}
	else
	{
		last->next=newNode;
		last=newNode;
	}
	display();
}

void insertatfirst(int n)
{
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=n;
	newNode->next=NULL;
	if(first==NULL)
	{
		first=last=newNode;
	}
	else
	{
		newNode->next=first;
		first=newNode;
	}
	
	display();
}

void insertanywhere(int n, int position)
{
	struct Node *i;
	struct Node *j;
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=n;
	newNode->next=NULL;
	i=first;
	while(i!=NULL)
	{
		j=i->next;
		if(i->data==position)
		break;
		else
		i=i->next;
	}
	if(i!=NULL)
	{
		i->next=newNode;
		newNode->next=j;
		if(position==last->data)
		last=newNode;
		display();
	}
	else
	printf("\n%d is Not Present in the list\n",position);
}

void deletefirst()
{
	struct Node *i;
	i=first;
	if(i==NULL)
	{
		printf("\nList is empty");
	}
	else if(first==last)
	{
		free(i);
		first=last=NULL;
	}
	else
	{
		first=first->next;
		i->next=NULL;
		free(i);	
		display();
	}
}

void deleteLast()
{
	struct Node *i,*j;
	j=last;
	i=first;
	if(i==j)
	{
		free(i);
		first=last=NULL;
	}
	else
	{
		while(i!=last)
		{
			if(i->next==last)
			break;
			else
			i=i->next;
		}
		last=i;
		i->next=NULL;
		free(j);
		display();
	}
}

void deletefromsomewhere(int position)
{
	struct Node *i,*j;
	j=first;
	i=NULL;
	if(first->data==position)
	{
		deletefirst();
    }
	else if(last->data==position)
	{
		deleteLast();
	}
	else
	{
		while(j!=NULL)
		{
			i=j->next;
			if(i->data==position)
			{
				break;
			}
			else
			j=j->next;
		}
		if(j==NULL)
		{
			printf("\nNo such element exists\n");
		}
		else
		{
			j->next=i->next;
			i->next=NULL;
			free(i);
			display();	
		}
	}
}

int main()
{
	int n, position;
	char c;
	printf("1- Insert at first  \n2- Insert at Last  \n3- Insert Anywhere \n4- Delete From First \n5- Delete From Last \n6- Delete From Anywhere \n7- Break");
	while(1)
	{
		printf("\nEnter choice: ");
		c=getche();
		if(c=='1')
		{
			printf("\nEnter data: ");
			scanf("%d", &n);
			
			insertatfirst(n);
		}
		else if(c=='2')
		{
			printf("\nEnter data: ");
			scanf("%d", &n);
			
			insertatlast(n);
		}
		else if(c=='3')
		{
			{
			printf("\nEnter data: ");
			scanf("%d", &n);
			
			printf("\nEnter after which data to insert: ");
			scanf("%d", &position);
			
			insertanywhere(n, position);
			}
		}
		else if(c=='4')
		{
			if(first==NULL)
			{
				printf("\nList is Empty\n");
				continue;
			}
			deletefirst();
		}
		else if(c=='5')
		{
			if(first==NULL)
			{
				printf("\nList is Empty\n");
				continue;
			}
			deleteLast();
		}
		else if(c=='6')
		{
			if(first==NULL)
			{
				printf("\nList is Empty\n");
				continue;
			}
			printf("\nEnter which data you want to remove :: ");
			scanf("%d",&position);
			deletefromsomewhere(position);
		}
		else if(c=='7')
		{
			printf("\nEND");
			break;
		}
	}
	getch();
	return 0;
}
