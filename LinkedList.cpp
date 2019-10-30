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
    Node* current = head;
    Node* New = L.head;
    while(current != nullptr){\
        append(New->value);
        current = current->next;
    }

}
//need copy assignment operator

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
    Node *current = head;
    Node *temp = head;
    Node *previous = head;
    Node *other = head->next;
    Node* otherprevious = head;
    //current = head;
    // current->next = head->next;

  /*  while (current != nullptr) {
        if(current->value > current->next->value){
            temp = current;
            current = current->next->next;
            previous->next = temp;
            while(other!= nullptr){
                if (other->value < temp->value){
                    otherprevious->next = temp;
                    temp->next = other;
                }
                other = other->next;
            }
        }
       //if(current->value < current->next->value){
            current = current->next;
        //}
       /*  if(current->value > current->next->value) {
            while (other != nullptr) {
                if (other->value > previous->value) {
                    previous->next = temp;
                    temp->next = other;
                }
                other = other->next;
            }
            current = current->next;
        }*/
       /* other = other->next;
        if ((previous->value < temp->value) && (temp->value > other->value)){
            previous->next = temp;
            temp->next = other;
        }
        current = current->next;*/

       /* if (nextNode->value > current->value) {
            previous = current;
            current = current->next;
           // nextNode = current;
        }
        else if (nextNode->value < current->value) {
            Node *temp = current;
           // current->next = current->next->next;
           // while (other != nullptr) {
                if (temp->next > other->next) {
                    previous = other;
                    other = other->next;
                    if (temp->next < other->next) {
                        previous->next = temp->next;
                        temp->next = other->next;
                    }
             //   }
            }
            other = other->next;
        }*/
   // }
}
