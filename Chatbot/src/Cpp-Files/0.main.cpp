#include "../Header-Files/Chatbot.hpp"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    Chatbot pychey;
    pychey.loadFromFile();
    pychey.displayQA();
    

    return 0;
}