#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T, N, M, P;
    cin >> T;

    for(int t = 1; t <= T; t++) {
        cin >> M >> N >> P;
        int arr[M][N] = {0};
        int mx[N] = {0};
        int res = 0;

        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                cin >> arr[i][j];
                mx[j] = max(mx[j], arr[i][j]);
            }
        }

        for(int i = 0; i < N; i++) {
            if(arr[P - 1][i] >= mx[i]) continue;
            res += mx[i] - arr[P - 1][i];
        }

        cout << "Case #" << t << ": " << res << endl;
    }

    return 0;
}