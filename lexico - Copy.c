#include<stdio.h>
#include <string.h>
int main() {

    char str[100], str1[100];
    scanf("%s", str);
    scanf("%s", str1);
    int result = strcmp(str, str1);

    if (result == 0) {
        printf("the string area equal.\n");
    }else if(result < 0){
        printf("%s comes before %s lexicographically.\n", str, str1);
    }else{
        printf("%s comes after %s lexicographically.\n", str, str1);
    }
    return 0;
}