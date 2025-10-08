#include "pzhelp"

PROGRAM {
        REAL m = READ_REAL();
        REAL n = READ_REAL();
    SKIP_LINE();
    
        REAL w = READ_REAL();
        REAL t = READ_REAL();
    SKIP_LINE();

    int sum_numerator = (m*t + w*n); 
    int total_denominator = (n*t);
    WRITE(sum_numerator); WRITE(" "); WRITELN(total_denominator);
}
