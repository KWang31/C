#include <bits/stdc++.h>
using namespace std;
int main() {
	
	pair<int, int> sol{2,3};
	cout<<"First "<<sol.first << "\n";
    cout<<"Second "<<sol.second<< "\n";

     vector<pair <int, int>> v(10);
     for(int i=0; i<10; ++i){
          cin >> v[i].first >> v[i].second;
     }
     for(int i=0;i<10;++i){
         cout<< v[i].first << " " << v[i].second << "\n";
    }
}
  
