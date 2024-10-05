#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Muhamamd Idham Ma'arif

int masukan;
int lookup[31];

void init () {
    for (int i = 0; i < 31; i++) {
        lookup[i] = -1;
    }
}

int fib(int n) {
    if (lookup[n] == -1) {
        if (n <= 1) {
            lookup[n] = n;
        }
        else {
            lookup[n] = fib(n - 1) + fib(n - 2);
        }
    }
    return lookup[n];
}

int main() {        
    cin >> masukan;
    init();
    for (int i = 0; i < masukan; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;
    
    return 0;
}
