#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
Node *front=NULL;
Node *rear=NULL;

void enqueue(int x){
	Node *temp=new Node;
	temp->data=x;
	temp->next=NULL;
	
	if(front==NULL && rear==NULL){
		front=rear=temp;
		return;
	}
	rear->next=temp;
	rear=temp;
}

void dequeue(){
	Node *temp=front;
	if(front==NULL) return;
	
	if(front==rear)	front=rear=NULL;
	else
		front=front->next;
	free(temp);
}

void print(){
	if(front==NULL && rear==NULL) return;
	Node *temp=front;
	cout<<"Queue is:";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	enqueue(1); print();
	enqueue(2); print();
	dequeue(); print();
	return 0;
}
