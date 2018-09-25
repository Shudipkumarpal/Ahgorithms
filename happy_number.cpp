# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <stdbool.h>
int SumOfSquNum(int givno)
{
    int SumOfSqr = 0;
    while (givno)
    {
        SumOfSqr += (givno % 10) * (givno % 10);
        givno /= 10;
    }
    return SumOfSqr;
}
bool checkHappy(int chkhn)
{
    int slno, fstno;
    slno = fstno = chkhn;
    do
    {
        slno = SumOfSquNum(slno);
        fstno = SumOfSquNum(SumOfSquNum(fstno));
    }
    while (slno != fstno);
    return (slno == 1);
}
int main()
{
int j,ctr;
	printf("\n\n Find the Happy numbers between 1 to 50: \n");
	printf(" ----------------------------------------------\n");
	printf(" The happy numbers between 1 to 50 are: ");

 for (j=1;j<=50;j++)
		{
			if (checkHappy(j))
				printf("%d ",j);
		}
printf("\n");
 }
