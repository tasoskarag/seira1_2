#include "pzhelp"

PROGRAM {

int l = READ_INT();
SKIP_LINE();

char a[100][22];
int h[100];
int sum = 0;
    
    for (int i=0; i<l; i++) { 
        // scanf("%21s", a[i]); 
        fgets(a[i], 22, stdin);
        // SKIP_LINE();
        
        int len = strlen(a[i]);

        if(len>20) {
            h[i]=-1;
            a[i][20]='\0';
            fseek(stdin,0,SEEK_END);
        }  
        else 
            a[i][len-1] = '\0'; 
    }

        for (int i=0; i<l; i++) {
            int length = strlen(a[i]);
            int x = length/2;
        
            if(length==0) {  
            WRITELN("empty");
            continue;
            }

            if(h[i] == -1) {  
            WRITELN("error");
            continue;
            }

            for (int j=0; j<x; j++) {  
                if (a[i][j]==a[i][length-1-j])
                    h[i] = 1; 
                else h[i]=0;
            }
             
            if (h[i]==1) {
                sum = sum + 1;
                WRITELN("yes");
            }
            else if (h[i]==0) WRITELN("no");
            else if (h[i]==-1) WRITELN("error");
        }
        
        double g = sum*100/l;
        if (l>0) WRITELN(FORM(g, 0, 3));
}