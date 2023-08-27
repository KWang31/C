#include <bits/stdc++.h>
using namespace std;
int main() {
    //A vector is a dynamic array
    vector<int> v(10); //Size is set, so this is a static array
    for(int i=0;i<10;i++){
        v[i]=i;
    }
    for(int i=0;i<10;i++){
        cout << v[i];
    }
}
