#include "Exercise2.hpp"
#include <cassert>
#include <iostream>

void test_add_job(){
    Solution sol;
    sol.add({5, 3, 6});

    assert(sol.jobs.size() == 3);
    assert(sol.jobs.dequeue() == 5);
    assert(sol.jobs.size() == 2);

    std::cout<<"Pass for adding tasks"<<std::endl; 
}

void test_run_job(){
    Solution sol;
    sol.add({5});

    int pages = sol.run();
    assert(pages == 5);
    assert(sol.jobs.size() == 0);

    std::cout<<"Pass for adding tasks"<<std::endl; 
}

int main(){
    test_add_job();
    test_run_job();
    return 0;
}