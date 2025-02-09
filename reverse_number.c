// Online C compiler to run C program online
#include <stdio.h>
int reverse(int org, int rev) {
    if(org==0) {
        return rev;
    } else {
        rev = rev*10 +org%10;
        return reverse(org/10, rev);
    }
}

int main() {
    int n = 12345;
    printf("%d", reverse(n, 0));

    return 0;
}
