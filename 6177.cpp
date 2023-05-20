#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <bitset>
#include <cstdlib>
using namespace std;


int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    double arr[N];
    double sum = 0;
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + N);

    double mid = arr[N / 2];
    if(N % 2 == 0) {
        mid = (arr[N / 2 - 1] + arr[N / 2]) / 2;
    }
    
    cout << fixed;
    cout.precision(6);
    cout << sum / (double)N << endl;
    cout << mid << endl;

    return 0;
}