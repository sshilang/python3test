class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]] = i;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int t = target - nums[i];
            if (mp.count(t) && i != mp[t])
            {
                ans.push_back(i);
                ans.push_back(mp[t]);
                return ans;
            }
        }
        
    }
};