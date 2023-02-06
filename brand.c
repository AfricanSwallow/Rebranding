#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    char *str;
    char input1, input2;
    int x, y, temp;
    int map[26], alphabet[26];
    scanf("%d%d", &n, &m);
    str = (char*) malloc(sizeof(char)*(n+1));
    scanf("%s", str);
    for(int i = 0; i < 26; i++) {
        map[i] = i;
    }

    while(m--) {
        scanf(" %c %c", &input1, &input2);
        x = input1 - 'a';
        y = input2 - 'a';
        temp = map[x];
        map[x] = map[y];
        map[y] = temp;
    }

    for(int i = 0; i < 26; i++) {
        alphabet[map[i]] = i;
    }

    for(int i = 0; i < n; i++) {
        str[i] = alphabet[str[i] - 'a'] + 'a';
    }
    printf("%s\n", str);
    free(str);
}