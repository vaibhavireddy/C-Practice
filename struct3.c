//WAP to read and display info about laptops
#include <stdio.h>
struct laptop
{
  char company[50];
  float price;
  };
  int main()
  {
  struct laptop l;
  printf("Enter company:");
  scanf("%s",l.company);
  printf("Enter price:");
  scanf("%f",&l.price);
  //display
  printf("company of laptop=%s\n",l.company);
  printf("price of laptop=%.2f",l.price);
  return 0;
  }
