#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,m=0;
    for(n=2;n<=1000;n++){
        if(isPrime(n)){
            printf("%5d\t",n);     /*��������ָ��ʱĬ�����Ҷ��룬δָ��ʱĬ���������*/
            m++;
            if(m%5==0)printf("\n");
        }
    }
    return 0;
}
/**
 *�жϴ�������Ƿ�Ϊ����
 */
int isPrime(int m){
    int i,flag=1;
    if(m==2)
        flag=1;
    else{
        for(i=2;i<=sqrt(m);i++){
            flag=1;
            if(m%i==0){
                flag=0;
                break;
            }
        }
    }
    return flag;
}
