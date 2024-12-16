#include "../Header-Files/Chatbot.hpp"

void Chatbot::loadFromFile(){
    string question;
    string answer;

    ifstream file(filePath);
    if(file.is_open()){
        while(getline(file,question)){
            getline(file,answer);
            linkQA(question,answer);
        }
        file.close();
    } else {
        cout << "File opened unsuccessfully" << endl;
        return;
    }
}