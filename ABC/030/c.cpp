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

int main(void){

    const int N = 100000;
    int Anum,Bnum;
    int Atime,Btime;

    int Aplane[N],Bplane[N];

    fill(Aplane,Aplane+N,0);
    fill(Bplane,Bplane+N,0);
 
    cin >> Anum >> Bnum >> Atime >> Btime;

    REP(i,Anum){
        cin >> Aplane[i];
    }
    
    REP(i,Bnum){
        cin >> Bplane[i];
    }

    int now = Aplane[0]+Atime;
    int go = true;
    int cnt = 0;

    int i = 0;
    int j = 0;
    
    while(i!= Anum && j != Bnum){
        
        
        while(!go && i != Anum){
            if(Aplane[i] >= now){
                now = Aplane[i] + Atime;
                go = true;
            }
            i++;
        }
        
        while(go && j != Bnum){
            if(Bplane[j] >= now){
                now = Bplane[j] + Btime;
                cnt++;
                go = false;
            }
            j++;
        }

    }

    cout << cnt << endl;
        
    return 0;
}
