#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <cmath>
using namespace std;

int fac(int n){
    int sum = 1;
    for(int i = 1; i <= n; i++) {
        sum *= i;
    }
    
    return sum;
}
double findE(int n) {
    double sum = 0;
    for(int i = 0; i <= n; i++) {
        sum += 1.0 / fac(i);
    }
    return sum;
}
int main(void) {
    // int N, e;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // cin >> N >> e;
    
    cout << "n e" << endl;
    cout << "- -----------" << endl;
    
    for(int i = 0; i <= 9; i++){
        double ret = findE(i);
        if(i == 3) {
            cout << fixed;
            cout.precision(9);
        }
        cout << i << " " << ret << endl;
    }

    return 0;
}