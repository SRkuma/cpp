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
    
    int N,K;
    int a[100000] = {};
    
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
  
    long long  mul = 1;
    int tmp = 0;
    int len = 0;
    int loop = 0;
    
    while(loop < N)
        {
            // mul == 0
            if(a[loop] == 0){
                len = N;
                break;
            }

            //skip
            if(a[loop] > K){
                loop++;
                tmp = loop;
            }else
                {
                    //Shakutori
                    if(mul * a[loop] <= K){
                        mul *= a[loop];
                        len = max(loop - tmp + 1,len);
                        loop++;
                    }else{
                        mul /= a[tmp];
                        tmp++;
                    }
                }
        }

    cout << len << endl;
    return 0;
}
