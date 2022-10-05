class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0;
        int r = arr.size()-1;
        while((r-l) >= k)
        {
            if(x-arr[l] <= arr[r]-x)
                r--;
            else 
                l++;
        }
        vector<int> res;
        for(int i = l;i<=r;i++)
            res.push_back(arr[i]);
        return res;
    }
};
