#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void) {
    int N, M;
    string pre, s;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    int res = 1;
    cin >> pre;
    for(int i = 1; i < N; i++) {
        cin >> s;
        if(res == 0) continue;
        res = 0;

        if(pre[0] == s[M - 1] || pre[M - 1] == s[0]) res = 1;
        else{
            for(int k = 1; k < M; k++){
                int j = 0;
                for(j = k; j >= 0; j--){
                    if(pre[k - j] != s[M - j - 1]) break;
                }

                if(j < 0) {
                    res = 1;
                    break;
                }

                j = 0;
                for(j = k; j >= 0; j--){
                    if(pre[M - j - 1] != s[k - j]) break;
                }

                if(j < 0) {
                    res = 1;
                    break;
                }
            }
        }

        pre = s;
    }

    cout << res;

    return 0;
}