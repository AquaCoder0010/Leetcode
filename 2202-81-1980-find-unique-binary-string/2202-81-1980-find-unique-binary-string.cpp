class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
      int bitLength = nums.size();
      
      int maxValue = 0;
      for(int i = 0; i < nums.size(); i++)
	    maxValue += pow(2, i);
      
      std::vector<int> numsVal; numsVal.reserve(nums.size());
      for(auto& num : nums)
      {
        int value = 0;
        for(int i = 0; i < num.length(); i++)
        if(num[i] == '1')
            value += pow(2, num.length() - i - 1);
        
        numsVal.emplace_back(value);
    }

      std::string value;
      for(int i = 0; i <= maxValue; i++)
      { 
	int totalCount = 0;
	for(auto& currVal : numsVal)
	  if(i != currVal)
	    {
	      totalCount += 1;
	    }
	if(totalCount == numsVal.size())
	{
	  value = std::bitset<16>(i).to_string(); //to binary
	  value = value.substr(value.length() - bitLength, value.length());
	  break;
	}
	
      }
      return value;
    }
};
