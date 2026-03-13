#include <stdio.h>

int main() {
    int n = 121, rev = 0, temp;

    temp = n;

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
