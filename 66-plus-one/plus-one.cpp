class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        std::vector<int> incremented = digits;
        incremented[incremented.size() - 1] += 1;

        bool appendFlag = false;
        for(int index = incremented.size() - 1; index > -1; index--)
        {
            if( index != 0 && incremented[index] >= 10)
            {
                incremented[index] = 0;
                incremented[index - 1] += 1;
            }


            if(index == 0 && incremented[index] >= 10)
            {
                incremented[index] = 0;
                appendFlag = true;
            }
        }

        if(appendFlag == true)
            incremented.insert(incremented.begin(), 1);
        return incremented;
    }
};