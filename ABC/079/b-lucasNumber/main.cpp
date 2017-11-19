#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

long long lucas(long long N, long long res1, long long res2){

  if(N == 0) return res1;
  if(N == 1) return res2;

  return lucas(N-1,res2,res1+res2);
}

int main(void){

  int N;
  cin >> N;

  cout << lucas(N,2,1) << endl;
    
  return 0;
}
