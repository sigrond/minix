#include <obliczeniowy.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int mypid;
    int result;
    int i,j;
    mypid=getpid();
    result=setObliczeniowy(mypid);
    printf("proces obliczeniowy(%d): %d\n",mypid,result);
    j=1;
    for(i=1;i<1000000000;i++)
    {
        j*=i;/*bedzie wielokrotny overflow, ale to nic nie szkodzi*/
    }
    printf("koniec procesu obliczeniowego(%d): %d\n",mypid,j);
    return 0;
}
