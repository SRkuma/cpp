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
#define FOR(i,a,b) for(long long int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define rFOR(i,a,b) for(long long int i=(a);i>=(b);--i)
#define rREP(i,n)  rFOR(i,n,0)
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;

int main(){

    long long int kNum, mDay, nNum;
    cin >> kNum >> mDay >> nNum;
    long long int lower[mDay+1],upper[mDay+1];
    long long int sTown[nNum+1],gTown[nNum+1];
    long long int nowTown[nNum+1];
    FOR(i,1,mDay+1){
        cin >> lower[i] >> upper[i];
        //cout << lower[i] <<" "<< upper[i] << endl;
    }
    //cout << "############" << endl;
    FOR(i,1,nNum+1){
        cin >> sTown[i] >> gTown[i];
        nowTown[i] = sTown[i];
        //cout << sTown[i] <<" "<< gTown[i] << endl;
    }

    FOR(k,1,nNum+1){
        FOR(i,1,mDay+1){
            if(lower[i] <= nowTown[k] && nowTown[k] <= upper[i]){
                if(sTown[k] < gTown[k]){
                    nowTown[k] = max(nowTown[k],upper[i]);
                    if(nowTown[k] >= gTown[k]){
                        cout << i << endl;
                        break;
                    }
                }else{
                    nowTown[k] = min(nowTown[k],lower[i]);
                    if(nowTown[k] <= gTown[k]){
                        cout << i << endl;
                        break;
                    }
                }
            }
        }
    }
    
    return 0;
}
