#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fibonacci(int m);
    int n,fi;
    scanf("%d",&n);
    fi=fibonacci(n);
    printf("%d\n",fi);
    return 0;
}
/**
 *FibonacciÊýÁÐµÝ¹éËã·¨
 */
int fibonacci(int m){
    if(m>1)
        return fibonacci(m-1)+fibonacci(m-2);
    else if(m==1)   /*f1=1*/
        return 1;
    else            /*f0=0*/
        return 0;
}
