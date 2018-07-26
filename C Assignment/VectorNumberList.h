#ifndef VECTOR_NUMBER_LIST_H
#define VECTOR_NUMBER_LIST_H

#include "NumberList.h"
#include <vector>

class VectorNumberList : public NumberList {
public:

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

	vector<int> list;

};

#endif
