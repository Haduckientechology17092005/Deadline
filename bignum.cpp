#include <stdio.h>
#include <string.h>

#define MAX 10000

char fib[5001][MAX];
char result[MAX];
char temp[MAX];

void addition() {
    int len1 = strlen(result);
    int len2 = strlen(temp);
    int minLen = len1 > len2 ? len2 : len1;
    int carry = 0;
    for (int i = 0; i < minLen; i++) {
        int digit = (result[i]-'0')+(temp[i]-'0')+carry;
        result[i] = (digit % 10) + '0';
        carry=digit/10;
    }
    for (int i = minLen; i < len1; i++) {
        int digit = (result[i]-'0')+carry;
        result[i] = (digit % 10) + '0';
        carry=digit/10;
    }
    for (int i = minLen; i < len2; i++) {
        int digit = (temp[i]-'0')+carry;
        result[i] = (digit % 10) + '0';
        carry=digit/10;
    }
    if (carry) result[len2] = carry + '0';
}

void fibonacci(int n) {
    if (n <= 5000 && fib[n][0] != '\0') {
        printf("%s\n", fib[n]);
        return;
    }
    if (n & 1) {
        fibonacci((n+1)/2);
        strcpy(temp, fib[(n+1)/2]);
        addition();
        fibonacci((n-1)/2);
        addition();
    } else {
        fibonacci(n/2 + 1);
        strcpy(temp, fib[n/2 + 1]);
        addition();
        fibonacci(n/2 - 1);
        addition();
    }
    fib[n][strlen(result)] = '\0';
    for (int i = 0; i < strlen(result); i++) {
        fib[n][i] = result[i];
    }
    printf("%s\n", fib[n]);
}

int main() {
    int n;
    fib[0][0] = '0';
    fib[1][0] = '1';
    for (int i = 2; i <= 5000; i++) {
        fib[i][0] = '\0';
    }
    while (scanf("%d", &n) != EOF) {
        fibonacci(n);
    }
    return 0;
}

