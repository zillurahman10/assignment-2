#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = n - 1 - (n % 2); i >= 0; i -= 2) {
        printf("%d ", a[i]);
    }
    return 0;
}
