/* Alexa Brown
 * CSC 112
 * Due 10/31/19
*/

#include <iostream>
#include "Node.h"
using namespace std;


#ifndef BINARYINSERTIONSORT_LINKEDLIST_H
#define BINARYINSERTIONSORT_LINKEDLIST_H

class LinkedList {
public:

    LinkedList(); //default constructor
    LinkedList(const LinkedList& L); //copy constructor
    ~LinkedList();
    LinkedList& operator = ( LinkedList rhs);
    void InsertionSort();
    void append(int item);
    bool remove(int item); //need?
    void printList() const;
    bool sorted;


private:
    Node* head = nullptr;


};


#endif //BINARYINSERTIONSORT_LINKEDLIST_H
