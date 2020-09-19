
#include "nira.h"


//main function
int main()
{
  float number1, number2;
  int ch;

  do{
    printf("Enter two numbers: ");
    scanf("%f %f", &number1, &number2);

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
        add(number1,number2);
        break;
      case 2:
        subtract(number1,number2);
        break;
      case 3:
        multiply(number1,number2);
        break;
      case 4:
        divide(number1,number2);
        break;
      case 5:
        rem(number1,number2);
        break;
      case 6:
        power(number1,number2);
        break;
      case 7:
        printf("Thank You.");
        exit(0);
      default:
        printf("Invalid input.");
        printf("Please enter correct input.");
    }

    
  }while(1);

  return 0;
}


