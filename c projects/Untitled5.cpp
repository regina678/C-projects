
#include <stdio.h>
int main()
{
    int a = 6;
    char b = 'a';
    double c = 9.7;
    printf("My name is Regina!\n");
 
    printf("I am a character. My value is %c and "
           "my size is %lu byte.\n",
           b, sizeof(char));
 
    printf("I am an integer. My value is %d and "
           "my size is %lu  bytes.\n",
           a, sizeof(int));
 
    printf("I am a double floating point variable."
           " My value is %lf and my size is %lu bytes.\n",
           c, sizeof(double));
 
    return 0;
}
