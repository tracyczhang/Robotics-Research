#include "VectorNumberList.h"
#include <iostream>
#include <vector>

using namespace std;


void VectorNumberList::addNumberToList(int num) {
	list.push_back(num);
}

void VectorNumberList::removeNumberFromFront() {
	list.erase(list.begin());
}

void VectorNumberList::removeNumberFromBack() {
	list.pop_back();
}

int VectorNumberList::getNumberAt(size_t index) {
	return list.at(index);
}

size_t VectorNumberList::getSizeOfList() {
	return list.size();
}

void VectorNumberList::clear() {
	list.erase(list.begin(), list.end());
}

void VectorNumberList::printNumbers() {
	for (int i = 0; i < list.size(); i++) {
		cout << list.at(i) << endl;
	}
}

void VectorNumberList::computeNextFibonacciAndInsertAtEnd() {
	addNumberToList(list.at(list.size()- 1) + list.at(list.size() - 2));
}

void VectorNumberList::computeNFibonacci(size_t n) {
	for (int i = 0; i < n; i++) {
		computeNextFibonacciAndInsertAtEnd();
	}
}

void VectorNumberList::copyListIntoMe(NumberList &numList) {
	clear();
	for (int i = 0; i < numList.getSizeOfList(); i++) {
		addNumberToList(numList.getNumberAt(i));
	}
}

void VectorNumberList::reverseList() {
	int start = list.size() - 1;
	int counter = 0;
	for (int i = start; i >= 0; i--) {
		addNumberToList(list.at(i));
		counter++;
	}
	list.erase(list.begin(), list.begin() + counter);
}
