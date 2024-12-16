#ifndef CHATBOT_H
#define CHATBOT_H

#include "QA.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Chatbot{
private:
    string name;
    QA* firstQA;
    const string filePath = "QA.txt";
    const string fileTemp = "temp.txt";
public: 
    //1.constructor
    Chatbot();
    Chatbot(string name);

    //setter
    void setName(string name);
    void setFirst(QA* firstQA);

    //getter
    string getName();
    QA* getFirst();

    //2.function members
    void addQA();
    void displayQA();
    QA* findQ_returnQA(string question);
    string giveA(string question);
    void improveQA(string question);
    void deleteQA(string question);

    //3.linked-list and file handling
    void linkQA(string question, string answer);
    void deleteFromLink(QA* target_QA);
    void writeToFile(string question, string answer);
    void loadFromFile();
    void deleteFromFile(string question);
};

#endif