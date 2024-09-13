#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *name;
    name = calloc(10,4);
    name = realloc(name, 12);
    strcpy(name, "nithin");
    printf("%s\n", name);
    free(name);
    return 0;
}