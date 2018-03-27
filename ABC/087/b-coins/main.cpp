#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int A,B,C,X;
  cin >> A >> B >> C >> X;

  int ans = 0;

  REP(k,A+1){
    REP(i,B+1){
      REP(j,C+1){
        int fh = k * 500;
        int h  = i * 100;
        int f  = j * 50;
        if(fh + h + f == X){
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
    
  return 0;
}
