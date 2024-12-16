#include "../Header-Files/Chatbot.hpp"

void Chatbot::improveQA(string questionToImprove) {
    string question;
    string answer;
    bool found = false;
    ifstream file(filePath);
    ofstream tempFile(fileTemp, ios::app);
    while(getline(file,question)){
        getline(file,answer);
        if(question == questionToImprove){
            cout << "New Answer: ";
            getline(cin, answer);
        }
        tempFile << question << endl;
        tempFile << answer << endl;
    }
    file.close();
    tempFile.close();
    remove("QA.txt");
    rename("temp.txt","QA.txt");

    //still not done, need to also improve linked-link's answer
}