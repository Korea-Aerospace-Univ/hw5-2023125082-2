#include <stdio.h>

int main(void) {
    int N;
    bool found;

    scanf("%d", &N);

    found = false;

    for (int a = 1; a * 900 <= N - 750 - 200; a++) {
        for (int b = 2; a * 900 + b * 750 <= N - 200; b += 2) {
            for (int c = 1; a * 900 + b * 750 + c * 200 <= N; c++) {
                if (a * 900 + b * 750 + c * 200 == N) {
                    if (c < a || c < b) {
                        printf("%d %d %d\n", a, b, c);
                        found = true;
                    }
                }
            }
        }
    }

    if (!found) {
        printf("none\n");
    }

    return 0;
}
