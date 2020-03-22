#include<iostream>

using namespace std;

struct node{
	int data;
	struct node *link;
};  
class linkList{ 
	public:
	node *createHead(int x){
		struct node *head = new node;
		head->data = x;
		head->link = NULL;
		cout << "head: " << head->data << endl;
		return head;
	}
	
	void  *pushNode(struct node **head, int x){
		struct node *newNode = new node;
		newNode->data = x;
		newNode->link = *head;
		*head = newNode;
	}
	void display(struct node **head){
		struct node *p = new node;
		p = *head;
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
	}
};

int main(){
	class linkList l;
	struct node *head = new node;
	head = l.createHead(5);
	l.pushNode(&head, 6);
	l.pushNode(&head, 7);
	l.pushNode(&head, 8);
	l.display(&head);
}	 	
		
