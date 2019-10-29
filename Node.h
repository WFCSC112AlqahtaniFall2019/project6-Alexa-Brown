#ifndef NODE_H
#define NODE_H

class Node {
public:
    friend class LinkedList;
    // Node constructor
    Node(int v = 0, Node* n = nullptr)
    {
        value = v;
        next = n;
    }

private:

    int value;
    Node* next;

};

#endif //NODE_H
