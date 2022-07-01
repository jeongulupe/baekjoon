#include <iostream>
#include <queue>
using namespace std;
int relation[100][100], chk[100][100];

void bfs(int x, int y){
    queue<pair<int,int> > q;
    q.push(make_pair(x,y));
    chk[x][y] = 1;
    while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second;
        
    }
}

int main(){
    int n,m, a, b;
    cin >> n >> a >> b >> m;
    for(int i=0; i<m; i++){
        int l,s;
        cin >> l >> s;
        relation[l][s] = 1;
    }
    int cnt=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(relation[i][j] == 1 && !chk[i][j]){
                cnt++;
                bfs(i,j);
            }
        }
    }

    
}