class Solution {
public:
    bool isPalindrome(int x) {
        std::string xStr = std::to_string(x);
        std::string xStrReverse;

        for(int index = xStr.length() - 1; index >= 0; index--)
            xStrReverse += xStr[index];

        if(xStr == xStrReverse)
            return true;
        return false;
    }
};