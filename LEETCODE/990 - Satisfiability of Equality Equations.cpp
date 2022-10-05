class Solution {
public:
    struct node{
        char parent;
        int rank;
    };
    vector<node> dsuf;
    char Find(char p)
    {
        if(dsuf[p-'a'].parent == p)
            return p;
        else 
            return dsuf[p-'a'].parent = Find(dsuf[p-'a'].parent);
    }
    void Union(char x,char y)
    {
        if(dsuf[x-'a'].rank == dsuf[y-'a'].rank)
        {
            dsuf[x-'a'].parent = y;
            dsuf[y-'a'].rank++;
        }
        else if(dsuf[x-'a'].rank > dsuf[y-'a'].rank)
            dsuf[y-'a'].parent = x;
        else 
            dsuf[x-'a'].parent = y;
    }
    bool equationsPossible(vector<string>& equations) {
        dsuf.resize(26);
        for(int i = 0;i<26;i++)
        {
            dsuf[i].parent = char('a'+i);
            dsuf[i].rank = 1;
        }
        for(auto p : equations)
        {
            if(p[1] == '=')
            {
                char xp = Find(p[0]);
                char yp = Find(p[3]);
                if(xp == yp)
                    continue;
                else 
                    Union(xp,yp);
            }
            else 
            {
                if(p[0] == p[3])
                    return false;
                char xp = Find(p[0]);
                char yp = Find(p[3]);
                if(xp == yp)
                    return false;
                
            }
        }
        for(auto p : equations)
        {
            if(p[1] == '!')
            {
                char xp = Find(p[0]);
                char yp = Find(p[3]);
                if(xp == yp)
                    return false;
                
            }
        }
       
        return true;
    }
};
