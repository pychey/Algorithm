#include "../Header-Files/Chatbot.hpp"

void Chatbot::writeToFile(string question, string answer){
    ofstream file(filePath, ios::app);
    if (file.is_open()){
        file << question << endl;
        file << answer << endl;
        file.close();
    } else {
        cout << "File opened unsucessfully" << endl;
        return;
    }
}