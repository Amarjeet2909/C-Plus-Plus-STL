/* Comparator Classes are used to compare the objects of user-defined classes. In order to develop 
   a generic function use template, and in order to make the function more generic use containers, so 
   that comparisons between data can be made. */
#include <bits/stdc++.h>
using namespace std;

//comparator function | Like this we can write diff comperator functions of diff logic
bool should_i_swap(int a, int b){
    if(a>b) return true;
    return false;
}

int main(){
    int A[5]= {2,6,1,0,9};
    //Sorting manually
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(should_i_swap(A[i],A[j])){
            swap(A[i],A[j]);
            }
        }
    }
    //printing
    for(int i=0;i<5;i++)
    cout<<A[i]<<endl;

    return 0;
}

//Comperator function EG in case of pair
#include <bits/stdc++.h>
using namespace std;

//comparator function | Like this we can write diff comperator functions of diff logic
bool should_i_swap(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first){
        return a.first < b.first ;
    }
    else{
        if(a.second < b.second) return false;
        return true;
    }
}

int main(){
    int n; cin>>n;
    //Declaring vector pair
    vector<pair<int,int>> A(n);
    //Filling the values in vector pair
    for(int i=0;i<n;i++){
        cin>>A[i].first>>A[i].second ;
    }
    //sorting along with comparator function
    sort(A.begin(),A.end(),should_i_swap);
    for(int i=0;i<n;i++){
        cout<<A[i].first<<" "<<A[i].second ;
    }
    cout<<endl;
    return 0;
}