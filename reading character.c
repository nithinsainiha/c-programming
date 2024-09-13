#include <stdio.h>
int main()
{
    FILE *pp;
    char c;
    pp = fopen("nithin.txt", "r");
    c=fgetc(pp);
    printf("Character is %c\n",c);
    fclose(pp);
    return 0;
    
}
