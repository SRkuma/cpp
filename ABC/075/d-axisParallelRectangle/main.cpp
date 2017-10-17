#include <iostream>
#include <algorithm>
#include <vector>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int n,k;
  cin >> n >> k;

  vector<int> x(n), y(n);
  vector<int> xAry, yAry;

  REP(i,n){
    cin >> x[i] >> y[i];
    xAry.push_back(x[i]);
    yAry.push_back(y[i]);
  }

  sort(xAry.begin(), xAry.end());
  sort(yAry.begin(), yAry.end());

  ll ans = 1LL * (xAry[n-1] - xAry[0]) * (yAry[n-1] - yAry[0]);

  REP(xi,n){
    FOR(xk,xi+1,n){
      REP(yi,n){
        FOR(yk,yi+1,n){

          int num = 0;
          ll lx = xAry[xi], rx = xAry[xk];
          ll by = yAry[yi], uy = yAry[yk];

          REP(i,n){
            if(lx <= x[i] && x[i] <= rx &&
               by <= y[i] && y[i] <= uy){
                 num++;
               }
          }

          if(num >= k) ans = min(ans,1LL * (rx-lx) * (uy -by));

        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
