#include <stdio.h>
#include <time.h>

int main (void)
{   
    int n;

    srand(time(0));
    n = rand() - RAND_MAX/2;

    if n > 0 {
        printf("%d is positive", n)
    }

    else{
        printf("%d is ")
    }




    return(0)
}