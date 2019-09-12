#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Queue{
	private:
		vector <int> queue;

	public:
		Queue(vector<int>v);
		void print() const;
		int get_size() const;
		int pop();
		void push(int new_data);
		void peek();
};
