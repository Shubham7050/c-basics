#include <stdio.h>

int main()
{
    int m;
    printf("What is your no. \n");
    scanf("%d" , &m);
    
    if(m > 0) {
        printf("1");
    } else if (m<0) {
        
        printf("-1");
    } else printf("0");
    return 0;
}
