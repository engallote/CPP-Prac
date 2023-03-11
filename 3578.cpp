#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    if(N == 0) cout << 1 << endl;
    else if(N == 1) cout << 0 << endl;
    else {
        if(N % 2 != 0) cout << 4;
        int num = N / 2;
            for(int i = 0; i < num; i++) cout << 8;
            cout << endl;
    }

    
    return 0;
}