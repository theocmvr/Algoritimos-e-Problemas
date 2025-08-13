#include <stdio.h>
#include <string.h>
int main() {
    char str1[21], str2[21];
    int dif;
    scanf("%s", str1);
    getchar();
    scanf("%s", str2);
    dif = strcmp(str1, str2);
    if (dif < 0){
        printf("%s\n%s\n", str1, str2);
    } else {
        printf("%s\n%s\n", str2, str1);
    }
    return 0;
}