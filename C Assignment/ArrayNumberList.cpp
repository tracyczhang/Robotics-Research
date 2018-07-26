#include "ArrayNumberList.h"
#include <iostream>

using namespace std;

ArrayNumberList::ArrayNumberList() {	
	cap = 10;
	con = new int[cap];
	size = 0;
}

void ArrayNumberList::addNumberToList(int num) {
	int* temp;
	if (size >= cap) {
		temp = new int[cap * 2];
		for (int i = 0; i < cap; i++) {
			temp[i] = con[i];
		}
		cap *= 2;
		delete [] con;
		con = temp;
	}
	con[size] = num;
	size++;
}

void ArrayNumberList::removeNumberFromFront() {
	for (int i = 0; i < size; i++) {
		con[i] = con[i + 1];
	}
	size--;
}

void ArrayNumberList::removeNumberFromBack() {
	size--;
}

int ArrayNumberList::getNumberAt(size_t index) {
	return con[index];
}

size_t ArrayNumberList::getSizeOfList() {
	return size;
}

void ArrayNumberList::clear() {
	size = 0;
}

void ArrayNumberList::printNumbers() {
	for (int i = 0; i < size; i++) {
		cout << con[i] << endl;
	}
}

void ArrayNumberList::computeNextFibonacciAndInsertAtEnd() {
	addNumberToList(con[size - 1] + con[size - 2]);
}

void ArrayNumberList::computeNFibonacci(size_t n) {
	for (int i = 0; i < n; i++) {
		computeNextFibonacciAndInsertAtEnd();
	}
}

void ArrayNumberList::copyListIntoMe(NumberList &numList) {
	clear();
	for (int i = 0; i < numList.getSizeOfList(); i++) {
		addNumberToList(numList.getNumberAt(i));
	}
}

void ArrayNumberList::reverseList() {
	int start = size - 1;
	int counter = 0;
	for (int i = start; i >= 0; i--) {
		addNumberToList(con[i]);
		counter++;
	}
	for (int i = 0; i < counter; i++) {
		removeNumberFromFront();
	}
}
