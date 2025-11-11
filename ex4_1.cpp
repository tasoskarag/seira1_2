#include <stdio.h>

int main() {
    
    int N;
    scanf("%d", &N);

    int power[10];
    
    for (int i = 0; i < 10; i++) {
        int p = 1;
        for (int j = 0; j < N; j++) p *= i;
            power[i] = p;
    }

    int limit = 8 * power[9];
    if (N>0)
        printf("%d\n", 0);

    for (int n = 1; n <= limit; n++) {
        int temp = n, sum = 0;
        
        while (temp > 0) {
            int digit = temp % 10;
            sum += power[digit];
            temp /= 10;
        }
        
        if (sum == n)
            printf("%d\n", n);
    }
    return 0;
}
