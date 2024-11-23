class Solution {
public:
    bool isValid(string s) {
        if((s[0] == ')' || s[0] == '}' || s[0] == ']') || s.length() == 1)
            return false;
        
        std::stack<char> stackList;
        bool isValid = true;
        for(char letter : s){
            if( (letter == ')' || letter == '}' || letter == ']') && stackList.size() == 0 ){
                isValid = false;
                break;
            }

            if(letter == ')' || letter == '}' || letter == ']')
            {
                if(letter - stackList.top() == 2 || letter - stackList.top() == 1){
                    stackList.pop();
                    continue;
                }
                else if(letter - stackList.top() != 2 && letter - stackList.top() != 1){
                    isValid = false;
                    break;
                }
            }
            stackList.push(letter);
        }
        return isValid && (stackList.size() == 0);      
    }
};