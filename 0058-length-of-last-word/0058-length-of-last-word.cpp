class Solution {
private:
public:
    int lengthOfLastWord(string s) {
        std::vector<std::string> wordList;
        std::stringstream ss(s);
        std::string word;
        while(ss >> word)
            wordList.emplace_back(word);

        return wordList[wordList.size() - 1].length();   
    }
};