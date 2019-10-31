/* Alexa Brown
 * CSC 112
 * Due 10/31/19
*/

#include <iostream>
#include <vector>
#include <cassert>
#include <ctime>
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

    clock_t start_binarysort = clock();
    // binary insertion sort
    insertionSort(v, v.size());
    clock_t end_binarysort = clock();

   // cout << "Hi" << endl;

    clock_t start_insertionsort = clock();
    //insertion sort
   list.InsertionSort();
    clock_t end_insertionsort = clock();

   // cout << "Hello" << endl;
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
   // LinkedList l2;    checking to ensure that the big three are working
   // l2=list;
   // l2.printList();
    cout << endl;

    double elapsed_binarysort = double(end_binarysort - start_binarysort) / CLOCKS_PER_SEC;
    double elapsed_insertionsort = double(end_insertionsort - start_insertionsort) / CLOCKS_PER_SEC;


  //  cout << "Time to use Binary Sort: " << elapsed_binarysort << endl;
    //cout << "Time to use Insertion Sort: " << elapsed_insertionsort << endl;


}