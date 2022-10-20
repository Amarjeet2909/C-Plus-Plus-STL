//In this module we will see various inbuilt Algorithms available in STL
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={3,2,1,7,9,1,4,8,32,22};
    //min_element | max_element returns pointer that's why below we're dereferencing it and storing the value in min/max variable
    int min = *min_element(v.begin(),v.end());
    cout<<"Min Element: "<<min<<endl;
    int max = *max_element(v.begin(),v.end());
    cout<<"Max Element: "<<max<<endl;

    //accumulate takes staring, ending addredd and intial sum value as a parameter
    int sum = accumulate(v.begin(), v.end(),0);
    cout<<"Sum is: "<<sum<<endl;

    //count takes starting, ending and the value for which we have to count no of occurances
    int co_unt = count(v.begin(),v.end(),1);
    cout<<"Count of 1 is: "<<co_unt<<endl;

    //find: it will return iterator | pointer to that value
    auto it = find(v.begin(),v.end(),8);
    if(it!=v.end()) cout<<*it<<endl;
    else cout<<"Element not found"<<endl;

    //using reverse we can reverse Arrays, vector, string etc.
    reverse(v.begin(),v.end());
    for(auto val : v) cout<<val<<" ";
    cout<<endl;

// The above algos can also be used in case of Arrays with little modification in passing the parameter and most of the algos above takes O(n) time.

    return 0;
}