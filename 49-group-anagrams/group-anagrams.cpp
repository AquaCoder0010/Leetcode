class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::pair<std::string, int>> groupedPair;
        std::vector<std::vector<std::string>> groupedStr;

        for(int i = 0; i < strs.size(); i++)
        {
            std::string sortedString = strs[i];
            std::sort(sortedString.begin(), sortedString.end());
            groupedPair.emplace_back();
            groupedPair.back().first = sortedString;
            groupedPair.back().second = i;    
        }
        std::sort(groupedPair.begin(), groupedPair.end(), [&](std::pair<std::string, int>& pair1, std::pair<std::string, int>& pair2)
        {
            return pair1.first > pair2.first;
        });


        std::string currentString = groupedPair[0].first;
        std::vector<std::string> currentGroup;

        for(int i = 0; i < groupedPair.size(); i++)
        {
            if(currentString == groupedPair[i].first)
            {
                currentGroup.emplace_back(strs[groupedPair[i].second]);
            }
            if(currentString != groupedPair[i].first)
            {
                groupedStr.emplace_back(currentGroup);
                currentGroup.clear();

                currentString = groupedPair[i].first;
                currentGroup.emplace_back(strs[groupedPair[i].second]);
            }
            if(i == groupedPair.size() - 1)
                groupedStr.emplace_back(currentGroup);
            }
            return groupedStr;  
    }
};