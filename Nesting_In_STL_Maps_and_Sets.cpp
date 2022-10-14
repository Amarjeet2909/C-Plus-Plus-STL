/* This section talks about nesting of STL containers like pair inside map, set inside map etc. */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /* pair inside map here the key element is an pair and here also the pair will be stored in sorted order
    map<pair<int,int>, int> m;
    //set inside map
    map<set<int>, int> m;   */

    //Nesting pair and vector inside map
    map<pair<string, string>, vector<int>> m;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        string fn,ln;
        int count;
        cin>>fn>>ln>>count;
        for(int j=0;j<count;j++){
            int x; cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &print : m){
        auto &full_name = print.first;
        auto &list = print.second;
        cout << full_name.first << " " << full_name.second << endl;
        cout << list.size() << endl;
    }

    return 0;
}
// There may be many possible combinations