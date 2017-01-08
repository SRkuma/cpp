#include <iostream>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

int main(void){

    string str;
    cin >> str;

    int  cnt = 1;
    REP(i,str.size()-1){
        
        if(str[i] == str[i+1]){
            cnt++;
        }else{
            cout << str[i] << cnt;
            cnt = 1;
        }
        
    }
    cout << str[str.size()-1] << cnt << endl;
    return 0;
}
