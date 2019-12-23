/*A Book shop maintains the inventory of books that are being sold at the shop. The list includes details such as title, author, publisher, price and available stock.
Write a program in C++ which will have a class called books with suitable member functions for
i. Add
ii. Update
iii. Search a book
iv. Purchase a book (update the stock and display the total cost)
v. Record number of successful/unsuccessful transactions (use static data members to keep count of transactions)
Use new operator in constructors to allocate memory space required.*/


#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class book	{
private:
      static int transactions;            // Static Data Member
	char *author,*title,*publisher;
	float *price;
	int *stock;
public:	
	book()	{
	author= new char[20];
	title=new char[20];
	publisher=new char[20];
	price= new float;
	stock=new int;
	}
	void feeddata();
	void editdata();
	void showdata();
	int search(char[],char[]);
	void buybook();
	
     static void successfulltrans()     //static member function
	{
	    cout<<"\nNumber of successfull transactions are     \t"<<transactions;
	}
	
};

int book :: transactions;   //static data member definition

void book::feeddata()	{
	cin.ignore();
	cout<<"\nEnter Author Name: ";    cin.getline(author,20);  
	cout<<"Enter Title Name: ";       cin.getline(title,20);
	cout<<"Enter Publisher Name: ";   cin.getline(publisher,20);
	cout<<"Enter Price: ";            cin>>*price;
	cout<<"Enter Stock Position: ";   cin>>*stock;   
	
}

void book::editdata()	{
	
	cout<<"\nEnter Author Name: ";      cin.getline(author,20);
	cout<<"Enter Title Name: ";       cin.getline(title,20);
	cout<<"Enter Publisher Name: ";   cin.getline(publisher,20);
	cout<<"Enter Price: ";            cin>>*price;
	cout<<"Enter Stock Position: ";   cin>>*stock;   
	
}

void book::showdata()	{
	cout<<"\nAuthor Name: "<<author;
	cout<<"\nTitle Name: "<<title;
	cout<<"\nPublisher Name: "<<publisher;
	cout<<"\nPrice: "<<*price;
	cout<<"\nStock Position: "<<*stock;   
	
}

int book::search(char tbuy[20],char abuy[20] )	{
	if(strcmp(tbuy,title)==0 && strcmp(abuy,author)==0)
		return 1;
	else return 0;
}

void book::buybook()	{
	int count;
	cout<<"\nEnter Number Of Books to buy: ";
	cin>>count;
	if(count<=*stock)	{
		*stock=*stock-count;
		cout<<"\nBooks Bought Sucessfully";
		cout<<"\nAmount: Rs. "<<(*price)*count;
		transactions++;
	}
	else
		cout<<"\nRequired Copies not in Stock";
		
}

int main()	
{
	book *B[20];
	int i=0,r,t,choice;
	char titlebuy[20],authorbuy[20];

	while(1)	{
		cout<<"\n\n\t\tMENU"
		<<"\n1. Entry of New Book"
		<<"\n2. Buy Book"
		<<"\n3. Search For Book"
		<<"\n4. Edit Details Of Book"
		<<"\n5. Number of Successful Transactions"
		<<"\n6. Display"
		<<"\n7. Exit"
		<<"\n\nEnter your Choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:	B[i] = new book;
				B[i]->feeddata();
				i++;	
				break;
				
				
			case 2: cin.ignore();
				cout<<"\nEnter Title Of Book: "; cin.getline(titlebuy,20);
				cout<<"Enter Author Of Book: ";  cin.getline(authorbuy,20);
				for(t=0;t<i;t++)	{
					if(B[t]->search(titlebuy,authorbuy))	{
						B[t]->buybook();
						break;
					}
				}
				if(t==i)
				cout<<"\nThis Book is Not in Stock";
				
				break;

			case 3: cin.ignore();
				cout<<"\nEnter Title Of Book: ";   cin.getline(titlebuy,20);
				cout<<"Enter Author Of Book: ";  cin.getline(authorbuy,20);
				
				for(t=0;t<i;t++)	{
					if(B[t]->search(titlebuy,authorbuy))	{
						cout<<"\nBook Found Successfully";
						B[t]->showdata();
						break;
					}
				}
				if(t==i)
				cout<<"\nThis Book is Not in Stock";
				break;
			
			case 4: cin.ignore();
				cout<<"\nEnter Title Of Book: "; cin.getline(titlebuy,20);
				cout<<"Enter Author Of Book: ";  cin.getline(authorbuy,20);
				
				for(t=0;t<i;t++)	{
					if(B[t]->search(titlebuy,authorbuy))	{
						cout<<"\nBook Found Successfully";
						B[t]->editdata();
						break;
					}
				}
				if(t==i)
				cout<<"\nThis Book is Not in Stock";
				break;
			
			case 5: cin.ignore();
			        book::successfulltrans();
			        break;
		        case 6: 
			        for(int j=0;j<i;j++)
			        B[j]->showdata();
			        break;
			case 7: exit(0);
			default: cout<<"\nInvalid Choice Entered";
			
		}
	}
return 0;
}
