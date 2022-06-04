#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
    string P;
    int K;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> P >> K;
    
    bool chk[K];
    std::fill_n(chk, K, false);

    chk[0] = chk[1] = true;
    bool flag = true;
    int r = 0;

    for(int i = 2; i < K; i++){
        if(chk[i]) continue;

        int ret = 0;
        for(int j = 0; P[j]; j++) ret = (ret * 10 + (P[j] - '0')) % i;

        if(ret == 0){
            flag = false;
            r = i;
            break;
        }
        for(int j = i + i; j < K; j+=i) chk[j] = true;
    }

    if(flag) cout << "GOOD";
    else cout << "BAD " << r;
    return 0;
}