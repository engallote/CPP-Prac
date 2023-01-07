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

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 5 * N; j++) cout << "@";
        cout << endl;
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) cout << "@";
        cout << endl;
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 5 * N; j++) cout << "@";
        cout << endl;
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) cout << "@";
        cout << endl;
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 5 * N; j++) cout << "@";
        cout << endl;
    }

    return 0;
}