#include "pzhelp"

PROGRAM {
    WRITE("First numerator is: ");
    REAL first_numerator = READ_REAL();
    SKIP_LINE();
    WRITE("First denominator is: ");
    REAL first_denominator = READ_REAL();
    SKIP_LINE();
    REAL fraction_1 = first_numerator/first_denominator; 
    WRITELN("First fraction is: ", fraction_1);

    WRITE("Second numerator is: ");
    REAL second_numerator = READ_REAL();
    SKIP_LINE();
    WRITE("First denominator is: ");
    REAL second_denominator = READ_REAL();
    SKIP_LINE();
    REAL fraction_2 = second_numerator/second_denominator; 
    WRITELN("Second fraction is: ", fraction_2);

    REAL total_sum = fraction_1 + fraction_2;
    WRITELN("Total sum is: ", total_sum);
}