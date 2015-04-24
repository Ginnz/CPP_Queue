#ifndef ARRAY_H
#define ARRAY_H value
#define DEFAULT_SIZE 16

class Iterator;
class Queue
{
public:
	friend class Iterator;
	Queue();
	~Queue();
	void append(int value);
	Iterator createIterator();
	int get();
private:
	int *data;
	int q_size;
	int index;
	int position;
	/* data */
};

class Iterator
{
public:
	Iterator(Queue & q);
	~Iterator();
	int next();
private:
	Queue _queue;
	int pos;
	/* data */
};
#endif