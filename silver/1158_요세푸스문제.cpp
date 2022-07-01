#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n,k;
    int num;
    cin >> n >> k;
    queue<int> str;
    queue<int> ysp;
    for(int i=1; i<=n; i++){
        str.push(i);
    }

    int cnt = 1;
    while(str.size()!=1){
        
        int tmp;
        tmp = str.front();
        str.pop();
        if(cnt % k == 0){
            ysp.push(tmp);
        }
        else{
            str.push(tmp);
        }
        cnt++;
    }
    cout << "<";
    for(int i=1; i<n; i++){
        num = ysp.front();
        cout << num << ", ";
        ysp.pop();
    }
    num = str.front();
    cout << num << ">";
}