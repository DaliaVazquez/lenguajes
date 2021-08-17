#include <stdio.h>
#include "compare.h"

int main(void){
    int a=10;
    int b=4;
    printf("biggest: %d\n",the_biggest(a,b));
    printf("smallest: %d\n",the_smallest(a,b));
    return 0;
}