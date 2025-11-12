#include "pzhelp"

PROGRAM {

    int l = READ_INT();
    int c = READ_INT();
    SKIP_LINE();

    REAL a[100][100];

    for (int k = 0; k < l; k++) {
        for (int t = 0; t < c; t++)
            a[k][t] = READ_REAL();
        SKIP_LINE();
    }

    int columnMaxMin = INT_MAX;

    for (int j = 0; j < c; j++) {
        
        int columnMax = a[0][j];

        for (int i = 1; i < l; i++) {
            if (a[i][j] > columnMax)
                columnMax = a[i][j];
        }

        if (columnMax < columnMaxMin)
            columnMaxMin = columnMax;
    }

    WRITELN(columnMaxMin);

    int rowMinMax = INT_MIN;

    for (int i = 0; i < l; i++) {
        
        int rowMin = a[i][0];

        for (int j = 1; j < c; j++) {
            if (a[i][j] < rowMin)
                rowMin = a[i][j];
        }

        if (rowMin > rowMinMax)
            rowMinMax = rowMin;
    }

    WRITELN(rowMinMax);

}
