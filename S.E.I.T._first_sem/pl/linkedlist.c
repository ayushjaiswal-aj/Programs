#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node* getnode()
{ 	struct node*newn;

	newn=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Data ");
	scanf("%d",&newn->data);
	newn->next=NULL;
	return(newn);
}
struct node* create(struct node*head)
{
	struct node*newn,*p ;
	char ch;
	do
	{
		newn=getnode();

		if(head==NULL)
		{
			head=newn;
			p=newn;
		}
		else
		{
			p->next=newn;
			p=newn;
		}
		printf("\nDo you want to add any more nodes Y/N? ");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	return(head);
}
void dis(struct node*head)
{
	struct node*p=head;
	if(head!=NULL)
	{
		printf("\nHEAD->");
		while(p->next!=NULL)
		{
			printf("%d->",p->data);
			p=p->next;
		}
		printf("%d->NULL",p->data);
	}
	else
		printf("\nLinked List is Empty");
}
struct node* search(struct node*head,int key,struct node**prev)
{
	struct node*curr=head;
	while((curr!=NULL)&&(curr->data!=key))
	{
		*prev=curr;
		curr=curr->next;
	}
	return(curr);
}
void Insertbet(struct node* head,int key)
{
	struct node*temp,*curr,*prev;
	curr=NULL;
	prev=NULL;
	curr=search(head,key,&prev);
	if(curr==NULL)
		printf("\nThe element %d not found,Can't Insert ",key);
	else
	{   temp=getnode();
		temp->next=curr->next;
		curr->next=temp;
	}
}
struct node* Insertb(struct node* head)
{
	struct node*temp;
	temp=getnode();
	temp->next=head;
	head=temp;
	return(head);
}
struct node * revert(struct node *head)
{
	struct node *p,*q,*r;
	p=head;
	q=head->next;
	p->next=NULL;
	while(q!=NULL)
	{
		if(q!=NULL)
		r=q->next;
		q->next=p;
		p=q;
		q=r;
	}
	return(p);
}
void reverse(struct node *head)
{
	struct node *temp=head;
	
	if(temp->next!=NULL)
		reverse(temp->next);
		printf("%d->",temp->data);
}
void main()
{
	int ch,key,flag=0,x=0,ch1;
	struct node *head=NULL,*curr=NULL,*prev=NULL,*temp;	
	do
	{
	printf("\n......MENU......\n1.Create\n2.Display\n3.Search\n4.Insert\n5.Delete\n6.Revert\n7.Reverse\n8.Exit\nEnter any no. from 1-8\n");
	scanf("%d",&ch);
	switch(ch)
	{
	    	case 1 : head=create(head);
		     	break;
	    	case 2 :printf("\n----Linked list----\n"); 
				dis(head);
	    		break;
		case 3 :	if(head!=NULL)
					{	printf("\nEnter the element to Search : ");
						scanf("%d",&key);
						curr=search(head,key,&prev);
						if(curr==NULL)
							printf("\nThe element %d is not found ",key);
						else
							printf("\nThe element %d is present in Linked list",key);
					}
					else
						printf("\nNot Found ");
					break;
	    	case 4 : do
				{
			printf("\n......MENU......\n1.Insert at beginning\n2.Insert in Between\n3.Main Menu\n");
			scanf("%d",&ch1);
					switch(ch1)
					{
						case 1 : head=Insertb(head);
									break;
						case 2 : 
							printf("\nEnter the element after which new node is to be inserted : ");
							scanf("%d",&key);
							Insertbet(head,key);
									break;
						case 3 : x++;
					}
				}while(x<1);
		        break; 
		case 5 :	if(head!=NULL)
					{	printf("\nEnter the element to be Deleted ");
						scanf("%d",&key);
						curr=search(head,key,&prev);
						if(curr==NULL)
							printf("\nThe element %d to be deleted not found ",key);
						else
						{
							printf("\nThe element %d is deleted successfully ",key);
							if (curr==head)
								head=head->next;
							else if(curr->next==NULL)
								prev->next=NULL;
							else
								prev->next=curr->next;
							free(curr);
						}
					}
					else
						printf("\nLinked List is Empty ... Can't Delete ");
					dis(head);
	   	 case 6: if(head!=NULL)
					{
						head=revert(head);
						dis(head);
					}
					else
						printf("\nLinked List is Empty ... Can't Revert");
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
		case 8 : x++;  
					break;   
		default : printf("\n Enter any no. from 1-8 \n");  		
	}
	}while(x<2);
}
