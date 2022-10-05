// https://leetcode.com/problems/prefix-and-suffix-search/submissions/

#include "/Users/nishant/bits/stdc++.h"

class WordFilter {
public:
    unordered_map <string, int> mp;
    WordFilter(vector<string>& words) {
        int n = words.size();
        for (int i=0; i<n; i++){
            string word = words[i];
            int wordSize = word.size();
            
            for(int j=1; j<=wordSize; j++){
                string pre = word.substr(0, j);
                
                for (int k=0; k<wordSize; k++){
                    string suf = word.substr(k, wordSize);
                    mp[pre + "|" + suf] = i+1;
                }
            }
        }
    }
    
    int f(string prefix, string suffix) {
        string s = prefix + "|" + suffix;
        return mp[s]-1;
    }
};