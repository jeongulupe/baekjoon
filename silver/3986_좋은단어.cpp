#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    while(n--){
        stack<string> str;
        string s,tmp;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            tmp = s[i];
            if(str.empty()) str.push(tmp);
            else{
                if(str.top() == tmp) str.pop();
                else str.push(tmp);
            }
        }
        if(str.empty()) cnt++;
    }

    cout << cnt;
    return 0;
}
