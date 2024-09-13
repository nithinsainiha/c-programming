#include <stdio.h>
int main(){
    FILE *pp;
    char c[100];
    pp=fopen("nithin.txt", "w");
    fputc('s',pp);
    fputs("udaya",pp);
    fclose(pp);
    return 0;
}
