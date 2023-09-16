class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string mergedStr = "";
        int endIndex = std::min(word1.length(), word2.length()); 

        for(int index = 0; index < endIndex; index++)
        {
            mergedStr += word1[index];
            mergedStr += word2[index];
        }

        if(word1.length() < word2.length())
            for(int index = word1.length(); index < word2.length(); index++)
                mergedStr += word2[index];

        if(word1.length() > word2.length())
            for(int index = word2.length(); index < word1.length(); index++)
                mergedStr += word1[index];

        return mergedStr;
    }
};