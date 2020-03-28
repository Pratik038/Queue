#include<iostream>
using namespace std;
#define MAX 10
int A[MAX];
int front=-1;
int rear=-1;

bool isEmpty(){
	return (front==-1 && rear==-1);
}

void enqueue(int x){
	if((rear+1)%MAX == front) return;
	
	else if(isEmpty()) front=rear=0;
	
	else rear=(rear+1)%MAX;
	
	A[rear]=x;
}

void dequeue(){
	if(isEmpty()) return;
	
	else if(front==rear) front=rear=-1;
	
	else front=(front+1)%MAX;
}
void print()
	{
		// Finding number of elements in queue  
		int count = (rear+MAX-front)%MAX + 1;
		cout<<"Queue       : ";
		for(int i = 0; i <count; i++)
		{
			int index = (front+i) % MAX; // Index of element while travesing circularly from front
			cout<<A[index]<<" ";
		}
		cout<<"\n\n";
	}
int main(){
	enqueue(1);
	print();
	enqueue(2); print();
	enqueue(3); print();
	enqueue(4); print();
	enqueue(5); print();
	enqueue(6); print();
	dequeue(); print();
	dequeue(); print();
	dequeue(); print();
	enqueue(7); print();
	enqueue(8); print();
	enqueue(9); print();
	enqueue(10); print();
	enqueue(11); print();
	
	return 0;
}
