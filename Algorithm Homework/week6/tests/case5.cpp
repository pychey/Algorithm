#include "../Solution.h"
#include <iostream>
#include <fstream>
#include <cassert>

void setup_case5(){ // valid
    fs::create_directories("root5");
    fs::create_directories("root5/sub1");
    fs::create_directories("root5/sub2");
    fs::create_directories("root5/sub2/subsub1");


    std::ofstream("root5/sub1/text1.txt") << "content";
    std::ofstream("root5/sub2/text1.txt") << "content";
    std::ofstream("root5/sub2/subsub1/text1.txt") << "content";
}

int main(){

    setup_case5();
    assert(isFolderValid("root5") == 1);
    std::cout<<"Test case 5 success!"<<std::endl;

    // clean up 
    fs::remove_all("root5");
    

    return 0;
}