#include <bits/stdc++.h>
using namespace std;
int main() {

    set<int> s; // sorted set
   vector<int> v = {3,5,7,2,3,1,9,8,7,3};
   for(int i: v){
      s.insert(i);
   }
   for(int i:s){
      cout<< i <<"\n";
   }
}
