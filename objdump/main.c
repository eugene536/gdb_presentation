#include <stdio.h>

void foo(int first_arg) {
    long long double_local = first_arg;
    printf("%lld", double_local);
}

int main() {
    int main_local = 1;
    foo(main_local);

    return 0;
}
