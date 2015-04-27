#include <iostream>
#include "array.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Queue q;
	q.append(100);
	q.append(200);
	q.append(300);

	Iterator it1 = q.createIterator();
	while(true){
		try{
			cout << it1.next() << '\t';
		} catch ( char const * errmsg){
			cout << '\n';
			break;
		}
	}
	Iterator it2 = q.createIterator();
	while(true){
		try{
			cout << it2.next() << '\t';
		} catch ( char const * errmsg){
			cout << '\n';
			break;
		}
	}
	return 0;
}