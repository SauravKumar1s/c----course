#include <stdio.h>


int fib_recursive(int n)
{
    if (n==1 || n==2){
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursuive(n-2);
    }
    
}


int fib_iterative(int n)
{
    return 0;
}


int main()
{
    int number;
    printf("enter the index f series\n");
    scanf("%d", &number);
    printf("the value of f np at position no %d using iterative approach\n", fib_iterative(number) ); 
    printf("the value of f np at position no %d using iterative approach\n", fib_recursive(number) );
    return 0;
}