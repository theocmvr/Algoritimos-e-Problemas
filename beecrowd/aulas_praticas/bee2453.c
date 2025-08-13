#include<stdio.h>
#include<string.h>
int main(){
    char  original[1001], final[1001];
    int i = 0, j = 0;
    scanf("%[^\n]", original);
    while (original[i] != '\0'){
        if (original[i] == ' '){
            final[j] = ' ';
            i++;
            j++;
        } else {
            i++;
            final[j] = original[i];
            j++;
            i++;
        }
    }
    final[j] = '\0';
    printf("%s\n", final);
    return 0;
}