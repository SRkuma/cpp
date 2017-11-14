#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  string str1,str2;
  cin >> str1 >> str2;
  REP(i,(int)str1.size()){
      if(str1[i] != str2[str1.size()-i-1]){
      cout << "NO" << endl;
      return 0;
      }
  }
  
  cout << "YES" << endl;    
  return 0;
}
