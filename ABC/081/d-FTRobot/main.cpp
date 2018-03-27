#include <iostream>
#include <set>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int x,y;
bool dpx[8000][8000];
bool dpy[8000][8000];
pair<int,bool> distTurnArr[8000];

int main(void){

  string order;
  cin >> order;

  int ansX,ansY;
  cin >> ansX >> ansY;

  int tCount = 0;
  int dist = 0;

  REP(i,(int)order.size()){
    if(order[i] == 'F'){
      dist++;
    }else{
      distTurnArr[tCount] = make_pair(dist,true);
      tCount++;
      dist = 0;
    }
    if((i+1) == (int)order.size()){
      distTurnArr[tCount] = make_pair(dist,false);
    }
  }

  REP(i,tCount+1){
    if(i == 0){
      int distX = distTurnArr[i].first;
      int distY = distTurnArr[i+1].first;
      dpx[i][distX] = true;
      if(distTurnArr[i].second)
        dpy[i][distY] =
    }

    cout << distTurnArr[i].first << distTurnArr[i].second << endl;
  }

    
  return 0;
}
