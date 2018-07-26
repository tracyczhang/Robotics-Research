#ifndef ARRAY_NUMBER_LIST_H
#define ARRAY_NUMBER_LIST_H

#include "NumberList.h"
#include <iostream>

class ArrayNumberList : public NumberList {
public:
	ArrayNumberList();

	void addNumberToList(int num);
	void removeNumberFromFront();
	void removeNumberFromBack();
	int getNumberAt(size_t index);
	size_t getSizeOfList();
	void clear();
	void printNumbers();
	void computeNextFibonacciAndInsertAtEnd();
	void computeNFibonacci(size_t n);
	void copyListIntoMe(NumberList &numList);
	void reverseList();
	
protected:

	int* con;
	int size;
	int cap;

};

#endif
