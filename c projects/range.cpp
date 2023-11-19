#include <stdio.h>
int getnumber();    

int main() 
{

    int input = 0;
    input = getnumber();
    
    while (!((input <= 999) && (input >= 100)))
	 {
        printf("[Exit] The number you entered is out of range");
        //input another number
        input = getnumber();
    }
    
    printf("
    The number you entered is %d", input);
}     

{
  int n, r = 0;

  printf("Enter a number to reverse\n");
  scanf("%d", &n);

  while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }

  printf("Reverse of the number = %d\n", r);

  return 0;
}
