#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> v;
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(),v.end());
    int i=0;
    while(1){
        int last = v[n-i];
        int start = v[i];
        int mid = v[n-i/i];
        

    }
}