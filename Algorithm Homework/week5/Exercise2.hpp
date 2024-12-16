#include "utils/Queue.h"
#include <vector>
#include <iostream>
using namespace std;

class Solution{
    public:
        Queue jobs;

        void add(std::vector<int> tasks){
            for (int i=0; i<tasks.size(); i++){
                jobs.enqueue(tasks[i]);
            }
        }

        int run(){
           int total=0;
            vector<int> page;
            while(!jobs.isEmpty()){
                cout << "Printing " + to_string(jobs.peek()) + " pages" << endl;
                page.push_back(jobs.dequeue());
            }
            for(int i=0;i<page.size();i++){
                total += page[i];
            }
            cout << "Total pages printed:" + to_string(total) <<endl ;
            return total;
        }
};