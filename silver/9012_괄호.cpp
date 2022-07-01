#include <stdio.h>
#include <iostream>
#include <stack>
#include <stdbool.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        bool abc = true;
        stack<string> str;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            string a;
            a = s[i];
            if(s[i] == '(') str.push(a);
            if(s[i] == ')'){
                if(!str.empty()){
                    str.pop();
                }
                else{
                    abc = false;
                    break;
                }
            }
        }
        if(!str.empty() || abc == false) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}