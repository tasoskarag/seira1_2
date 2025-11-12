// Necessary header files for input output functions
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <time.h>
using namespace std;

void search(int pownum) {
    int powers[10];
    for (int i = 0; i < 10; i++) {
        powers[i] = pow(i, pownum);
    }

    long long maxsum = powers[9] * 8;
    int digits[10] = {0};
    long long int sum = 0;
    long long number=0;
    //scan all the possible numbers
    //no optimized here
    for (int a0 = 0; a0 < 10; a0++) {   
        for (int a1 = 0; a1 < 10; a1++) {          
            for (int a2 = 0; a2 < 10; a2++) {                
                for (int a3 = 0; a3 < 10; a3++) {
                    for (int a4 = 0; a4 < 10; a4++) {
                        for (int a5 = 0; a5 < 10; a5++) {
                            for (int a6 = 0; a6 < 10; a6++) {
                                for (int a7 = 0; a7 < 10; a7++) {

                                     //it is a different number, so reset the digit counts
                                    memset(digits, 0, sizeof(digits));
                                    digits[a0] = 1;
                                    digits[a1] = digits[a1] + 1;
                                    digits[a2] = digits[a2] + 1;
                                    digits[a3] = digits[a3] + 1;
                                    digits[a4] = digits[a4] + 1;
                                    digits[a5] = digits[a5] + 1;
                                    digits[a6] = digits[a6] + 1;
                                    digits[a7] = digits[a7] + 1;

                                    //Now get the digits that are sorted in order to use previous sums
                                    number = a0 * 10000000 + a1 * 1000000 + a2 * 100000 + a3 * 10000 + a4 * 1000 + a5 * 100 + a6 * 10 + a7;  
                                
                                    // calculate the sum of the digits
                                    sum = 0;
                                    for (int d = 0; d < 10; d++) {
                                        sum += digits[d] * powers[d];
                                    }

                                    if (number > maxsum) {
                                        return;
                                    }
                                    
                                    if (sum == number) {
                                        cout << number << endl;
                                    }     
                                    
                                   
                                   
                                }

                            }
                        }
                    }

                }   
            }    
        }
    }
}

// main() function: where the execution of
// C++ program begins
int main() {

    //get the power
    // Declare the variables
    int pownum;

    // Input the integer
    cin >> pownum;

    // Calculate the time taken by fun() 
    clock_t t; 
    t = clock(); 

    search(pownum); 

    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 

    printf("fun() took %f seconds to execute \n", time_taken); 
    return 0;
}
