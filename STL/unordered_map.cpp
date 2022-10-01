#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
using namespace std;

int main(){
    unordered_map <string, string> umap;
    umap["nishant"] = "sharma";
    umap["madhavan"] = "tyagi";
    umap["karishma"] = "sharma";

    // umap.insert(make_pair("ishita", "Bh"));

    // string toCheck = "babe";
    // if (umap.find(toCheck) == umap.end()) cout << "Not Found" << endl;
    // else cout << "Found" << endl;

    // for (auto x : umap)
    //     cout << x.first << " " << x.second << endl;
    // for (auto iter = umap.begin(); iter != umap.end(); iter++){
    //     cout << (*iter).first << (*iter).second <<endl;
    // }
    // string name = "nishant";
    // unordered_map <string, int> freq;
    // stringstream s(name);
    
    cout << umap["nishant"] << endl;


    return 0;
}