#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

#define MAX_H 50
#define MAX_W 50

char a[MAX_H+2][MAX_W+2];
int  ans[MAX_H+2][MAX_W+2];

int main(void){

  int H,W;
  int dx[8] = {-1,-1,-1, 0, 0, 1, 1, 1};
  int dy[8] = {-1, 0, 1,-1, 1,-1, 0, 1};
  cin >> H >> W;

  fill(a[0],a[MAX_H+2],'.');

  FOR(i,1,H+1){
    FOR(k,1,W+1){
      cin >> a[i][k];
    }
  }
  int bombCnt;
  FOR(i,1,H+1){
    FOR(k,1,W+1){
      if(a[i][k] == '.'){
        bombCnt = 0;
        REP(t,8){
          if(a[i+dx[t]][k+dy[t]] == '#'){
            bombCnt++;
          }
        }
      }
      ans[i][k] = bombCnt;
      bombCnt = 0;
      if(ans[i][k] == 0 && a[i][k] == '#'){
        cout << '#';
      }else{
        cout << ans[i][k];
      }
    }
    cout << endl;
  }

  return 0;
}
