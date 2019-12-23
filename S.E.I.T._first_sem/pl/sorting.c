#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input(char name[50][50],int n)
{   int i;
  printf("\nEnter %d names:\n",n);
				for(i=0;i<n;i++)
   				{
				scanf("%s",name[i]);
				}	
}
void display(char name[50][50],int n)
{   int i;
  for(i=0;i<n;i++)
  {
    printf(" %s\t",name[i]);
  }
     printf("\n");
}
void bubblesort(char name[50][50],int n)
{
	char temp[50];
	int i,j;
	for(i=0;i<n-1;i++)
	{
		printf("Pass %d:\n",i+1);
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(name[j],name[j+1])>0)
         { 
            strcpy(temp,name[j]);
            strcpy(name[j],name[j+1]);
            strcpy(name[j+1],temp);
         }
            display(name,n);
      	}
            printf("\n");
	}
}
void selection(char name[50][50],int n)
{
	int i,j,k;
	char temp[50];
	for(i=0;i<n-1;i++)
	{
	   k=i;
		for(j=i+1;j<n;j++)
		{  
			if(strcmp(name[k],name[j])<0)
	        	k=j;
	    }
		if(k!=i)
			{
	        	strcpy(temp,name[k]);
	        	strcpy(name[k],name[i]);
	        	strcpy(name[i],temp);
			}		    
		    	printf("Pass %d:\n",i+1);
			display(name,n);
		}
		printf("\n");
}
int binarysearch(char name[50][50],int n,char str[50]) 
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid =(low+high)/2;
		if(strcmp(str,name[mid])==0)
		{
			return mid;
		}
		else
		{
			if(strcmp(str,name[mid])<0)
			high=mid-1;
			else
			low=mid+1;
		}
	}
	return(-1);
}
int binaryr(char name[50][50],int low,int high,char str[50])
{
	int mid;
	if(low<=high)
	{
		mid=(low+high)/2;
		if(strcmp(str,name[mid])==0)
		{
			return mid;
		}
		else
		{
			if(strcmp(str,name[mid])<0)
				return(binaryr(name,low,mid-1,str));
			else
				return(binaryr(name,mid+1,high,str));
		}
	}
	return(-1);
}
void main()
{
int ch,n,i,x=0,y,choice,k,l,high,low=0,mid;
char name[50][50],str[50];
printf("Enter no of Elements :\n");
				scanf("%d",&n);
				input(name,n);
do
{
printf("\n......MENU......\n1.Bubble Sort\n2.Selection Sort\n3.Binary Search\n4.Binary Search(Recursion)\n5.Exit\nEnter any no. from 1-6\n");
scanf("%d",&ch);
switch(ch)
{
    case 1 :	
				printf("\n--BUBBLE SORT--\n");
				printf("\nBefore Sorting:\n");
				display(name,n);
                bubblesort(name,n);
                printf("\nAfter Sorting(Ascending Order):\n");
                display(name,n);
        		break;
    case 2 : 	
				printf("\n--SELECTION SORT--\n");
				printf("\nBefore Sorting:\n");
				display(name,n);
				selection(name,n);
                printf("\nAfter Sorting(Decending Order):\n");
                display(name,n);
                break;
    case 3 :
				display(name,n);
				printf("\nEnter the string to Search:");
						scanf("%s",str);
							k=binarysearch(name,n,str);
							if(k!=-1)
							{
								printf("\nString :'%s'\nFound at location : %d",name[k],k+1);
							}
							else
							{
								printf("\nString not Found... ");
							}
							
                break; 
    case 4 :
				bubblesort(name,n);
				display(name,n);
				printf("\nEnter the string to Search:");
						scanf("%s",str);
							high=n-1;
							l=binaryr(name,low,high,str);
							if(l!=-1)
							{
								printf("\nString :'%s'\nFound at location : %d",name[l],l+1);					
							}
							else
							{
								printf("\nString not Found... ");
							}
            	break ;
    case 5 : x++;  
				break;   
	default : printf("\n Enter any no. from 1-5 \n");      
}
}while(x<1);
}
