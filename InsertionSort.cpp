#include <iostream>
#include <vector>
#include <cassert>
#include "BinaryInsertionSort.h"
#include "LinkedList.h"
#include "Node.h"
using namespace std;

int main() {

    cout << "Please insert a number for seed and for length" << endl;
    int seed, length;
    cin >> seed >> length;
    srand(seed);

    vector<int> v(length);
    LinkedList list;

    // generate vector of random integers
    for (int i = 0; i < v.size(); i++) {
        v[i] = rand() % 100;
    }

    //to build the linked list
    for (int i = 0; i < length; i++){
        int a = v[i];
        list.append(a);
    }
    cout << "Original linked list"<< endl;
    list.printList();


    // binary insertion sort
    insertionSort(v, v.size());
    cout << "Hi" << endl;
//    list.InsertionSort();

    cout << "Hello" << endl;
    // check if sorted
    for (int i = 1; i < v.size(); i++) {
        assert(v[i-1] <= v[i]);
    }

    // print out sorted list-Binary
    cout << "Sorted with Binary Insertion: " << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Sorted with Insertion Sort: " << endl;
    list.printList();

    cout << endl;
    // FINISH ME

}