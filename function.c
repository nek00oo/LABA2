#include <stdio.h>
int factorial(int a){
    if(a == 1) return 1;
    return a * factorial(a-1);

}
int NOD(int a, int b){
    while (a > 0 && b > 0){
        if (a > b){
            a %= b;
        } else{
            b %= a;
        }
    }
    return a + b;
}

int main(int argc, char* argv[]){
    int num, a, b;
    scanf("%d %d %d",&num, &a , &b);
    printf("%d", factorial(num));
    printf("%d", NOD(a, b));

    return 0;
}
