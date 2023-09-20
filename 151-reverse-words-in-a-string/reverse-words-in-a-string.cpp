class Solution {
public:
    string reverseWords(string s) {
        std::vector<std::string> wordList;
        int averageWordLength = 5;

        wordList.reserve( round(s.length() / averageWordLength));
        std::stringstream ss(s);
        std::string currentWord;
        while (ss >> currentWord) {
            wordList.emplace_back(currentWord);
        }

        std::reverse(wordList.begin(), wordList.end());
        std::string reversedStr = "";

        for(int index = 0; index < wordList.size(); index++)
            if(index != wordList.size() - 1)
                reversedStr += wordList[index] + " "; 
        
        return reversedStr + wordList[wordList.size() - 1];
    }
};