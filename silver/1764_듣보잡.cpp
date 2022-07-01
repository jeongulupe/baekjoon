#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> vt;
    map<string,int> v;
    string str;

    for(int i=0; i<n+m; i++){
        cin >> str;
        v[str]++;
        if(v[str]>1){
            vt.push_back(str);
        }
    }

    sort(vt.begin(),vt.end());
    cout << vt.size() << "\n";

    for(int i=0; i<vt.size(); i++){
        cout << vt[i] << "\n";
    }

    return 0;
}