/*Write a program in C++ using function/class template to read two matrices of different data
types such as integers and floating point values and perform simple arithmetic operations
on these matrices separately and display it.*/
#include <iostream>
using namespace std;
template <class T>
void inputmatrix(T m[20][20],int r,int c)
{
	int i,j;
	cout<<"\nEnter elements of the matrix:\n";
	for(i=0;i<r;i++)
	   {
	    for(j=0;j<c;j++)
	       {
	       	    cin>>m[i][j];
	       }
	  }
}
template <class T>
void display(T a[20][20],int r,int c)
{
	int i,j;
	cout<<endl;
	for(i=0;i<r;i++)
	   {
	    for(j=0;j<c;j++)
	       {
	       	    cout<<a[i][j]<<"\t";
	       }
	    cout<<endl;
	  }
}
template <class T>
void add(T a[20][20],T b[20][20],T R[20][20],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	   {
	    for(j=0;j<c;j++)
	       {
	           R[i][j]=a[i][j]+b[i][j];
	       }
	   }
}
template <class T>
void subtract(T a[20][20],T b[20][20],T R[20][20],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	   {
	    for(j=0;j<c;j++)
	       {
	           R[i][j]=a[i][j]-b[i][j];
	       }
	   }
}
template <class T>
void transpose(T a[20][20],T R[20][20],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	   {
	    for(j=0;j<c;j++)
	       {
	           R[j][i]=a[i][j];
	       }
	   }
}
template <class T>
void multiply(T a[20][20],T b[20][20],T R[20][20],int r1,int c2,int c1)
{
	int i,j,k;
	for(i=0;i<r1;i++)
	   {
	    for(j=0;j<c2;j++)
	       {
	          R[i][j]=0;
	          for(k=0;k<c1;k++)
	             {
			R[i][j]+=(a[i][k]*b[k][j]);
	             }
	       }
	   }
}
int main()
{
	int a[20][20],b[20][20],c[20][20],r1,c1,r2,c2,r3,c3,r4,c4,ch=1;
	float d[20][20],e[20][20],f[20][20];
	cout<<"\nEnter number of rows and columns for integer matrix 1: ";
	cin>>r1>>c1;
	inputmatrix(a,r1,c1);
	cout<<"\nInteger matrix 1:";
	display(a,r1,c1);
	cout<<"\nEnter number of rows and columns for integer matrix 2: ";
	cin>>r2>>c2;
	inputmatrix(b,r2,c2);
	cout<<"\nInteger matrix 2:";
	display(b,r2,c2);
	cout<<"\nEnter number of rows and columns for float matrix 1: ";
	cin>>r3>>c3;
	inputmatrix(d,r3,c3);
	cout<<"\nFloat matrix 1:";
	display(d,r3,c3);	
	cout<<"\nEnter number of rows and columns for float matrix 2: ";
	cin>>r4>>c4;
	inputmatrix(e,r4,c4);
	cout<<"\nFloat matrix 2:";
	display(e,r4,c4);
	while(ch!=5)
	{
		cout<<"\nMenu\n1. Addition\n2. Subtraction\n3. Transpose\n4. Multiply\n5. Exit\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				if(r1==r2 && c1==c2)
				   {
				    cout<<"\nAddition of Integer matrices is:\n";
				    add(a,b,c,r1,c1);
				    display(c,r1,c1);
	                           }
				else
				    cout<<"\nAddition of integer matrices is not possible";
				if(r3==r4 && c3==c4)
		         	   {
				    cout<<"\nAddition of Float matrices is:\n";
				    add(d,e,f,r3,c3);
				    display(f,r3,c3);
		         	   }
				else
				    cout<<"\nAddition of float matrices is not possible";
					
				break;
			case 2:
				if(r1==r2 && c1==c2)
				   {
				    cout<<"\nSubtraction of Integer matrices is:\n";
				    subtract(a,b,c,r1,c1);
				    display(c,r1,c1);
			           }
				else
				    cout<<"\nSubtraction of integer matrices is not possible";
				if(r3==r4 && c3==c4)
				   {
				    cout<<"\nSubtraction of Float matrices is:\n";
				    subtract(d,e,f,r3,c3);
				    display(f,r3,c3);
				   }
				else
				    cout<<"\nSubtraction of float matrices is not possible";
				break;
			case 3:
				cout<<"\nTranspose of integer matrix 1:\n";
				transpose(a,c,r1,c1);
				display(c,c1,r1);
				cout<<"\nTranspose of integer matrix 2:\n";
				transpose(b,c,r2,c2);
				display(c,c2,r2);
				cout<<"\nTranspose of float matrix 1:\n";
				transpose(d,f,r3,c3);
				display(f,c3,r3);
				cout<<"\nTranspose of float matrix 2:\n";
				transpose(e,f,r4,c4);
				display(f,c4,r4);
				break;
			case 4:
					
			       if(r2==c1)
			         {
				    cout<<"\nMultiplication of Integer matrices is:\n";
				    multiply(a,b,c,r1,c2,c1);
				    display(c,r1,c2);
				 }
				else
				    cout<<"\nMultiplication of integer matrices is not possible";
     	                       if(r4==c3)
			         {
				    cout<<"\nMultiplication of Float matrices is:\n";
				    multiply(d,e,f,r3,c4,c3);
				    display(f,r3,c4);
				 }
			       else
				    cout<<"\nMultiplication of float matrices is not possible";			       								
				break;	
			case 5:
				break;
			default:
				cout<<"\nSorry!!!!We didn't get your choice.....\n";							
	    }
    }
    	
	return 0;
}
