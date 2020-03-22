#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *link;
};  
class LinkList{
	public:
	struct node *head = new node;
	void createHead(int x){
		head->data = x;
		head->link = NULL;
	}	
	void  pushNode( int x){
		struct node *newNode = new node;
		newNode->data = x;
		newNode->link = head;
		head = newNode;
	}
	void display(){
		struct node *p = new node;
		p = head;
		if (head != NULL){
			cout << "head -> ";
			while (p != NULL){
				cout << p->data << "\t";
				p = p->link;
			}
		}
		else {
			cout <<"list is empty\n";
		}
		cout<<endl;
	}
};
int main(){
	class LinkList l;
	struct node *head = new node;
	l.createHead(5);
	l.pushNode(6);
	l.pushNode(7);
	l.pushNode(8);
	l.display();
}	 	
		
