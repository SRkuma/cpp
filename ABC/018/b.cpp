#include <iostream>
#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

int main(void){

    string str;
    int N;
    cin >> str >> N;

    REP(i,N){
        int first,last;
        cin >> first >> last;
        first--;
        last--;
        string tmp = str.substr(first,last-first+1);

        for(int k = last;k >= first; k--){
            tmp[last-k] = str[k];
        }
        FOR(k,first,last+1){
            str[k] = tmp[k-first];
        }
    }
    cout << str << endl;
    
    return 0;
}
