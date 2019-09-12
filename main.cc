#include <iostream>
#include "Queue.h"
#include <cstdlib>
using namespace std;

int main(){
	srand(time(NULL));  //seed rand
	vector<int>queue;
	Queue myqueue(queue); //create object from class
	cout<<endl;
	cout<<"---------------\n";
	cout<<"Testing an empty Queue\n";
	cout<<"---------------\n\n";
	cout<<"Trying to pop off of an empty Queue: ";
	myqueue.pop();
	cout<<endl;
	cout<<"---------------\n";
	cout<<"Test printing a Queue\n";
	cout<<"---------------\n\n";
	for (int i = 0; i < 10; i++){
		myqueue.push(i);
		cout<<"Pushing: "<< i <<" on to the Queue\n";
	}
	myqueue.print();
	cout<<endl;
	cout<<"---------------\n";
	cout<<"Test popping off a Queue\n";
	cout<<"---------------\n\n";
	for (int i = 0; i < 10; i++){
		cout<<"Popping: ";
		myqueue.peek();
		cout<<" off of the Queue\n";
		myqueue.pop();
	}
	cout<<endl;
	cout<<"---------------\n";
	cout<<"Test multiple pushes and pops in a Queue\n";
	cout<<"---------------\n\n";
	for (int i = 0; i < 10; i++){
		int random_number = rand() % 100;
		myqueue.push(random_number);
		cout<<"Pushing: "<< random_number <<" on to the Queue\n";
	}
	myqueue.print();
	for (int i = 0; i < 5; i++){
		cout<<"Popping: ";
		myqueue.peek();
		cout<<" off of the Queue\n";
		myqueue.pop();
	}
	myqueue.print();
	for (int i = 0; i < 10; i++){
		int random_number = rand() % 100;
		myqueue.push(random_number);
		cout<<"Pushing: "<< random_number <<" on to the Queue\n";
	}
	myqueue.print();
	for (int i = 0; i < 15; i++){
		cout<<"Popping: ";
		myqueue.peek();
		cout<<" off of the Queue\n";
		myqueue.pop();
	}
	cout<<"Popping off of an empty Queue\n";
	myqueue.pop();
	cout<<"\n\nThe End...\n";



}
