#include "pzhelp" 

void hello () {   
    WRITELN("hello world"); 
} 

PROGRAM {   
    WRITE("Give number of greetings then press <enter>: ");   
    int n = READ_INT();   
    if (n < 0) 
        WRITELN("The number", n, "is negative");
    else       
        for (int i = 0; i < n; i++) 
            hello(); 
} 