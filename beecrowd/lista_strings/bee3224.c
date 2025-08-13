#include <stdio.h>
#include <string.h>
int main() {
    char str1[1001], str2[1001];
    int size1, size2;
    scanf("%s", str1);
    getchar();
    scanf("%s", str2);
    size1 = strlen(str1);
    size2 = strlen(str2);
    if (size1 >= size2){
        printf("go\n");
    } else {
        printf("no\n");
    }
    return 0;
}