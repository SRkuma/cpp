#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int perm[300];

int hoge(int l, int r, int n){

    for(int i = l;i<r;++i){
        if(perm[i] < n) continue;

        perm[i] = n;
    }
    return 0;
}

int main(void){

    int N,M;
    cin >> N >> M;

    fill(perm,perm+N,3);

    int left,right,kind;
    int contra = 0;

    REP(i,M){
        cin >> left >> right >> kind;
        left--; right;
        hoge(left,right,kind);
    }

    REP(i,N){
        cout << perm[i] << endl;
    }
    
    
    
    return 0;
}
