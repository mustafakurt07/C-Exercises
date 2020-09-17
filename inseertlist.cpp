#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
void insert(node** head,int num)
{
	node* temp=(node *)calloc(1,sizeof(node));
	temp->data=num;
	
	if(*head==NULL)
	{
		*head=temp;
	}
	else
	{
		node *prev=NULL;
		node *cur=*head;
		while(cur!=NULL &&cur->data<temp->data)
		{
			prev=cur;
			cur=cur->next;
		}
		if(prev!=NULL)
		{
			prev->next=temp;
			temp->next=cur;
		}
		else
		{
			temp->next=*head;
			*head=temp;
		}
	}
}
void printList(node *head)
{
	if(head!=NULL)
	{
		node *cur=head;
		while(cur!=NULL)
		{
			printf("%d\t",cur->data);
			cur=cur->next;
			
		}
	}
}
main(void)
{
node *head=NULL;
insert(&head,5);
insert(&head,3);
insert(&head,10);
insert(&head,7);
insert(&head,12);	
printList(head);
return 0;
	
}
