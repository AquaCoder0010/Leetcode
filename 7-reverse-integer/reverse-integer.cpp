class Solution {
public:
    int reverse(int x) {
        bool negativeFlag = (x < 0);

        std::string integerString = std::to_string(x);
        std::string reversedString = "";
        for(int index = integerString.length() - 1; index >= 0; index--)
            reversedString +=  integerString[index];

        reversedString = negativeFlag ? reversedString = "-" + reversedString : reversedString;
        try{
            int reversed = stoi(reversedString);
            return reversed;
        }
        catch(std::out_of_range& error){
            return 0;
        }
        return 0;
    }
};