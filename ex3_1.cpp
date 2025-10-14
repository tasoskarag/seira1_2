#include "pzhelp"

int min_int(int a, int b) {
    int minint = a;
    if (b<a)
        minint = b; 
    return minint; 
}

int max_int(int a, int b) {
    int maxint = a;
    if (b>a)
        maxint = b; 
    return maxint; 
}

int mcd(int x, int y) {
    int minint = min_int(x,y);
    int maxint = max_int(x,y);
    if (minint == maxint)
        return minint;
    else
        return mcd(maxint-minint, minint);

}

PROGRAM {

int n = READ_INT();
SKIP_LINE();

for ( int i=1; i <= n; i++) {
    char symbol = getchar();

    int a = READ_INT(); 
    int b = READ_INT(); 
    int c = READ_INT(); 
    int d = READ_INT();
    SKIP_LINE();

    int m,n;
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

    if ((m*n)>=0)
        prod = 1;
    else 
        prod = -1;


    if ((b==0) || (d==0)) { 
        WRITELN("error");
        continue; 
    }
    else if ((symbol=='/') && (c==0)) { 
        WRITELN("error");
        continue;
    }
    
    int mcdint = mcd(abs(m),abs(n));

    WRITE(prod*abs(m)/mcdint, abs(n)/mcdint);
    }
}


