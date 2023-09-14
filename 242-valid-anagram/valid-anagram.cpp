class Solution {
public:
    bool isAnagram(string s, string t) {
        std::sort(s.begin(), s.end(), [](char character1, char character2){
            return (int)character1 < (int)character2;
        });
        std::sort(t.begin(), t.end(), [](char character1, char character2){
            return (int)character1 < (int)character2;
        });

        if(s == t)
            return true;
        return false;

    }
};