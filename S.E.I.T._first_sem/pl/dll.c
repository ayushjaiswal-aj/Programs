#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	struct node * prev;
	int data;
	struct node * next;
};
struct node *getnode()
{
	struct node *newnd;
	int x;
	newnd=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Data :");
	scanf("%d",&x);
	newnd->data=x;
	newnd->next=NULL;
	newnd->prev=NULL;
	return newnd;
}
struct node * create(struct node * head)
{
	struct node *newnd, *tempnd;
	char choice;
	do
	{
		newnd=getnode();
		if(head==NULL)
		{
			head=tempnd=newnd;
		} 
		else
		{
			tempnd->next=newnd;
			newnd->prev=tempnd;
			tempnd=tempnd->next;
			tempnd=newnd;
			
		}
		printf("\nDO you want to enter more element Y|N:");
		fflush(stdin);
		scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
	return (head);
}
void display(struct node *head)
{
	struct node *curr=head;
	printf("\nHead->");
	while(curr->next!=NULL)
	{
		printf("%d->",curr->data);
		curr=curr->next;
	}
	printf("%d->NULL\n",curr->data);
}
struct node * Insertb(struct node *head)
{
	struct node *temp;
	temp=getnode();
	temp->next=head;
	head->prev=temp;
	head=temp;
	return head;
}
struct node *Insertbet(struct node *head)
{
	struct node *temp;
	struct node *curr;
	int pos,i;
	printf("\nEnter position at which you want to Insert:");
	scanf("%d",&pos);
	for(curr=head,i=1;i<pos-1;curr=curr->next,i++);
	
	temp=getnode();
	temp->next=curr->next;
	temp->prev=curr;
	curr->next=temp;
	curr->next->prev=temp;
	return head;	
}
struct node *search(struct node *head ,int ele)
{
	struct node *curr=head;
	while((curr!=NULL)&&(curr->data!=ele))
	{
		curr=curr->next;
	}
	return curr;;
}
void reverse(struct node *head)
{
	struct node *temp=head;
	
	if(temp->next!=NULL)
		reverse(temp->next);
		printf("%d->",temp->data);
}
int main()
{
	int ch,ch1,ele,p,key,x=0;
	struct node *head=NULL,*temp,*pos,*curr;
	do
	{
	printf("\n......MENU......\n1.Create\n2.Display\n3.Search\n4.Insert\n5.Delete\n6.Modify\n7.Reverse\n8.Exit\nEnter any no. from 1-8\n");
	scanf("%d",&ch);
	switch(ch)
		{
			case 1: head=create(head);
					break;
			case 2:if(head!=NULL)
					{	
						printf("\n----Linked list----\n"); 
						display(head);
					}
					else
					printf("\nLinked List is Empty");
					break;
			case 3:	if(head!=NULL)
					{
						printf("\nEnter the element to Search : ");
						scanf("%d",&ele);
						pos=search(head,ele);
						if(pos==NULL)
						printf("\nThe element %d is not found ",ele);
						else
						printf("\nThe element %d is present in Linked list",ele);
					}
					else
					{
					printf("\nLinked List is Empty");
					}
				break;		
			case 4:	do
					{
						printf("\n......MENU......\n1.Insert at beginning\n2.Insert in Between\n3.Main Menu\n");
						scanf("%d",&ch1);
						switch(ch1)
						{
							case 1:	head=Insertb(head);
								break;
							case 2:	head=Insertbet(head);
								break;
							case 3 : x++;
								break;
							default:printf("\nWrong Choice.\n");
								break;
						}
					}while(x<1);
				break;
			case 5:
						if(head!=NULL)
					{	printf("\nEnter the element to be Deleted ");
						scanf("%d",&ele);
						curr=search(head,ele);
						if(curr==NULL)
						printf("\nThe element %d to be deleted not found ",ele);
						else
						{
							printf("\nThe element %d is deleted successfully ",ele);
							if (curr==head)
							{
								head=head->next;
								head->prev=NULL;
							}
							else if(curr->next==NULL)
								curr->prev->next=NULL;
							else
								curr->prev->next=curr->next;
								curr->next->prev=curr->prev;
							}
							free(curr);
						}
					else
						printf("\nLinked List is Empty ... Can't Delete ");
					display(head);
						break;
			case 6: if(head!=NULL)
			 		{
			 			printf("\nEnter the value to Modify :-");
			 			scanf("%d",&key);
			 			pos=search(head,key);
			 			if(pos==NULL)
			 			{
			 				printf("\n Can't Modify");
					    }	
					    else
					    {
					    	printf("\n Enter the Modified Value:-");
					    	scanf("%d",&pos->data);
					    	printf("\nThe Linked List is modified sccessfully ",key);
						}
					}
			 		break;
			case 7: if(head!=NULL)
					{
						printf("\nHEAD->");
						reverse(head);
						printf("NULL");
					}
					else
						printf("\nLinked List is Empty ... Can't Reverse ");
					break;
			case 8:	x++;
					break;
			default : printf("\n Enter any no. from 1-8 \n");  		
		}
	}while(x<2);
}
