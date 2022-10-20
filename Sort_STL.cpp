//Sorting using STL
#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[5]= {4,1,10,3,5};
    /* sort(): It's sort the Array | It needs starting address and ending address | Internally It used INTRO SORT which is mixture of 3 sorting algo */
    sort(A, A+5);  //O(n logn)
    for(int i=0;i<5;i++)
    cout<<A[i]<<endl;

    //In case of vector
    vector<int> v ={10,111,1,0,5};
    sort(v.begin(),v.end());
    for(auto i : v){
        cout<<i<<endl;
    }

    return 0;
}