#ifndef STACK_H
#define STACK_H


#include "Node.h"
#include <string>
#include <stdexcept>

class Stack{
    private:
        Node* head;
        int lenght;
    
    public:
        Stack(){
            head = nullptr;
            lenght = 0;
        }

        ~Stack(){
            while(!isEmpty()){
                pop(); // remove the data one by one
            }
            head = nullptr;
        }

        bool isEmpty(){
            return head == nullptr;
        }

        void push(int value){
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
            
            lenght++; // increase the lenght of the stack
        }

        int pop(){
            if(isEmpty()){
                throw std::underflow_error("Stack is empty!");
            }

            Node* temp = head;
            head = head->next;

            
            lenght--;
            return temp->value;
        }

        int peek(){ // return top value without removing
            if(isEmpty()){
                throw std::underflow_error("Stack is empty!");
            }
            return head->value;

        }

        int size(){
            return this->lenght;
        }

        std::string print(){
            if(isEmpty()){
                return "[]";
            }
            std::string data = "[";
            Node* temp = head;
            while(temp->next){
                data += std::to_string(temp->value) + ", ";
                temp = temp->next;
            }
            data += std::to_string(temp->value) + "]";

            return data;
        }
};


#endif

