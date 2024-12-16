#include "Node.h"

#include <string>
#include <stdexcept>

class Queue{
    private:
        Node* head;
        Node* tail;
        int length;
    
    public:
        Queue(){
            head = nullptr;
            tail = nullptr;
            length = 0;
        }

        ~Queue(){
            while(!isEmpty()){
                dequeue();
            }
            head = nullptr;
            tail = nullptr;
        }

        bool isEmpty(){
            return head == nullptr;
        }

        void enqueue(int value){
            Node* newNode = new Node(value);
            if(isEmpty()){
                head = newNode;
                tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
            length++;

        }

        int dequeue(){
            if(isEmpty()){
                throw std::underflow_error("Que is empty!");
            }
            Node* temp = head;
            head = head->next;
            length--;
            return temp->value;
        }

        int peek(){
            if(isEmpty()){
                throw std::underflow_error("Queue is empty!");
            }

            return head->value;
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

        int size(){ return length;}
};