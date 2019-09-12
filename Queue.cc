#include "Queue.h"
using namespace std;

//Constructor
Queue::Queue(vector<int>v) : queue(0){
	queue=v;
}

//Return the size of the queue
int Queue::get_size() const {
	return queue.size();
}

//Print the queue
void Queue::print() const {

	//Handle an empty queue
	if (get_size() <= 0){
		cout <<"Empty Queue!\n";
		return;
	}
	int counter = 0;
	cout<<endl;
	cout<<"--------PRINT QUEUE-------\n";
	for (int i : queue){
		cout << "Node " << counter++ <<": " << i << endl;
	}
	cout<<endl;
}

//Deletes the oldest node and returns its value
int Queue::pop() {
	int return_value = 0;

	//Handle an empty queue
	if (get_size() <=0) {
		cout <<"Empty Queue!\n";
		return 0;
	}

	//Sets grabs value to return then deletes the node
	return_value = queue.at(0);
	queue.erase(queue.begin());

	return return_value;
}

void Queue::push(int new_data) {

	//grows vector with new data
	queue.push_back(new_data);
}

void Queue::peek(){
	if (queue.empty()){
		cout<<"The Queue is empty!\n";
		return;
	}
	else {
		cout<<queue.at(0);
		return;
	}
}



























