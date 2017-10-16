#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int d[201][201];
int r[9];
bool used[9];

int V,E,townNum;
int res = (int)1e+9;

void warshall_floyd(){
    FOR(k,1,V+1){
        FOR(i,1,V+1){
            FOR(j,1,V+1){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}
void dfs(int c,int las,int dist){
    if(c == townNum+1){
        if(res > dist) res = dist;
        return;
    }
    FOR(i,1,townNum+1){
        
        if(used[i] == true) continue;
        
        used[i]=true;

        if(las == -1){
            dfs(c+1,i,0);
        }else{
            dfs(c+1,i,dist+d[r[las]][r[i]]);
        }

        used[i] = false;
    }
}

int main(void){

    cin >> V >> E >> townNum;

    FOR(i,1,V+1){
        FOR(k,1,V+1){
            if(i != k){
                d[i][k] = (int)1e+9;
            }
        }
    }
    FOR(i,1,townNum+1){
        cin >> r[i];
    }
    FOR(i,1,E+1){
        int a, b, c;
        cin >> a >> b >> c;
        if(d[a][b] > c) d[a][b] = d[b][a] = c;
    }
    warshall_floyd();
    FOR(i,1,V+1){
        FOR(k,1,V+1){
            cout << d[i][k];
        }
        cout << endl;
    }
   

    dfs(1,-1,0);

    cout << res << endl;
    
    
    return 0;
}
