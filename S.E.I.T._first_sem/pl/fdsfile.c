#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
  int rno;
  char name[100];
  float marks;
};
void Create(char fname[100])    //Function Definition
{
  FILE *fp;
  struct student S;
  char choice='y';
  fp=fopen(fname,"wb");
  if(fp==NULL)
  {
     printf("\nCan't open the file");
     exit(0);
  }
 do
 {
    printf("\nEnter Roll Number : ");
	scanf("%d",&S.rno);
	printf("Enter Name : ");
	scanf("%s",S.name);
	printf("Enter Percentage : ");
	scanf("%f",&S.marks);
     fwrite(&S,sizeof(S),1,fp);
     printf("\nContinue Y/N:");
     fflush(stdin);
     scanf("%c",&choice);
 }
 while(choice=='Y'||choice=='y');
 fclose(fp);
 }
void Insert(char fname[100])		//Function Definition
{
  FILE *fp;
  struct student S;
  char choice='Y';
  fp=fopen(fname,"ab");
  if(fp==NULL)
  {
     printf("\nCan't open the file");
     exit(0);
  }
 do
 {
      printf("\nEnter Roll Number : ");
	scanf("%d",&S.rno);
	printf("Enter Name : ");
	scanf("%s",S.name);
	printf("Enter Percentage : ");
	scanf("%f",&S.marks);
     fwrite(&S,sizeof(S),1,fp);
     printf("\nContinue Y/N:");
     fflush(stdin);
     scanf("%c",&choice);
 }
 while(choice=='Y'||choice=='y');
 fclose(fp);
}
void Display(char fname[100])		//Function Definition
{
  FILE *fp;
  struct student S;
  char choice='Y';
  fp=fopen(fname,"rb");
  if(fp==NULL)
  {
     printf("\nCan't open the file");
     exit(0);
  }
  printf("\n\t rno,name,percentage:");
  while(fread(&S,sizeof(S),1,fp))
  {
  printf("\n%d\t%s\t%.2f",S.rno,S.name,S.marks);
  }
  fclose(fp);
}
int search(char fname[100],int rno)		//Function Definition
{
  FILE *fp;
  struct student S;
  char choice='Y';
  fp=fopen(fname,"rb");
  if(fp==NULL)
	 {
    	 printf("\nCan't open the file");
     	 exit(0);
 	 }
 while(fread(&S,sizeof(S),1,fp))
 {
 	if(S.rno==rno)
 	{
 	  printf(" \t%d\t %s \t%.2f",S.rno,S.name,S.marks);
 	  fclose(fp);
 	  return (1);
 	}
 }
 while(choice=='Y'||choice=='y')
 {
 	printf("\nContinue Y/N:");
      fflush(stdin);
       scanf("%c",&choice);
 }
 fclose(fp);
 return 0;
}
int Delete(char fname[100],int rno)		//Function Definition
{
  FILE *fs,*ft;
  struct student S;
  char choice='Y';
  fs=fopen(fname,"rb");
  ft=fopen("temp.dat","wb");
  if(fs==NULL)
 {
     printf("\nCan't open the file");
     exit(0);
 }
 if(ft==NULL)
	{
		printf("\nCan't open the file");
		exit(0);
	}
	while(fread(&S,sizeof(S),1,fs))
	{
		if(S.rno!=rno)
		{
			fwrite(&S,sizeof(S),1,ft);		
		}
	}
	fclose(fs);
	fclose(ft);
	remove(fname);
	rename("temp.dat",fname);
	printf("\n Yours data has been deleted succesfully.");
}
int modify(char fname[100],int rno)		//Function Definition
{
  FILE *fs,*ft;
  struct student S;
  char choice='Y';
  fs=fopen(fname,"rb");
  ft=fopen("temp.dat","ab");
  if(fs==NULL)
 {
     printf("\nCan't open the file");
     exit(0);
 }
 if(ft==NULL)
	{
		printf("\nCan't open the file");
		exit(0);
	}
	while(fread(&S,sizeof(S),1,fs))
	{
		if(S.rno!=rno)
		{
			fwrite(&S,sizeof(S),1,ft);		
		}
		if(S.rno==rno)
		{
			printf("\nEnter name,percentage:");
			scanf("%s%f",S.name,&S.marks);
			//getch();
			fwrite(&S,sizeof(S),1,ft);
		}
		
	}
	fclose(fs);
	fclose(ft);
	remove(fname);
	rename("temp.dat",fname);
	printf("\n Yours data has modified succesfully.");
}
int main()
{
  char fname[100];
  FILE *fp;
  int choice,rno,flag,rollno,x=0;
  printf("Enter the file name:");
  scanf("%s",fname);
  do
  {
  	printf("\n ----MENU----");
  	printf("\n1.To create the file \n2.Insert the data in file\n3.Display data of file\n4.Search the record\n5.Delete the record\n6.Modify the record\n7.Exit\nEnter your choice:");
  	scanf("%d",&choice);

  switch(choice)
  {
    case 1:
    		Create(fname);
    		break;
    case 2:
    		Insert(fname);
    		break;
    case 3:
    		Display(fname);
    		break;
    case 4:
    		printf("\nEnter roll no. to search:");
    		scanf("%d",&rno);
    		flag=search(fname,rno);
    		if(flag==1)
    		printf("\nSearch roll no. is found:%d",rno);
    		else
    		printf("\nroll no. is not found");
			break;
    case 5: printf("\nEnter roll no. to delete:");
    		scanf("%d",&rno);
    		flag=Delete(fname,rno);
    		if(flag==1)
    		{
				printf("\nSearch roll no. will be deleted of roll no. >%d:",rno);
				printf("\nRecord deleted succesfully of roll no. >%d",rno);
				flag=1;
			}
    		if(flag==0)
    		{
    			printf("\nSearch rno will not be deleted");
			}
    		break;
    case 6:printf("\nEnter rno. to modify:");
    		scanf("%d",&rno);
    		flag=modify(fname,rno);
    		if(flag==1)
    		{
				printf("\nModified%d:",rno);
				printf("\n\tmodified succefully of no:-%d",rno);
				exit(0);
			}
    	  if(flag==0)
    		{
    			printf("\nSearch will not be modified");
			}
    		break;
    case 7:printf("\nProgram is ending.........");
    		x++;
    		break;
    default:printf("\nEntered choice is invalid");
   }
  }while(x<1);
 }
