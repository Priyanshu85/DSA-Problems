class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int,int>> arr;
        for(auto p : buildings)
        {
            arr.push_back({p[0],-p[2]});
            arr.push_back({p[1],p[2]});
        }
        sort(arr.begin(),arr.end(),[&](pair<int,int> &a,pair<int,int> &b){
            if(a.first == b.first)
            return a.second < b.second;
            else 
            return a.first < b.first;
        });
        vector<vector<int>> res;
        map<int,int> mt;
        int prev = 0;
        mt[0]++;
        for(auto p : arr)
        {
            if(p.second < 0)
            mt[abs(p.second)]++;
            else{
                mt[p.second]--;
                if(mt[p.second] == 0)
                mt.erase(p.second);
            }
            auto it = mt.rbegin();
            // cout<<p.first<<" "<<p.second<<" "<<(*it)<<endl;
            if(it->first != prev)
            {
                // cout<<p.first<<" "<<(*it)<<endl;
                res.push_back({p.first,it->first});
                prev = it->first;
            }
        }
        return res;
    }
};
