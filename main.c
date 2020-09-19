
#include "nira.h"


//main function
int main()
{
  float n1, n2;
  int ch;

  do{
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    printf("\n*****************");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Remainder");
    printf("\n6.Power (x^y)");
    printf("\n7.Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
      case 1:
        add(n1,n2);
        break;
      case 2:
        subtract(n1,n2);
        break;
      case 3:
        multiply(n1,n2);
        break;
      case 4:
        divide(n1,n2);
        break;
      case 5:
        rem(n1,n2);
        break;
      case 6:
        power(n1,n2);
        break;
      case 7:
        printf("Thank You.");
        exit(0);
      default:
        printf("Invalid input.");
        printf("Please enter correct input.");
    }

    printf("\n**********************************\n");
  }while(1);

  return 0;
}


