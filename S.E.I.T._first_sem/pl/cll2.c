#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct node{
	int coef,expo;
	struct node *next;
	}node;
struct node * getnode(){
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->coef=temp->expo=-999;
	temp->next=temp;
	 return(temp);
}
void create(node *head){  
	node*temp;
	int ch;
 	do{
	 	temp=getnode();
		printf("\nEnter cf and ex for term:");
		scanf("%d%d",&temp->coef,&temp->expo);
	   	insert(head,temp);
	  	printf("\n do you want to insert more nodes:0=NO,1=YES:-");
	   	scanf("%d",&ch);
		}while(ch!=0);
}
void insert(node*head,node*temp){
	node*prev=head,*curr=head->next;
	if(head->next==head){
		temp->next=prev->next;
		prev->next=temp;
	}
	else{
		while((curr->expo>temp->expo)&&(curr!=head)){
			prev=curr;
			curr=curr->next;
		}
		if(curr->expo==temp->expo)
			curr->coef+=temp->coef;
		else{
			temp->next=prev->next;
			prev->next=temp;
		}
	}
}
void display(node *head){
	node*temp=head->next;
	while(temp->next!=head){
		printf("%dX^%d + ",temp->coef,temp->expo);
		temp=temp->next;
	}
	printf("%dX^%d=0 ",temp->coef,temp->expo);
}
node *multiplication(node *head1,node *head2){
	node *p1=head1->next,*p2=head2->next,*p3,*temp;

	p3=getnode();
	while(p1!=head1){   
		p2=head2->next;
		while(p2!=head2){
			temp=getnode();
			temp->coef=p1->coef*p2->coef;
			temp->expo=p1->expo+p2->expo;
			insert(p3,temp);

			p2=p2->next;
		}
		p1=p1->next;
	}
	return(p3);
}
node *addition(node *head1,node *head2){
	node *p1=head1->next,*p2=head2->next,*p3,*temp;

	p3=getnode();
	while((p1!=head1)&&(p2!=head2)){
		if(p1->expo>p2->expo){
			temp=getnode();
			temp->coef=p1->coef;
			temp->expo=p1->expo;
			insert(p3,temp);
			p1=p1->next;
		}
		else if(p1->expo<p2->expo){
			temp=getnode();
			temp->coef=p2->coef;
			temp->expo=p2->expo;
			insert(p3,temp);
			p2=p2->next;
		}
		else if(p1->expo==p2->expo){
			temp=getnode();
			temp->coef=p1->coef+p2->coef;
			temp->expo=p1->expo;
			insert(p3,temp);
			p1=p1->next;
			p2=p2->next;
		}
	}
		while(p1!=head1)
		{
			temp=getnode();
			temp->coef=p1->coef;
			temp->expo=p1->expo;
			insert(p3,temp);
			p1=p1->next;
		}
		while(p2!=head2)
		{
			temp=getnode();
			temp->coef=p2->coef;
			temp->expo=p2->expo;
			insert(p3,temp);
			p2=p2->next;
		}
	return(p3);
}
double evaluation(node *head1)
{   node *p1=head1->next;
	double ans=0;
	int x;
	printf("\nEnter the value of X : ");
	scanf("%d",&x);
	while(p1!=head1)
	{
			ans+=p1->coef*pow(x,p1->expo);
			p1=p1->next;
	}
	return(ans);
}void main()
{
 int ch,x=0;
 int ans=0;
 node *head1=NULL,*head2=NULL,*head3=NULL;
 head1=getnode();
 head2=getnode();
 head3=getnode();
 printf("\nEnter first polynomial:");
 create(head1);
 display(head1);

 printf("\nEnter second polynomial;");
 create(head2);
 display(head2);
 do
 {
	printf("\n......MENU......\n1.Addition\n2.Multiplication\n3.Evaluation\n4.Exit\nEnter your Choice : ");
  	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			head3=addition(head1,head2);
			printf("First Polynomial : ");
			display(head1);
			printf("\nSecond Polynomial : ");
			display(head2);
			printf("\nAddition : ");
			display(head3);
			break;
		case 2:
				head3=multiplication(head1,head2);
				printf("First Polynomial : ");
				display(head1);
				printf("\nSecond Polynomial : ");
				display(head2);
				printf("\nAddition : ");
				display(head3);
				break;
		case 3:
				ans=evaluation(head1);
				printf("\n Answer is=%d",ans);
				break;
		case 4:	
				x++;
				break;
		default:printf("You have Entered Wrong Choice:");
	}
 }while(x<1);
}
