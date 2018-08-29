#include<stdio.h>
int main(){
    enum A {foo, bar} a;
    a = foo;
    printf("%d", a);
}