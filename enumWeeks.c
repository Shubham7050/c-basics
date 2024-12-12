#include<stdio.h> 
enum weekdays{Sunday =1, Monday, Tuesday, Wednesday,Thrusday, Friday, Saturday};
int main() {
    enum weekdays w;
    w = Sunday;
    for(int i=w; i<=Saturday; i++) {
        printf("%d", i );
    }
    return 0;
}
