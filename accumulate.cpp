#include <iostream>
#include <vector>
#include <climits>    // INT_MAX
#include <numeric>    // accumulate
using namespace std;

int main(void){

    // vector, arrayに対するaccumulate
    vector <int> vec;
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(5);

    int hoge[3] = {100000000,200000000,2};

    cout << "INT_MAX = "   << INT_MAX << endl;
    cout << "LLONG_MAX = " << LLONG_MAX << endl;
    
    //sum
      //array
    cout << accumulate(&hoge[0],&hoge[3],0) << endl;       
      //vector
    cout << accumulate(vec.begin(),vec.end(),0) << endl;

    //mult
      //array(long longに対応)
    cout << accumulate(&hoge[0],&hoge[3],1ll,multiplies<long long>()) << endl;    
      //vector
    cout << accumulate(vec.begin(),vec.end(),1,multiplies<int>()) << endl;

    vector <string> sVec;
    sVec.push_back("fizz");
    sVec.push_back("bazz");
    sVec.push_back("foobar");

    string hogehoge[2] = {"Tohoku","University"};

    //stringのconcetenateもできる
    cout << accumulate(&hogehoge[0],&hogehoge[2],string()) << endl;
    cout << accumulate(sVec.begin(),sVec.end(),string()) << endl;
    
    return 0;
}
