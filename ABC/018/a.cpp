#include <iostream>
#include <algorithm>
#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

int main(void){
    
    const int N = 3;
    pair <int,int> rank[N];
    
    REP(i,N){
        cin >> rank[i].first;
        rank[i].second = i+1;
    }
    
    sort(rank,rank+N,greater<pair <int,int> >());

    int cnt = 1;
    while(cnt < 4){

        REP(i,N){
            if(cnt == rank[i].second){
                cout << i+1 << endl;
                cnt++;
                break;
            }
        }
    }
    return 0;
}
