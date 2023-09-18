class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        std::vector<bool> kidsWithCandiesList;  
        int max = 0;
        for(int& candy : candies)
            if(candy > max)
                max = candy;
        
        for(int candy : candies)
        {
            if(candy + extraCandies >= max)
                kidsWithCandiesList.emplace_back(true);
            if(candy + extraCandies < max)
                kidsWithCandiesList.emplace_back(false);
        }
        return kidsWithCandiesList;
    }
};