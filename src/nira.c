//function for displaying the result
void display(float number1, float number2, char ch, float result)
{
  printf("%.2f %c %.2f = %.2f\n", number1, ch, number2, result);
}

//function for addition of two numbers
void add(float number1, float number2)
{
  float result = number1 + number2;
  display(number1, number2, '+', result);
}

//function for subtraction of two numbers
void subtract(float number1, float number2)
{
  float result = number1 - number2;
  display(number1, number2, '-', result);
}

//function for multiplication of two numbers
void multiply(float number1, float number2)
{
  float result = number1 * number2;
  display(number1, number2, '*', result);
}

//function for division of two numbers
void divide(float number1, float number2)
{
  float result = number1 / number2;
  display(number1, number2, '/', result);
}

//function for calculating remainder
void rem(float number1, float number2)
{
  //Modulus operator only works on int data type
  //Floating numbers are converted to int number
  int num1 = number1;
  int num2 = number2;
  int result = num1%num2;
  printf("%d %% %d = %d\n", num1, num2, result);
}

//function for calculating power
void power(float number1, float number2)
{
  if(number2<0) printf("Second number should be +ve.");
  else
  {
    float result=1.0;
    for(int i=1; i<=number2; i++)
    {
       result *= number1;
    }
    display(number1, number2, '^', result);
  }
}
