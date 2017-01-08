#include <iostream>
#include <algorithm>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

int main(void){

    int a[3];
    REP(i,3){
        cin >> a[i];
    }
    sort(a,a+3);

    cout << a[1] << endl;

    return 0;
}
