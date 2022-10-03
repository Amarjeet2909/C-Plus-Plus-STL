#include <bits/stdc++.h>
using namespace std;
/* $Pairs
format: pair<DataType,DataType> Pair_Name;
        Eg:- pair<int,int> p;
             pair<int,string> s; */

int main(){
   pair<int,int> p;
   //Declaring the pairs:
   p= make_pair(2,3);
   p= {4,5};

   //copying the pairs: 
   pair<int, int> &p1 = p;
   p1.first = 3;
   cout<< p.first<< " " << p.second << endl;

   //Declaring array of pair: 
       pair<int, int> p_array[3];
       p_array[0]= {1,2};
       p_array[1]= {2,3};
       p_array[2]= {3,4};
   //Swaping the elements
       swap(p_array[0],p_array[2]);
       for(int i=0;i<3;i++){
         cout<<p_array[i].first <<" "<<p_array[i].second<<"\n";
       }
   //Taking Input 
       pair<int,string> T;
       cin>>T.first;
       cout<<T.first<<endl;

       
       return 0;
}