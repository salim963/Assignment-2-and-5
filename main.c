#include <stdio.h>
#include <stdbool.h>
bool isPrimeA(int a);
bool isPrimeB(int b);
bool isPrimeC(int c);



int main() {

    bool R0;


    int a;
    int b;
    int c;
    printf("\n  Enter a number :");
    scanf("%d", &a);
    R0 = isPrimeA(a);

    if( R0 ==true){

        printf("\n the number is a prime and it is: " "%d", a);
    }
    else{
        printf("\n the number is NOT a prime and it is: " "%d", a);
    }

    printf("\n Enter b number :");
    scanf("%d", &b);
    R0 = isPrimeB(b);
    if(R0 == true){
        printf("\n the number is a prime and it is: " "%d", b);
    }
    else{
        printf("\n the number is NOT a prime and it is: " "%d", b);
    }




    c = (int *) (a + b);
    printf("\n The result is: %d", (int) c);
    R0 = isPrimeC(c);
    if(R0 == true){
        printf("\n the result is a prime and it is: " "%d", c);
    }
    else{
        printf("\n the result is NOT a prime and it is: " "%d", c);
    }
}




bool isPrimeA(int a) {
    bool R0 = true;
    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            R0 = false;
            break;
        }
        return a;
    }

}

bool isPrimeB(int b) {
    bool R0 = true;
    for (int i = 2; i <= b / 2; i++) {
        if (b % i == 0) {
            R0 = false;
            break;
        }
        return b;
    }
}

bool isPrimeC(int c) {
    bool R0 = true;
    for (int i = 2; i <= c / 2; i++) {
        if (c % i == 0) {
            R0 = false;
            break;
        }
        return c;
    }
}
