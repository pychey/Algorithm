#include "utils/Stack.h"
#include <string>

class Solution{
    public:
        bool isParenthesisValid(std::string s){
            Stack strCheck;
            for (int i=0; i<s.size(); i++) {
                if(s[i]=='(') {
                    strCheck.push(s[i]);
                }
                if(s[i]==')') {
                    if(strCheck.isEmpty()){
                        return false;
                    } else {
                        strCheck.pop();
                    }
                }
            }
            return strCheck.isEmpty();
        }
};