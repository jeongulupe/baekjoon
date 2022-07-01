#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> str;
    int cnt =1;
    for(int i=1; i<=n; i++){
        str.push(i);
    }

    while(n>1){
        int tmp=0;
        if(cnt%2 == 1){
            str.pop();
        }
        else{
            tmp = str.front();
            str.pop();
            str.push(tmp);
        }
        if(str.size() == 1) break;
        cnt++;
    }
    
    cout << str.front();
    return 0;
}