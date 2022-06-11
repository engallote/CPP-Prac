#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
    int N;
    char ch[1000001];
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> ch;
    
    int res = 0;
    for(int i = 0; i < N; i++){
        if(ch[i] == 'p'){
            if(i + 3 < N && ch[i + 1] == 'P' && ch[i + 2] == 'A' && ch[i + 3] == 'p') {
                res += 1;
                i += 3;
            }
        }
    }

    cout << res;
    return 0;
}