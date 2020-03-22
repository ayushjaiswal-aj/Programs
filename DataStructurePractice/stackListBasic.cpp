#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *link;
};

class Stack{
	public:
		struct Node *root = NULL;
		void pushNode(int x){
			struct Node *newNode = new Node;
			newNode->data = x;
			newNode->link = root;
			root = newNode;
		}
		void pop(){
			struct Node *temp = new Node;
			temp = root;
			root = root->link;
			delete temp;
		}
		void display (){
			if (root == NULL){
				cout <<"Empty stack"<< endl;
			}
			else {
				struct Node *p = new Node;
				p = root;
				while (p != NULL){
					cout << p->data << "\t";
					p = p->link;
				}
			}
			cout << endl;
		}
};			
			
int main(){
	class Stack s;
	s.pushNode (5);
	s.pushNode (6);
	s.pushNode (7);
	s.pushNode (8);
	s.pop ();
	s.display ();

}
