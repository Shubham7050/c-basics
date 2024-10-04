#include <stdio.h>

int main()
{
    int m, p, c;
    printf("Physics marks : ");
    scanf("%d" , &p);
    printf("Maths marks : ");
    scanf("%d" , &m);
    printf("Chemistry marks : ");
    scanf("%d" , &c);
    
    if(m>= 65 && p>= 55 && c>=50) {
        if(m+p+c >= 190 || m+p >= 140) {
            printf("You're Eligible");
        } else printf("You aren't Eligible");
    } else printf("You aren't Eligible");
    
}
