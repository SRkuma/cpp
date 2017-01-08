#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <queue>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;
#define INF (int)1e+9
using namespace std;

long long board[10][10];
long long  dp[10][10];

int sx,sy;
int gx,gy;
int H,W;

void printArr(int h, int w,long long arr[][10]){
    
    REP(i,h){
        REP(k,w){
            printf("%14ld",arr[i][k]);
        }
        printf("\n");
    }
    printf("\n");

}

long long Bfs(){
    typedef pair<int,int> P;

    int dx[4] = {1, 0,-1,0};
    int dy[4] = {0, 1,0,-1};
    queue<P> que;
    REP(i,10){
        REP(j,10){
            dp[i][j] = INF;
        }
    }
    que.push(P(sy,sx));
    dp[sy][sx] = 0;
    while(que.size()){
        P p = que.front();
        que.pop();
        if(p.first == gy && p.second == gx) break;
        REP(i,4){
            int ny = p.first  + dy[i];
            int nx = p.second + dx[i];
            if(  0 <= ny && ny < H && 0 <= nx && nx < W && dp[ny][nx] == INF){
                que.push(P(ny,nx));
                dp[ny][nx] = dp[p.first][p.second] + board[p.first][p.second];
            }
        }
    }
    return dp[gy][gx];
}

int main(void){

    int turn;
    cin >> H >> W >> turn;
    
    REP(i,H){
        REP(k,W){
            char tmp;
            cin >> tmp;
            switch(tmp){
            //ゴールへ移動するときに1ターン必要
            case 'S' : board[i][k] = 1; sy = i; sx = k; break;
            case 'G' : board[i][k] = 0; gy = i; gx = k; break;
            case '.' : board[i][k] = 1; break;
            case '#' : board[i][k] = INF; break;
            default  : break;
            }
        }
    }

    printArr(H,W,board);
    long long ans = Bfs();
    printArr(H,W,dp);
    int blackNum = ans / INF;
    int whiteNum = ans % INF;
    
    cout << (turn - whiteNum) / blackNum  << endl;
    
    return 0;
}
