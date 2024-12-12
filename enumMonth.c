#include <stdio.h>
enum month{jan =1, feb, march, apr, may, jun, july, aug, sep,oct,nov, dec};
int main() {
    // Write C code here
    enum month m;
    for(int i=jan; i<=dec; i++) {
        printf("%d\n", i);
    }

    return 0;
}
