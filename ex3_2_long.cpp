#include "pzhelp"


long long min_int(long long a, long long b) {
    long minint = a;
    if (b<a)
        minint = b; 
    return minint; 
}

long long max_int(long long a, long long b) {
    long maxint = a;
    if (b>a)
        maxint = b; 
    return maxint; 
}
long long mcd(long long x, long long y) {
    long long minint = min_int(x,y);
    long long maxint = max_int(x,y);
    if (minint == maxint)
        return minint;
    else
        return mcd(maxint-minint, minint);

}

PROGRAM {

    int k = READ_INT();
    SKIP_LINE();

    for (int i=1; i <= k; i++) {
        char symbol = getchar();

        long long a = READ_INT(); 
        long long b = READ_INT(); 
        long long c = READ_INT(); 
        long long d = READ_INT();
        SKIP_LINE();

        long long m,n;
        if (symbol == '+') {
            m = a*d + b*c; 
            n = b*d;
        } else if (symbol == '-') {
            m = a*d - b*c; 
            n = b*d;
        } else if (symbol == '*') {
            m = a*c;
            n = b*d;
        } else if (symbol == '/') {
            m = a*d;
            n = b*c;
        }
            
        int prod;

        if ( m*n >= 0 )
            prod = 1;
        else 
            prod = -1;


        if ((b==0) || (d==0)) { 
            WRITELN("error");
            continue; 
        }

        if ((symbol=='/') && (c==0)) { 
            WRITELN("error");
            continue;
        }

        if (m==0) { 
            WRITELN(0,0,1);
        } else {
        
            long long mcdint = mcd(abs(m),abs(n));

            long long posnum = abs(m)/mcdint;
            long long posden = abs(n)/mcdint;

            if (prod==1) { 
                WRITELN(posnum/posden, posnum%posden, posden);
            }
            else if (prod==-1 && posnum/posden==0) {
                WRITELN("-0", posnum%posden, posden);
            } else if (prod == -1) {
                WRITE("-");
                WRITELN(posnum/posden, posnum%posden, posden);
            }
        }

    }

}


