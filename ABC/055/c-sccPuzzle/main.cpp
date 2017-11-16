#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

//C. Scc Puzzle

//図形sと図形cの数がそれぞれ与えられる(1≦s,c≦10^12)
//cを2つ組み合わせてsを作ることができる

// "scc"がいくつ作れるかを出力する

int main(void){

  ll s, c;

  cin >> s >> c;

  ll ans = 0;

  if(s*2 <= c){
    ans += s;
    c -= s*2;
  }else{
    ans += c / 2;
    c = 0;
  }

  ans += c / 4;

  cout << ans << endl;
    
  return 0;
}
