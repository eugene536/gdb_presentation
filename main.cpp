#include <iostream>
#include <cstdio>
#include <cassert>
#define N 1000000

using namespace std;

double a[N];
int global = 10;

int foo(int n) {
    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (i > 5) {
            res += i;
        }
    }
    return res;
}

int d(float b) {
    cout << b << endl;
    return 0;
}

void f3() {
    assert(false);
}

void f2() {
    f3();
}

void f1() {
    f2();
}

int main() {
    int n = 4;
    int res = foo(n);
    f1();
    srand(time(NULL));

    for (int i = 0; i < N; ++i) {
        a[i] = 1.001;
    }

    d(1.01);
    assert(a[0] == 0);
    printf("%d", res);
    return 0;
}
