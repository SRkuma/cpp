#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;
#define pb(x) push_back(x)
#define MOD 1000000007

using namespace std;

int main(){

    int W,H,N;

    cin >> W >> H >> N;

    int minX = 0;
    int minY = 0;
    
    int x,y,range;

    REP(i,N){
        cin >> x >> y >> range;
        switch(range){
        case 1 : // Less than x
            if(minX < x)
                minX = x;
            break;
        case 2 : // More than x
            if(W > x)
                W = x;
            break;
        case 3 : // Less than y
            if(minY < y)
                minY = y;
            break;
        case 4 : // More than y
            if(H > y)
                H = y;
            break;
        }
    }
    int w = (W-minX);
    int h = (H-minY);
    if(w < 0 || h < 0){
        cout << 0 << endl;
    }else{
        cout << w*h << endl;
    }
    
    return 0;
}
