#include <stdio.h>

int fun(int* a, char* s, float d) {
    int k = *a + 10;
    return k;
}

int main() {
    int n = 20;
    int res = fun(&n, (char*) "hello", 10.9);
    printf("result = %d", res);
    return 0;
}
