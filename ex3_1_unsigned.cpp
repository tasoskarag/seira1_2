#include "pzhelp"

unsigned int min_int(unsigned int a, unsigned int b) {
    unsigned int minint = a;
    if (b<a)
        minint = b; 
    return minint; 
}

unsigned int max_int(unsigned int a, unsigned int b) {
    unsigned int maxint = a;
    if (b>a)
        maxint = b; 
    return maxint; 
}

unsigned int mcd(unsigned int x, unsigned int y) {
    unsigned int minint = min_int(x,y);
    unsigned int maxint = max_int(x,y);
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

        unsigned int a = READ_INT(); 
        unsigned int b = READ_INT(); 
        unsigned int c = READ_INT(); 
        unsigned int d = READ_INT();
        SKIP_LINE();

        unsigned int m;
        unsigned int n;
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
            

        if ((b==0) || (d==0)) { 
            WRITELN("error");
            continue; 
        }

        if ((symbol=='/') && (c==0)) { 
            WRITELN("error");
            continue;
        }

        if (m==0) 
            WRITELN(0,1); 
        else {
            unsigned int mcdint = mcd(m,n);
            WRITELN(m/mcdint, n/mcdint);
        }
        

    }

}


