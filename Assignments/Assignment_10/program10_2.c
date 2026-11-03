/*
    Function Name : RectangleArea
    Description   : To calculate the area of a rectangle.
    Input         : Width (iWidth) and height (iHeight).
    Output        : Returns the area of the rectangle.
    Author        : Sanskruti
    Date          : 02/11/2026
*/
#include <stdio.h>
#include <stdlib.h>

int RectArea(int iWidth, int iHeight)
{
    int iArea = 0;

    iArea = iWidth * iHeight;

    return iArea;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter width : ");
    scanf("%d", &iValue1);

    printf("Enter height : ");
    scanf("%d", &iValue2);

    iRet = RectArea(iValue1, iValue2);

    printf("Area of rectangle is : %d\n", iRet);

    return EXIT_SUCCESS;
}
