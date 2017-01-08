#include <iostream>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)

using namespace std;

int flower[100001];

int main(){

    int N;
    cin >> N;

    int cnt = 0;
    int loc;

    REP(i,N){
        cin >> loc;
        if(flower[loc] > 0){
            cnt++;
        }
        flower[loc]++;
    }
    cout << cnt << endl;
    
    return 0;
}
