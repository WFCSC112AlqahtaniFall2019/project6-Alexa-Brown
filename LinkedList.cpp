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

void InsertionSort(Node* head){
    
}
