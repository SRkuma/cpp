#include <iostream>
#include <math.h>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int N;
  cin >> N;
  long long ans = 0;
  FOR(i,0,N+1){
    ans = (i+1)*(i+1);
    if(ans > N){
      cout << i*i << endl;
      return 0;
    }
  }
  
  return 0;
}
