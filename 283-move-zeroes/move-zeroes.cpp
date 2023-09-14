class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        std::vector<int> newList;
        for(int num : nums)
            if(num != 0)
                newList.emplace_back(num);
        int remainingZeros = nums.size() - newList.size();
        for(int index = 0; index < remainingZeros; index++)
            newList.emplace_back(0);
        nums = newList;
    }
};