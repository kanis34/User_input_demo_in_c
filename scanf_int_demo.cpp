#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    ///int in scanf


    ///------------------------------scanf("%d",&int_num1)------------------------------
    int int_num1;
    printf("Enter integer number(int_num1): ");
    scanf("%d",&int_num1);
    printf("%d\n",int_num1);

    ///-------------------------scanf("%3d",&int_num1)------------------------------
    int int_num2;
    printf("Enter integer number(int_num2): ");  //1234567890
    scanf("%3d",&int_num2); // if you want to print only 3 digits only from the given number
    printf("%d\n",int_num2); //123 will be output

    ///-------------------------scanf("%3d %d",&int_num3,&int_num4)------------------------------
    int int_num3, int_num4;
    printf("Enter integer number(int_num3, int_num4): ");
    scanf("%3d %d",&int_num3,&int_num4); /* scanf() won't collect input from user instead it will collect the number
                                         from above input(int_num2). But if we don't specify the 3digits and
                                         write scanf("%d %d",&int_num3,&int_num4)
                                         then scanf will collect one input(int_num4) from user*/
    printf("%d  %d\n",int_num3,int_num4); //456 7890 will be the output

    ///-------------------------scanf("%d, %d",&int_num5,&int_num6)--------------------
    int int_num5, int_num6;
    printf("Enter integer number(int_num5, int_num6): ");
    scanf("%d,%d",&int_num5,&int_num6);//the comma(,) between the format specifiers means that, while
                                        //providing input, the user can provide comma but comma will be ignored

    printf("%d %d\n",int_num5,int_num6);

    ///------------------------scanf("%d%*c %d",&int_num7,&int_num8)---------------------
    int int_num7, int_num8;
    printf("Enter integer number(int_num5, int_num6): ");
    scanf("%d%*c %d",&int_num7,&int_num8);/*%*c is used to indicate that a character should be read from the input,
                                        but it should be discarded and not stored in any variable.
                                        In this particular case, %*c is used to ignore any whitespace characters
                                        (such as spaces or newlines) or - & anything between the two integer values being read.*/

    printf("%d %d\n",int_num7,int_num8);
    return 0;
}
