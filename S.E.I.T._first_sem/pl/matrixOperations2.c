/*
	NAME: AYUSH JAISWLA            ROLL NO. 43
	DIV: 1
	SUBJECT: PROGRAMMING LANGUAGE
	ASSIGNMENT 2:
	AIM: 
		REPRESENT MATRIX USING TWO DIMENTIONAL ARRAYS AND PERFORM FOLLING OPERATIONS WITH AND WITHOUT POINTER.
		1. ADDTION
		2. MULTIICATION
		3. TRANSPOSE
		4. SADDLE POINT
*/
#include<stdio.h>
#include<stdlib.h>
int size(int *r,int *c)
{
	printf("Enter No of Row: ");
	scanf("%d",r);
	printf("Enter No of Column:");
	scanf("%d",c);
	if ((*r<0||*c<0)||(*r>5||*c>5))
	{
		printf("\nInvalid Size Enter Again\n");
		size(r,c);
	}
	else
		return 0;
}

void p_accept(int *a,int r,int c)
{
	int i,j;
	printf("\nEnter Elements of Matrix:\n");
	for(i=0;i<r;i++)
	{	for(j=0;j<c;j++)
		{
			printf("Element[%d][%d]= ",i+1,j+1);
			scanf("%d",(a+(i*c)+j));
		}
	}
}

void p_display(int *a,int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d\t",*(a+(i*c)+j));
		}
		printf("\n");
		}
}

void p_add(int *a,int *b,int r,int c)
{
	int i,j;
	printf("\nAddition M1+M2: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("  %d\t",*(a+(i*c)+j)+*(b+(i*c)+j));
		}
		printf("\n");
	}
}

void p_transpose(int *a,int r,int c)
{
	int i,j;
	printf("\n");
	for(i=0;i<c;i++)
	{
		for (j=0;j<r;j++)
		{
			printf("  %d\t",*(a+(j*c)+i));
		}
		printf("\n");
	}
}

void p_mult(int *a,int *b,int *m,int r,int c,int d)
{
	int i,j,k,l;
	printf("\nMultiplication is:\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			l=0;
			for(k=0;k<d;k++)
			{
				l=l+(*(a+i*c+k))*(*(b+k*c+j));
			}
			*(m+(i*c)+j)=l;
		}
	}
}

void p_saddle(int *a,int r,int c)
{
	int i,j,k,l;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			l=0;
			for(k=0;k<c;k++)
			{
				if( (*(a+(i*c)+j)<=*(a+(i*c)+k)) && (*(a+(i*c)+j)>=*(a+(k*c)+j)) )
				{
					l++;
				}
			}
			if(l==r)
			{
				printf("\nSaddle point is %d",*(a+(i*c)+j));
				printf("\nAt Location: %d %d",i+1,j+1);
				k=0;
				break;
			}
		}
		if(l==r)
		break;
	}
	if(k!=0)
	printf("\nNO SADDLE POINT IN GIVEN MATRIX");
}

int main()
{
	int i,j;
	int m1[5][5],m2[5][5],m3[5][5],*p1,*p2,*p3,row1,col1,row2,col2;
	int choice,pointer,k;
	printf("\nMATRIX 1\n");
	size(&row1,&col1);
	p1=(int *)malloc(sizeof(int)*row1*col1);
	p_accept(p1,row1,col1);
	printf("\nMATRIX 2\n");
	size(&row2,&col2);
	p2=(int *)malloc(sizeof(int)*row2*col2);
	p_accept(p2,row2,col2);
	printf("\nMatrix 1:\n");
	p_display(p1,row1,col1);
	printf("\nMatrix 2:\n");
	p_display(p2,row2,col2);
	do
	{
		printf("\nMENU");
		printf("\n1:Add\n2:Transpose\n3:Multiplication\n4:SaddlePoint\n5:EXIT\n");
		printf("Enter Choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			if (row1==row2&&col1==col2)
			p_add(p1,p2,row1,col1);
			else
			printf("\nAddition can't be performed on given Matrices");
			break;
		case 2:
			do
			{
			printf("\nEnter 1.Transpose M1 \n      2.Transpose M2\n      3.Exit: ");
			scanf("%d",&k);
			if (k==1)
			{
				printf("Transpose M1 ");
				p_transpose(p1,row1,col1);
			}
			else if(k==2)
			{
				printf("Transpose M2 ");
				p_transpose(p2,row2,col2);
			}
			}while(k<3);
			break;
		case 3:
			do
			{
			printf("\nEnter 1.M1*M2 \n      2.M2*M1\n      3.Exit: ");
			scanf("%d",&k);
			if (k==1)
			{
				if (col1==row2)
				{
					p3=(int *)malloc(sizeof(int)*row1*col2);
					p_mult(p1,p2,p3,row1,col2,row2);
					p_display(p3,row1,col2);
				}
				else
				printf("\nMultiplication can't be performed on given matrices ");
			}
			else if(k==2)
			{
				if (col2==row1)
				{
					p3=(int *)malloc(sizeof(int)*row2*col1);
					p_mult(p2,p1,p3,row2,col1,row1);
					p_display(p3,row2,col1);
				}
				else
				printf("\nMultipliction can't be performed on given matrices ");
			}
			}while(k<3);
			break;
		case 4:
			printf("\nMatrix1 :");
			if(row1==col1)
			p_saddle(p1,row1,col1);
			else
			printf("\nInvalid Condition For Finding Saddle Point");

			printf("\nMatrix2 :");
			if(row2==col2)
			p_saddle(p2,row2,col2);
			else
			printf("\nInvalid Condition For Finding Saddle Point");

			printf("\n");
			break;
		}
	}while(choice<5);

	return 0;
}


