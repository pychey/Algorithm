#ifndef NODE_H
#define NODE_H

class Node{
    public:
        int value; // value of the node
        Node* next; // Pointer that points to next node

        Node(int value){
            this->value = value;
            this->next = nullptr;
        }
};

#endif