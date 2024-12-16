#ifndef SOLUTION
#define SOLUTION

#include <filesystem>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

bool isFolderValid(fs::path dir){
    // your code here...
    bool state = true;
    if(fs::is_directory(dir)){
        if(fs::is_empty(dir)){
            return false;
        } else {
            for(const auto& ptr : fs::directory_iterator(dir)){
                state &= isFolderValid(ptr);
            }
        }
    }
    
    return state;
}

#endif