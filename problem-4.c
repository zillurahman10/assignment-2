#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > 0) {
            pos = pos + v[i];
        } else if (v[i] < 0) {
            neg = neg + v[i];
        }
    }
    printf("%d ", pos);
    printf("%d ", neg);
    return 0;
}
