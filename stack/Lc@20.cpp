class Solution {
public:
    bool isValid(string s) {
        stack<char> sy;
        for(int i=0;i<s.size();i++){
            char c=s.at(i);
            if(c=='(' || c=='{' || c=='['){
               sy.push(c);
            }
            else{
                if(sy.empty()==true){
                    sy.push(c);
                }
                 if(c=='}' && sy.top()=='{'){
                    sy.pop();
                 } 
                 else if(c==')' && sy.top()=='('){
                    sy.pop();
                 }
                 else if(c==']' && sy.top()=='['){
                    sy.pop();
                 }
                 else{
                    return false;
                 }
            }
        }
        return sy.empty();
    }
};