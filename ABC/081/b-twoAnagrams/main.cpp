#include <iostream>
#include <algorithm>
#include <string>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  string str1,str2;
  cin >> str1 >> str2;


  sort(str1.begin(),str1.end());
  sort(str2.begin(),str2.end(),greater<int>());

  if(str1.compare(str2) < 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
    
  return 0;
}
