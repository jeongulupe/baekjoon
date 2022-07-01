#include <iostream>
#include <string>
using namespace std;
int n;
string s,str,tmp;
/*int comp(){
    for(int i=0; i<n; i++){
        if(s[i] == '<'){

        }
        if(s[i] == '>'){

        }
    }
}*/
void make(int k, string s){
    for(int i=k; i<=9; i++){
        tmp = s;
        s += to_string(i);
        
        if(s.size() == n+1){
            cout << s << "\n";
            return;
        }
        make(k+1,s);
        cout << s << " ";
        s = tmp;
    }
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    make(0,"");
}