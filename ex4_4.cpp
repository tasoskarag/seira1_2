#include "pzhelp"

PROGRAM {

    int l = READ_INT();
    int c = READ_INT();
    SKIP_LINE();

    REAL a[100][100];

    for (int k=0; k < l; k++) {
        for (int t=0; t < c; t++)
            a[k][t] = READ_REAL();
            SKIP_LINE();
    }

    REAL averagel1[100];
    REAL averagel2 = 0;

    for (int k=0; k<l; k++) {
        REAL suml = 0;
        for (int t=0; t<c; t++) {
            suml = suml + a[k][t];
        }
        averagel1[k] = suml/c;
        averagel2 = averagel2 + averagel1[k];
    }
    
    REAL averageltotal = averagel2/l;
    WRITELN(FORM(averageltotal, 0, 3));

    REAL averagec1[100];
    REAL averagec2 = 0;

    for (int t=0; t<c; t++) {
        REAL sumc = 0;
        for (int k=0; k<l; k++) {
            sumc = sumc + a[k][t];
        }
        averagec1[t] = sumc/l;
        averagec2 = averagec2 + averagec1[t];
    }
    
    REAL averagectotal = averagec2/c;
    WRITELN(FORM(averagectotal, 0, 3));
}





