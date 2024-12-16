#ifndef MEMBER_HPP
#define MEMBER_HPP

#include <iostream>
#include "BookNode.hpp"
#include <string>
using namespace std;

class Member{
private:
    std::string name;
    BookNode* firstBook;

public:
    Member(std::string name){
        this->name = name;
        firstBook = nullptr;
    }
    ~Member(){
        BookNode* current = firstBook;
        while(current){
            BookNode* next = current->next;
            delete current;
            current = next;
        }
    }
    
    BookNode* getFirstBook(){
        return firstBook;
    }

    void borrowBook(std::string title, std::string borrowDate){
        BookNode* newBook = new BookNode(title,borrowDate);

        if(!firstBook){
            firstBook = newBook;
        } else {
            BookNode* newNode = firstBook;
            while(newNode->next){
                newNode = newNode->next;
            } 
            newNode->next= newBook;
        }
    }

    void returnBook(std::string title){
        if(!firstBook){
            cout <<"There's no book borrowed"<<endl;
        } else {
            BookNode* nodeTitle= firstBook;
            while(nodeTitle->title!=title){
                if(nodeTitle->next){
                    nodeTitle=nodeTitle->next;
                } else { return;}
            }
            if(firstBook==nodeTitle){
                firstBook=nodeTitle->next;
                return;
            } else {
                BookNode* nodeNext = firstBook;
                while(nodeNext->next!=nodeTitle){
                    nodeNext=nodeNext->next;
                }
                nodeNext->next=nodeTitle->next;
                return;
            }
        }
    }

    void displayBorrowInfo(){
        BookNode* temp = firstBook;
        while (temp){
            std::cout<<"- ";
            std::cout<< temp->title <<" Borrow on: "<< temp->borrowDate << std::endl;
            temp = temp->next;
        }
    }

    std::string getName(){
        return this->name;
    }
};

#endif