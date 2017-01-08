#include <iostream>
#include <stdio.h>       // printf,scanf
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>  //sort,binarySearch
#include <functional> 
#include <iomanip>    // setprecision
#include <utility>    // c+11 Array
#include <set>
#include <sstream>
#include <map>
#include <bits/stdc++.h>
#define MOD 1000000007
#define PI 3.141592653589793238462643383279
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;

int main(){

    int N , L , R;

    cin >> N >> L >> R;

    int city[N+1];
    set <int> load;
    set <int> rail;

    fill(city,city+N+1,0);

    REP(i,L){
        int tmp1,tmp2;
        cin >> tmp1 >> tmp2;
        load.insert(tmp1);
        load.insert(tmp2);
    }
    REP(i,R){
        int tmp1,tmp2;
        cin >> tmp1 >> tmp2;
        rail.insert(tmp1);
        rail.insert(tmp2);
    }

    for(auto itr = load.begin(); itr != load.end(); ++itr){
        FOR(i,1,N+1){
            if(*itr == i){
                city[i]++;
            }
        }
    }

    for(auto itr = rail.begin(); itr != rail.end(); ++itr){
        FOR(i,1,N+1){
            if(*itr == i){
                city[i]++;
            }
        }
    }

    FOR(i,1,N+1){
        cout << city[i] << " ";
    }
    cout << endl;
    
    
    
    return 0;
}
