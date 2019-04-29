#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

void display();
struct node
{
	int data;
	struct node *next;
}*start=NULL;
struct node *newnode()
{
	struct node *temp;
     

	temp->next=NULL;
	return temp;
}
void insertdata()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=newnode();
	printf("\nEnter data:");
	sacnf("%d",&temp->data);
	if(start==NULL)
		start=temp;
	else
	{
		struct node *ptr=start;
		//ptr=start;
		temp->next=ptr;
		start=temp;
	}
}
void selectionsort(struct node *start)
{
	struct node *temp=start;
	struct node *i,*j;
	for(i=start;i->next!=NULL;i=i->next)
	{
		for(i=i->next;i!=NULL;i=i->next)
		{
			for(j=i->next;j!=NULL;j=j->next)
			{
				if(i->data > j->data)
				{
					if(i->next >j)
					{
						j->next=i;
						if(i==NULL)
							start=j;
						else
							i->next=j;
					}
				}
				else
				{	
					temp=i->next;
					i->next=j->next;
					j->next=temp;
					j->next=i;
					if(i==NULL)
						start=j;
					else
						i->next=j;
				}
			}
			temp=i;
			i=j;
			j=temp;
		}
	}
}
void display()
{
	struct node *temp=start;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int main()
{
	insertdata();
	//insertdata();
	//insertdata();
	selectionsort(start);
	printf("\nAfter sorting");
	display();
}
