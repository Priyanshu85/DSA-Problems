// Naive Approach - might give you TLE
class Solution {
public:
    map<vector<int>, int> freq;
    vector<vector<int>> ans;
    
    void permute(vector<int>& nums, int idx){
        if (idx==nums.size()){
            if (!freq[nums]){
                ans.push_back(nums);
                freq[nums]=1;
            }
            return;
        }
        
        for (int i=0; i<nums.size(); i++){
                // take a num
                swap(nums[idx], nums[i]);
                // recur    
                permute(nums, idx+1);
                // untake a num
                swap(nums[i], nums[idx]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        permute(nums, 0);
        return ans;
    }
};

// Hashmap and Recursion Approach | Backtracking
class Solution {
public:
    
    vector<vector<int>>ans;
    
    void permute(int numsSize, vector<int>temp, unordered_map<int, int> m){
        if (temp.size()==numsSize){
            ans.push_back(temp);
            return;
        }
        
        for (auto i=m.begin(); i!=m.end(); i++){
            if (i->second>0){
                // take
                temp.push_back(i->first);
                i->second--;
                // permute
                permute(numsSize, temp, m);
                // not take
                temp.pop_back();
                i->second++;
            }
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        unordered_map<int, int> m;
        
        // creating the map
        for (int num: nums){
            if(m[num]) m[num]++;
            else m[num]=1;
        }
        
        permute(nums.size(), {}, m);
        return ans;
    }
};