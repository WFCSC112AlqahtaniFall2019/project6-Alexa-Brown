#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList() {
    Node(0, nullptr);
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
    Node *nextNode = current->next;
    Node *other = head->next;
    Node *temp = head;
    Node *previous = head;
    //current = head;
    // current->next = head->next;
    while (current != nullptr) {
        if(current->value < current->next->value){
            current = current->next;
        }
        else if(current->value > current->next->value) {
            while (other != nullptr) {
                if (other->value > previous->value) {
                    previous->next = temp;
                    temp->next = other;
                }
                other = other->next;
            }
            current = current->next;
        }
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
    }
}
