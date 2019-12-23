#include<iostream>
using namespace std;
class personal
{
public:
	char nm[10];
	char dob[10];
};
class academic:virtual public personal
{
public:
	char qual[10];
	char grade[10];
};
class professional:virtual public personal
{
public:
	int salary;
	char cmpnm[10];
	char post[10];
};
class biodata:public academic,public professional
{
public:
	void accept();
	void display();
};
void biodata::accept()
{
	cout<<"\nenter data(Name,dob,qual,grade,cmpnm,post,salary)";
	cin>>nm>>dob>>qual>>grade>>cmpnm>>post>>salary;
}

void biodata::display()
{
	cout<<"\nName=>"<<nm;
	cout<<"\nDOB=>"<<dob;
	cout<<"\nQual=>"<<qual;
	cout<<"\nGrade=>"<<grade;
	cout<<"\nCmpnm=>"<<cmpnm;
	cout<<"\nPost=>"<<post;
	cout<<"\nSalary=>"<<salary;
}

int main()
{
biodata b;
b.accept();
cout<<"\nBio Data=";
b.display();
}
