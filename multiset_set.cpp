#include <bits/stdc++.h>
using namespace std;
int main() {

    set<int> s; // sorted set
    multiset<int> ms; //sorted MULTIset
   vector<int> v = {3,5,7,2,3,1,9,8,7,3};
   for(int i: v){
      s.insert(i), ms.insert(i);
   }

    //Set gets rid of duplicates, multiset doesn't
  cout<<"Sets"<<"\n";
   for(int i:s){
      cout<< i <<"\n";
   }
   for(int i:ms){
		cout << i << "\n";
      }
}
