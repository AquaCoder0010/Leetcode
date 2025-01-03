
class Solution {
public:
    bool isPalindrome(string s) {
        std::string modS = "";

        for(int i = 0; i < s.length(); i++)
        {
            if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 48 && s[i] <= 57))
                modS += s[i];
            else if(s[i] >= 97 && s[i] <= 122)
                modS += s[i] - 32;        
            
        }

        std::string reversedS = "";
        for(int i = 0; i < modS.length(); i++){
            reversedS += modS[modS.length() - 1 - i];
        }   
        return (reversedS == modS);        
    }
};
