#include "../Solution.h"
#include <iostream>
#include <fstream>
#include <cassert>

void setup_case2(){ // valid
    fs::create_directories("root2");
    std::ofstream("root2/file.txt") << "content";
}

int main(){
    setup_case2();
    assert(isFolderValid("root2") == 1);
    std::cout<<"Test case 2 success!"<<std::endl;


    // clean up 
    fs::remove_all("root2");
    

    return 0;
}