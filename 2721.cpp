#include <iostream>
using namespace std;

int main(void) {
    int T, N;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum[350];
    sum[1] = 1;
    for(int i = 2; i <= 301; i++) {
        sum[i] = sum[i - 1] + i;
    }

    cin >> T;

    while(--T >= 0) {
        cin >> N;

        int res = 0;
        
        for(int i = 1; i <= N; i++) {
            res += sum[i + 1] * i;
        }

        cout << res << "\n";
    }

    return 0;
}