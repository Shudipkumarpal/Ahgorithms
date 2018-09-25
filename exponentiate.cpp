
#include<stdio.h>
int main()
{
    int m,n,z,power,x;
    m=n;
    power=1;
    z=x;
    while(m>0)
    {
        while((m%2)==0)
        {
            m=m/2;
            z=z*z;
            m=m-1;
            power=power*z;
        }
    }
    return 0;

}
