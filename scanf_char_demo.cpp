#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    ///character array(string)
//    char s1[20], s2[20];
//    printf("Enter 2 strings: ");
//    scanf("%s %s",s1,s2); //%s takes input until it finds a whitespace
//    printf("%s %s\n",s1,s2);

    ///----------------------------- scanf("%c%c",&a,&b)-----------------------------
    char a, b, c, d;
    printf("Enter 2 character: "); //space matters between '%c%c'
    scanf("%c%c",&a,&b);//while taking input you can't provide space like 'z y',you have to write 'zy'
    printf("%c %c\n",a,b);//Input:'z y', ouput: z (whitespace will be count as one input)
                        //Input:'zy', ouput: z y

    getchar(); /*The getchar() function is used to consume the newline character left in the input buffer
             after the first scanf statement, which was causing the issue with the second scanf statement.*/

    ///------------------------------ scanf("%c %c",&c,&d)-----------------------------
    printf("Enter 2 character: ");
    scanf("%c %c",&c,&d); //while taking input you can provide space like 'z y'
    printf("%c %c\n",c,d);

    ///------------------------------- scanf("%3s %s",s3,s4)-------------------------
    char s3[20], s4[20];
    printf("Enter 2 strings: ");
    scanf("%3s %s",s3,s4);
    printf("%s %s\n",s3,s4);//input: hello, output: hel lo

    getchar();
    ///-------------------------------- scanf("%[^\n]s",s)----------------------------
    char s5[20];
    printf("Enter a string: ");
    scanf("%[^\n]s",s5);//it takes input until finding a new line, and also takes whitespaces
    printf("%s\n",s5);//input: hello world! output: hello world!

    getchar();
    ///-------------------------------- scanf("%[^\n]%*c",s)----------------------------
    char s6[20];
    printf("Enter a string: ");
    scanf("%[^\n]%*c",s6);/*Here, [] is the scanset character. ^\n tells to take input until newline
                            doesn’t get encountered. Then, with this %*c, The %*c portion after the string
                            specifies that the newline character should be read but discarded (the * means
                            to ignore the value being read).*/
    printf("%s",s6);
    return 0;
}
