

#include <stdio.h>
#include <unistd.h>

int main() {
    int i,j,k;
    printf("Hello very big world! \n");

    i=fork();
    printf("A\n - %d",i);
    sleep(1);
    j=fork();
    printf("B\n - %d",j);
    sleep(2);
    k=fork();
    printf("D\n - %d",k);
    sleep(1);

    return(99);
}
