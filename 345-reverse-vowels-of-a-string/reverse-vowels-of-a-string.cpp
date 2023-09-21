class Solution {
private:
    std::array<char, 5> vowelList = {
        'A',
        'E',
        'I',
        'O',
        'U'
    };
    bool isVowel(char sChar)
    {
        for(char& vowel : vowelList)
            if(sChar == vowel || sChar == tolower(vowel) )
                return true;
        return false;
    }
public:
    string reverseVowels(string s) {
        std::string vowels = "";
        for(int i = 0; i < s.length(); i++)
            if( isVowel(s[i]) == true)
            {
                vowels += s[i];
                s[i] = '_';
            }
        std::reverse(vowels.begin(), vowels.end());

        int currentVowelIndex = 0;
        for(int i = 0; i < s.length(); i++)
            if(s[i] == '_')
            {
                s[i] = vowels[currentVowelIndex];
                currentVowelIndex++;
            }
        return s;
    }
};