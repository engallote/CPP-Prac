#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <cstdlib>
using namespace std;


int main(void) {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    
    int arr[13];
    fill_n(arr, 13, 0);

    int id;
    string birth;
    for(int i = 0; i < N; i++) {
        cin >> id;
        cin >> birth;

        int idx = birth.find('/');
        int month = 0;
        for(int j = idx + 1; j <= idx + 2; j++) {
            if(birth[j] == '/') break;
            month *= 10;
            month += birth[j] - '0';
        }

        arr[month] += 1;
    }

    for(int i = 1; i <= 12; i++) {
        cout << i << " " << arr[i] << endl;
    }

    return 0;
}