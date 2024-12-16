#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    bool areNumAscending(std::string s){
        // your code here ...
        vector<int> num;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                int count=0;
                for(int j=i;isdigit(s[j]);j++){
                    ++count;
                }
                num.push_back(stoi(s.substr(i,count)));
                i+=count;
            }
        }
        for (int i=0;i<num.size()-1;i++){
            if(num[i]>=num[i+1]){
                return false;
            }
        }
        
        return true;
    }
};