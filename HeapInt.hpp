#ifndef HEAPINT_H
#define HEAPINT_H

#include <iostream>

using namespace std;

class HeapInt {

public:

	int* num;

	HeapInt();
	HeapInt(int x);
	HeapInt(const HeapInt& x);
	~HeapInt();
	HeapInt& operator = (int x);
	HeapInt& operator = (const HeapInt& obj);
	HeapInt operator + (const HeapInt& obj);
	HeapInt operator - (const HeapInt& obj);
	bool operator == (const HeapInt& obj);
	friend istream& operator >> (istream& input, HeapInt& obj);
	friend ostream& operator << (ostream& output, HeapInt& obj);
};
#endif