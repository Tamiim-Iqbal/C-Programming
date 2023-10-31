#include<stdio.h>
int main()
{
    int ar[5]={10,20,30,40,50};

    printf("0th index address: %p\n",&ar[0]);
    printf("0th index address: %p\n",ar);
    printf("0th index value: %d\n",ar[0]);
    printf("0th index value: %d\n",*ar);
    // ar = &ar[0]
    // *ar = ar[0]
    printf("1th index value: %d\n",ar[1]);
    printf("1th index value: %d\n",*(ar+1));
    printf("1th index value: %d\n",1[ar]);
    printf("1th index value: %d\n",*(1+ar));
    // a[x] = *(ar+x);
    // &ar[x] = (ar+x);
    return 0;
}