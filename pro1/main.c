#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ichar;
    int i;
    for(i=0;i==0;i=func1()){
    scanf("%c",&ichar);
    if(ichar>64&&ichar<91)
        printf("Output is %c\n",ichar+32);
    else
    printf("error input!\n");
    printf("press '0' to continue;\npress others to exit.\n");
    }
    return 0;
}
/**
 *使程序持续运行
 */
int func1(){
    int i;
    char ichar;
    scanf("%d",&i);
    scanf("%c",&ichar);
    return i;
}
