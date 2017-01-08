#include <iostream>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
using namespace std;

int main(void){

    int day;
    int initW;
    int lowerW,upperW;

    cin >> day >> lowerW >> upperW;
    cin >> initW;

    int cnt = 0;
    if(lowerW <= initW && initW <= upperW){
        cnt++;
    }
    
    int weight = initW;
    REP(i,day-1){
        
        int amount;
        cin >> amount;
        weight += amount;
        
        if(lowerW <= weight && weight <= upperW){
            cnt++;
        }
    }
    
    cout << cnt << endl;

    return 0;
}
