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

    long long N, K;
    cin >> N;
    long long arr[N + 1] = {0};
    long long sum[N + 1] = {0};

    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }

    cin >> K;

    long long res = 0;

    for (int i = N; i >= 1; i--)
    {
        int idx = 1;

        while (sum[i] - sum[idx - 1] > K && idx <= i)
        {
            idx += 1;
            res += 1;
        }
    }

    cout << res << endl;
    return 0;
}