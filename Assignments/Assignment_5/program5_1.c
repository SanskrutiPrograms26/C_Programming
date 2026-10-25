///////////////////////////////////////////////////////////////////
//
// Function name : FindGreatest
// Description : it is use to find greatest number
// Input : integer
// Output : void
// Author : Sanskruti Sanjay Raut
// Date : 22/10/2026
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFrist , int iSecond , int iThird)
{
  if((iFrist > iSecond) && (iFrist > iThird))
  {
    printf("Greatest number is : %d", iFrist);
  }
  else if((iSecond > iFrist) && (iSecond > iThird))
  {
    printf("Grestest number is : %d",iSecond);
  }
  else
  {
    printf("Greatest number is : %d",iThird);
  }
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    FindGreatest(iValue1 , iValue2 , iValue3);

    return EXIT_SUCCESS;

}