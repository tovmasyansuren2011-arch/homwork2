#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    scanf("%d", &num);

    while (num != 0) {
        sum += num;
        scanf("%d", &num);
    }

    printf("%d\n", sum);

    return 0;
}