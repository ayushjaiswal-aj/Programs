#include<stdio.h>
#include<stdlib.h>
struct data
{
	int rollno;
	char name[30];
	float percent
}s1[100];
void accept(int i)
{
	printf("\nEnter Roll Number : ");
	scanf("%d",&s1[i].rollno);
	printf("Enter Name : ");
	scanf("%s",s1[i].name);
	printf("Enter Percentage : ");
	scanf("%f",&s1[i].percent);
}
void display(int i)
{
	printf("\nRoll Number: %d",s1[i].rollno);
	printf("\nName: %s",s1[i].name);
	printf("\nPercent: %f\n",s1[i].percent);
}
void search1(int s,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s1[i].rollno==s)
		{
			printf("\nRecord Found at position %d\n",i+1);
			display(i);
			break;
		}
		else if(i==n)
		{
			printf("Record Not Found\n");
		}
	}
}
void modify(int s,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s1[i].rollno==s)
		{
			printf("Record Found\n");
			display(i);
			printf("Modify Record\n");
			accept(i);
			break;
		}
		else if(i==n)
		{
			printf("Record Not Found\n");
		}
	}
}
int delete(int s,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s1[i].rollno==s)
		{
			printf("Record Found\n");
			display(i);
			printf("Record Deleted");
			n--;
			for(;i<n;i++)
			{
				s1[i]=s1[i+1];
			}
			return n;
		}
		else if(i==n)
		{
			printf("Record Not Found\n");
		}
	}
	return n;
}
void main()
	{
		int i,n,search,ch,x=0,p;
		printf("Enter No Of Record You Want to Enter: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			accept(i);
		}
		do
		{
			printf("\n......MENU......\n1.Add Record\n2.Display\n3.Search\n4.Modify\n5.Delete\n6.Exit\nEnter any no. from 1-6\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:	printf("Enter Position for Adding new Record\n");
				scanf("%d",&p);
				p=p-1;
				n++;
				for(i=n;i>=p;i--)
				{		
					s1[i+1]=s1[i];			 		
				}	 
				 accept(p);
				 break;
				case 2:
				for(i=0;i<n;i++)
					display(i);
					break;
				case 3:
				printf("Enter Roll Number you want to Search: ");
				scanf("%d",&search);
				search1(search,n);
				break;
				case 4:
				printf("Enter Roll Number you want to Modify: ");
				scanf("%d",&search);
				modify(search,n);
				break;
				case 5:   
				printf("Enter Roll Number you want to Delete:  ");
				scanf("%d",&search);
				n=delete(search,n);
				break;
				case 6:
				x++;
				break;
				default:
				printf("\nWrong Choice Enter any no. from 1-6");
			}
		}while(x<1);
	}	
