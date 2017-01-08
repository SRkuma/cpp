#include <iostream>
#include <vector>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)

using namespace std;

int main(void){

    int townN;
    cin >> townN;
    int start,goal;
    cin >> start >> goal;

    int K;
    cin >> K;

    vector <int> passTown;

    REP(i,K){
        int tmp;
        cin >> tmp;
        if(tmp == start){
            cout << "NO" << endl;
            return 0;
        }else if(tmp == goal){
            cout << "NO" << endl;
            return 0;
        }else{
            passTown.push_back(tmp);
        }
    }

    int vecSize = passTown.size();

    REP(i,vecSize){
        FOR(k,i+1,vecSize){
            if(passTown[i] == passTown[k]){
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}
