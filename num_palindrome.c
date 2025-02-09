// Online C compiler to run C program online
#include <stdio.h>
int reverse(int n, int rev, int org) {
    if(n==0) {
        return org == rev;
    } else {
        rev = rev*10 +n%10;
        return reverse(n/10, rev, org);
    }
}

int main() {
    int n = 12321;
    if(reverse(n, 0, n)){
        printf("the number is palindrome");
    } else printf("the number is not palindrome");

    return 0;
}
