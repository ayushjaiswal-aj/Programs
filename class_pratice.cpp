#include<iostream>
using namespace std;
class person{
	char name[20];
	int age;
	public:
		void getdata();
		void displaydata();
	};
void person :: getdata(){
	cout << "\nenter your name";
	cin >> name;
	cout << "\nenter age";
	cin >> age;
	}
void person :: displaydata(){
	cout << "\nName - " << name;
	cout << "\nage - " << age;
	}
int main(){
	person p;
	p.getdata();
	p.displaydata();
	return 0;
	}
