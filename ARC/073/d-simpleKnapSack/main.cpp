#include <iostream>
#include <algorithm>
#include <vector>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

    int N,cap;
    cin >> N >> cap;
    int weight[N];
    int value[N];

    vector <pair <int,int> > item(N);

    REP(i,N){
        cin >> weight[i] >> value[i];
        item[i] = make_pair(weight[i],value[i]);
    }
    sort(item.begin(),item.end(),
         [](const pair<int,int> &left, const pair<int,int> &right) {
             return (left.first / left.second) < (right.first / right.second);});

    int w = 0;
    long long ans = 0;
    REP(i,N){
        if(w+item[i].first <= cap){
            w   += item[i].first;
            ans += item[i].second;
        }
    }

    cout << ans << " " << w << endl;
    
    return 0;
}
