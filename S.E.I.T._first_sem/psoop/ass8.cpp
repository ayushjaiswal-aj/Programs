#include<iostream>
#include<fstream>
using namespace std;
class student
{
 	char name[20];
 	public:
 	int roll;
 	void getdata()
 	{
 		cout<<"\nRoll No.:";
 		cin>>roll;
 		cout<<"Enter Name:";
 		cin>>name;
 	}
 	void putdata()
 	{
 		cout<<roll<<" \t\t "<<name<<endl;
 	}
};
class seq
{
	public:
	void create(int n)
	{
		fstream fp("Student.txt",ios::out);
		student s;
		for(int i=0;i<n;i++)
		{
			s.getdata();
			fp.write((char *)&s,sizeof(s));
		}	
		fp.close();
	}
	void display()
	{
		ifstream fp("Student.txt");
		student s;
		fp.read((char *)&s,sizeof(s));
		while(!fp.eof())
		{
			s.putdata();
			fp.read((char *)&s,sizeof(s));
		}	
		fp.close();
	}
	void add()
	{
		fstream fp("Student.txt",ios::out|ios::app);
		student s;
		s.getdata();
		fp.write((char *) &s,sizeof(s));
		fp.close();
	}
	void delete1(int rollno)
	{
		ifstream fpo("Student.txt");
		ofstream temp("Temp.txt");
		student s;
		int flag=0;
		fpo.read((char *)&s,sizeof(s));
		while(!fpo.eof())
		{
			
			if(rollno==s.roll)
			{
				cout<<"\nThe Data is Deleted!\n";
				flag=1;
			}
			else
			{
				temp.write((char *)&s,sizeof(s));
			}
			fpo.read((char *)&s,sizeof(s));
		}
		if(flag==0)
			cout<<"\nData Not Found!";
		fpo.close();
		temp.close();
		remove("Student.txt");
		rename("Temp.txt","Student.txt");	
	}
	void modify(int rollno)
	{
		ifstream fpo("Student.txt");
		ofstream temp("Temp.txt");
		student s;
		int flag=0;
		fpo.read((char *)&s,sizeof(s));
		while(!fpo.eof())
		{
			
			if(rollno==s.roll)
			{
				cout<<"\nEnter the modified data:";
				s.getdata();
				flag=1;
			}
			temp.write((char *)&s,sizeof(s));
			fpo.read((char *)&s,sizeof(s));
		}
		if(flag==0)
			cout<<"\nData Not Found!";
		fpo.close();
		temp.close();
		remove("Student.txt");
		rename("Temp.txt","Student.txt");	
	}
};
int main()
{
	seq a;
	int n,rollno,ch;
	cout<<"\nEnter the number of records you want to enter:";
	cin>>n;
	do
	{
		cout<<"\nChoose from the following options:\n1.Create Database\n2.Display Database\n3.Add a Record\n4.Delete a Record\n5.Modify a Record\n6.Exit";
		cout<<"\nEnter your option:";
		cin>>ch;
		switch(ch)
		{
			case 1:	a.create(n);
					break;
			case 2:	cout<<"Roll No \t Name\n";
					cout<<"=====================\n";
					a.display();
					break;
			case 3:	a.add();
					break;
			case 4:	cout<<"\nEnter the roll no you want to delete:";
					cin>>rollno;
					a.delete1(rollno);
					break;
			case 5:	cout<<"\nEnter the roll no you want to modify:";
					cin>>rollno;
					a.modify(rollno);
					break;
			case 6:	break;
			default:cout<<"\nEnter a valid option!\n";												
		}
	}while(ch!=6);
	cout<<"\nTHANK YOU\n";
	return 0;
}
