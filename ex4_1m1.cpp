#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
    
    int N;
    scanf("%d", &N);
    
    // Calculate the time taken by fun() 
    clock_t t; 
    t = clock();
    
    int power[10];
    
    for (int i = 0; i < 10; i++) {
        int p = 1;
        power[i] = pow(i, N);
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

    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 

    printf("fun() took %f seconds to execute \n", time_taken);

    return 0;
}
