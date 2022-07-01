#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n,k;
    int num[105];
    stack<int> entrance[101];

    int cnt = 0;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        cin >> num[i];
    }
    for(int j=0; j<k; j++){
        entrance[j].push(101);
    }

    for(int i=n; i>0; i--){
        for(int j=0; j<k; j++){
            if(num[i]< entrance[j].top()){
            int l = num[i];
            entrance[j].push(l);
            cnt++;
            break;
            }
        }
    }
    if(cnt < n) cout << "NO\n";
    else if(cnt == n) cout << "YES\n";
}