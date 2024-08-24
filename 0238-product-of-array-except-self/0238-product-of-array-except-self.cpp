class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> productList(nums.size(), 0);
        std::vector<int> prefixList, suffixList;

        int prefixProduct = 1;
        int suffixProduct = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i != 0)
            {
                prefixProduct *= nums[i - 1];
                suffixProduct *= nums[nums.size() - i];
            }
            suffixList.emplace_back(suffixProduct);
            prefixList.emplace_back(prefixProduct);
        }
        for(int i = 0; i < nums.size(); i++)
            productList[i] = prefixList[i]*suffixList[nums.size() - 1 - i];
        
        return productList;
    }
};