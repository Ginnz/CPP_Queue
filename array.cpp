#include "array.h"

Queue::Queue(){
	q_size = DEFAULT_SIZE;
	index = 0;
	position = 0;
	data = new int[q_size];
}

Queue::~Queue(){
}

void Queue::append(int value){
	if(index >= q_size){
		throw "Queue is full";
	}
	data[index++] = value;
}

Iterator Queue::createIterator(){
	return Iterator(*this);
}

int Queue::get(){
	if(position > index){
		throw "Queue is empty.";
	}
	return data[position++];
}

Iterator::Iterator(Queue & q){
	_queue = q;
	pos = 0;
}

Iterator::~Iterator(){
}

int Iterator::next(){
	if(pos >= _queue.index){
		throw "Iteration finished.";
	}
	return _queue.data[pos++];
}