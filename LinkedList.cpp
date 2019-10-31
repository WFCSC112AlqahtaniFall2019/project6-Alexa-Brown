#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

//can't use binary search because we already know the size of the vector but you can't divide the linked lists into smaller and smaller parts to sort

LinkedList::LinkedList() { //default constructor
    Node(0, nullptr);
}

LinkedList::LinkedList(const LinkedList& L){ //copy constructor
    //have to loop over L in order to copy it, creating new nodes
    cout<<"Copy constructor"<<endl;
    Node* New = L.head;
    while(New != nullptr){
        append(New->value);
        New=New->next;
    }

}

LinkedList& LinkedList::operator = ( LinkedList rhs){ //copy assignment operator
    cout<<"Assignment operator"<<endl;
    rhs.printList();
    swap(this->head, rhs.head);
    return *this;
}


LinkedList::~LinkedList(){
    cout << "Destructor called" << endl;
    delete head;

}

void LinkedList::append(int item) {
    if (head == nullptr) {
        head = new Node (item);
    } else {
        Node* current = head;
        while (current->next != nullptr){
            current = current->next;
        }
        current->next = new Node (item);
    }
}
bool LinkedList::remove(int item){
    Node* current = head;
    Node* previous = head;
    if (head == nullptr){
        return false; // empty, do nothing
    }
    if (head->value == item){
        head = head->next;
        current->next = nullptr;
        delete current;
        return true; //deleted
    }
    while (current != nullptr){
        previous->next = current->next;
        current->next = nullptr;
        delete current;
        return true; //deleted
    }
    previous = previous->next;
    current = current->next;
}

void LinkedList::printList() const{
    Node* current = head;
    if(! current){
        cout << "Empty list." << endl;
    }
    else{
        while (current){
            cout << current->value << " ";
            current = current->next;
        }
    }
}

//void LinkedList::InsertAfter(Node* nextNode) {


void LinkedList:: InsertionSort() {
    Node *current = head->next;
    int count = 0;
    int othercount = 0;
    // Node *temp = head;
    //Node* temptoDelete;
    Node *previous = head;
    //Node *other = head->next;
    // Node* otherprevious = head;
    if (head == nullptr){
        //if the list is empty, no sorting necessary
    }
    if (head->next == nullptr){
        //if there is only one element in the list, it is already sorted
    }
    else{
        //otherwise, the list needs to be sorted because it is made up of multiple elements
        Node* temp = head;
        Node* otherCurrent = head->next; //to sort that number
        Node* otherPrevious = head;
        while (current != nullptr){
            if (previous->value > current->value) {
                temp = current;
                cout << "Here" << endl;
                otherCurrent = head->next;
                otherPrevious = head;
                while (otherCurrent != nullptr) {
                    if ((otherPrevious->value < temp->value) && (temp->value < otherCurrent->value)) {
                        otherCurrent->next = otherCurrent->next->next;
                        temp->next = otherCurrent;
                        otherPrevious->next = temp;
                    }
                    cout << "sorting" << endl;

                    if (temp->value < head->value) {
                        otherCurrent->next = otherCurrent->next->next;
                        temp->next = head;
                        head = temp;

                    }
                    otherCurrent = head->next;
                    otherPrevious = head;
                    for (int i = 0; i < othercount; i++) {
                        otherPrevious = otherPrevious->next;
                        otherCurrent = otherCurrent->next;
                    }
                    othercount++;
                }
            }
            current = head->next;
            previous = head;
            for (int i = 0; i < count; i++) {
                current = current->next;
                previous = previous->next;
            }
            //previous = previous->next;
            //current = current->next;
            count++;
        }


    }



}