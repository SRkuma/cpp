#include <iostream>
#include <math.h>
#include <map>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;
#define MOD (int)(1e+9)+7
using namespace std;

map <int,int> mp;

int prime[168] = {  2,  3,  5,  7, 11, 13, 17, 19, 23, 29,
                    31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
                    73, 79, 83, 89, 97,101,103,107,109,113,
                    127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997};

void div(int N){

    if(N == 0) return;
    int x = N;
    for(int i = 0;i<168;++i){
        while(1){
            if(x < prime[i]) break;
            if(x % prime[i] == 0){
                x /= prime[i];
                mp[prime[i]]++;
            }else{
                break;
            }
        }
        if(x == 1)break;
    }
    div(N-1);
}


int main(void){
    
    int N;
    cin >> N;

    div(N);
    long long int ans = 1;
    for(auto it = mp.begin();it!=mp.end();++it){
        //cout << (*it).first << ":" << (*it).second << endl;
        ans *= ((*it).second+1);
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}
