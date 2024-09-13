#include <stdio.h>
#include <string.h>
int isRotation(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return 0;
    }

    char concatenated[2 * len1 + 1];
    strcpy(concatenated, s1);
    strcat(concatenated, s1);
    if (strstr(concatenated, s2) != NULL) {
        return 1;
    }

    return 0;
    }

    int main() {
    char s1[100], s2[100];
            printf("Enter the first string: ");
            scanf("%s", s1);
            printf("Enter the second string: ");
            scanf("%s", s2);

            if (isRotation(s1, s2)) {
                printf("\"%s\" is a rotation of \"%s\"\n", s2, s1);
            } else {
                printf("\"%s\" is not a rotation of \"%s\"\n", s2, s1);
            }

            return 0;}