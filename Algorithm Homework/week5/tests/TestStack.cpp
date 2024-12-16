#include "../Exercise1.hpp"
#include <cassert>
#include <iostream>


void test_no_parenthesis(){
    Solution sol;
    std::string s = "I love programming";

    assert(sol.isParenthesisValid(s) == true);

    std::cout<<"Pass for no parenthesis"<<std::endl;

}

void test_with_valid(){
    Solution sol;
    std::string s = "f(x) = ax + b";

    assert(sol.isParenthesisValid(s) == true);

    std::cout<<"Pass for valid parenthesis"<<std::endl;
}

void test_invalid(){
    Solution sol;
    std::string s1 = "This is invalid ( that's never end";
    std::string s2 = "This is another ) that has no open.";

    assert(sol.isParenthesisValid(s1) == false);
    assert(sol.isParenthesisValid(s2) == false);

    std::cout<<"Pass for invalid parenthesis"<<std::endl;
}

int main(){
    test_no_parenthesis();
    test_with_valid();
    test_invalid();

    return 0;
}