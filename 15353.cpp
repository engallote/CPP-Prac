#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void) {
    string A, B;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> B;
    int aIdx = A.length() - 1, bIdx = B.length() - 1, carry = 0;
    vector<int> v;
    v.clear();

    while(aIdx >= 0 && bIdx >= 0) {
        int sum = (A[aIdx] - '0') + (B[bIdx] - '0');
        sum += carry;
        carry = 0;

        if(sum >= 10) {
            carry = 1;
            sum %= 10;
        }

        aIdx -= 1;
        bIdx -= 1;
        v.push_back(sum);
    }

    while(aIdx >= 0) {
        int num = A[aIdx] - '0';
        num += carry;
        carry = 0;

        if(num >= 10) {
            num %= 10;
            carry = 1;
        }

        aIdx -= 1;
        v.push_back(num);
    }

    while(bIdx >= 0) {
        int num = B[bIdx] - '0';
        num += carry;
        carry = 0;

        if(num >= 10) {
            num %= 10;
            carry = 1;
        }
        
        bIdx -= 1;
        v.push_back(num);
    }

    if(carry > 0) v.push_back(1);

    for(int i = v.size() - 1; i >= 0; i--) cout << v[i];

    return 0;
}