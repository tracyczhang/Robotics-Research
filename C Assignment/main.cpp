#include "VectorNumberList.h"
#include "ArrayNumberList.h"
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char **argv) {

	// VectorNumberList class tests
	VectorNumberList v;
	cout << "TESTING: VectorNumberList" << endl;
	
	// testing addNumberToList
	for (int i = 1; i <= 15; i++) {
		v.addNumberToList(i);
	}
	cout << "EXPECTED: #s 1 to 15 to be printed out, one per line" << endl;
	cout << "ACTUAL:" << endl;
	v.printNumbers();
	
	// testing removeFromFront
	v.removeNumberFromFront();
	cout << "EXPECTED: #s 2 to 15 to be printed out, one per line" << endl;
	cout << "ACTUAL:" << endl;
	v.printNumbers();

	// testing removeFromBack
	v.removeNumberFromBack();
	cout << "EXPECTED: #s 2 to 14 to be printed out, one per line" << endl;
	cout << "ACTUAL:" << endl;
	v.printNumbers();

	// testing getNumberAt
	int answer = v.getNumberAt(1);
	cout << "EXPECTED: getNumberAt(1) returns 3" << endl;
	cout << "ACTUAL:" << endl;
	cout << answer << endl;

	// testing getSizeOfList
	answer = v.getSizeOfList();
	cout << "EXPECTED: getSizeOfList() returns 13" << endl;
	cout << "ACTUAL:" << endl;
	cout << answer << endl;

	// testing computeNextFibonacciAndInsertAtEnd
	v.computeNextFibonacciAndInsertAtEnd();
	cout << "EXPECTED: end fibonacci # will be 27" << endl;
	cout << "ACTUAL:" << endl;
	v.printNumbers();
	
	// testing computeNFibonacci
	v.computeNFibonacci(3);
	cout << "EXPECTED: end 3 fibonacci #s will be 41, 68, 109" << endl;
	cout << "ACTUAL:" << endl;
	v.printNumbers();

	// testing copyListIntoMe
	VectorNumberList w;
	w.addNumberToList(3);
	w.addNumberToList(6);
	w.addNumberToList(8);
	w.addNumberToList(6);
	cout << "List to be copied is 3, 6, 8, 6" << endl;
	v.copyListIntoMe(w);
	cout << "EXPECTED: list will now be 3, 6, 8, 6" << endl;
	cout << "ACTUAL:" << endl;
	v.printNumbers();

	// testing reverseList()
	v.reverseList();
	cout << "EXPECTED: list is now 6, 8, 6, 3" << endl;
	cout << "ACTUAL:" << endl;
	v.printNumbers();

	// testing clear
	v.clear();
	cout << "EXPECTED: No #s will be printed out" << endl;
	cout << "ACTUAL:" << endl;
	v.printNumbers();
	
	// ArrayNumberList class tests
	ArrayNumberList a;
	cout << "TESTING: ArrayNumberList" << endl;
	
	// testing addNumberToList
	for (int i = 1; i <= 15; i++) {
		a.addNumberToList(i);
	}
	cout << "EXPECTED: #s 1 to 15 to be printed out, one per line" << endl;
	cout << "ACTUAL:" << endl;
	a.printNumbers();
	
	// testing removeFromFront
	a.removeNumberFromFront();
	cout << "EXPECTED: #s 2 to 15 to be printed out, one per line" << endl;
	cout << "ACTUAL:" << endl;
	a.printNumbers();

	// testing removeFromBack
	a.removeNumberFromBack();
	cout << "EXPECTED: #s 2 to 14 to be printed out, one per line" << endl;
	cout << "ACTUAL:" << endl;
	a.printNumbers();

	// testing getNumberAt
	answer = a.getNumberAt(1);
	cout << "EXPECTED: getNumberAt(1) returns 3" << endl;
	cout << "ACTUAL:" << endl;
	cout << answer << endl;

	// testing getSizeOfList
	answer = a.getSizeOfList();
	cout << "EXPECTED: getSizeOfList() returns 13" << endl;
	cout << "ACTUAL:" << endl;
	cout << answer << endl;

	// testing computeNextFibonacciAndInsertAtEnd
	a.computeNextFibonacciAndInsertAtEnd();
	cout << "EXPECTED: end fibonacci # will be 27" << endl;
	cout << "ACTUAL:" << endl;
	a.printNumbers();
	
	// testing computeNFibonacci
	a.computeNFibonacci(3);
	cout << "EXPECTED: end 3 fibonacci #s will be 41, 68, 109" << endl;
	cout << "ACTUAL:" << endl;
	a.printNumbers();

	// testing copyListIntoMe
	ArrayNumberList b;
	b.addNumberToList(3);
	b.addNumberToList(6);
	b.addNumberToList(8);
	b.addNumberToList(6);
	cout << "List to be copied is 3, 6, 8, 6" << endl;
	a.copyListIntoMe(b);
	cout << "EXPECTED: list will now be 3, 6, 8, 6" << endl;
	cout << "ACTUAL:" << endl;
	a.printNumbers();

	// testing reverseList()
	a.reverseList();
	cout << "EXPECTED: list is now 6, 8, 6, 3" << endl;
	cout << "ACTUAL:" << endl;
	a.printNumbers();

	// testing clear
	a.clear();
	cout << "EXPECTED: No #s will be printed out" << endl;
	cout << "ACTUAL:" << endl;
	a.printNumbers();

	return 0;
}
