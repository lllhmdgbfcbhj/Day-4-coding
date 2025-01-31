//call by value
#include <stdio.h>
void modifyValue(int num);
int main() {
    int a = 10;
    printf("Before function call, value of a: %d\n", a);
    modifyValue(a);
    printf("After function call, value of a: %d\n", a);
    
    return 0;
}
void modifyValue(int num) {
    printf("Inside function, value of num: %d\n", num);
    num = 20; 
    printf("Inside function, new value of num: %d\n", num);
}
