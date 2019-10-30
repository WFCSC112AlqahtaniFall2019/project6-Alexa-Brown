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
    void InsertionSort();
    void append(int item);
    bool remove(int item);
    void printList() const;


private:
    Node* head = nullptr;


};


#endif //BINARYINSERTIONSORT_LINKEDLIST_H
