#include <iostream>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

int main(void){

    int N,M;
    cin >> N >> M;

    char A[N][N];
    char B[M][M];

    REP(i,N){
        REP(j,N){
            cin >> A[i][j];
        }
    }

    REP(i,M){
        REP(j,M){
            cin >> B[i][j];
        }
    }

    int diff = N - M +1;

    REP(i,diff){
        REP(j,diff){
            bool flag = false;
            REP(h,M){
                REP(w,M){
                    if(A[h+i][w+j] != B[h][w]){
                        flag = true;
                        break;
                    }
                }
                if(flag) break;
            }
            if(flag == false){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}
