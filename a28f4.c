#include <stdio.h>
#include "simpio.h"
#include "math.h"

int get_code();
double discount_percentage(int code);
int product_points(int code , double fprice);


int main (){
int code , points;
double price , finalPrice , discount , total , discountSum ;

total = discountSum = 0;
points=0;

while(code=get_code())
{
  printf("Dose thn timh ");
  price=GetReal();

  discount=discount_percentage(code)*price;
  discountSum +=discount;
  finalPrice=price-discount;
  total+=finalPrice;
  points+=product_points(code,finalPrice);



}
printf(" --------------------\n");
printf("Teliko sunolo : %.2f Euro\n",total);
printf("Ekptwsh: %.2f Euro\n",discountSum);
printf("Pontoi:%d\n",points);


system("PAUSE");
return 0;
}

int get_code()
{
    int code ;

    while(TRUE){
    printf("Dose kwdiko\n");
    code=GetInteger();
    if(code>=0 && code<=2000)
    return code;
    printf("lathos kwdikos (0-2000\n");
    }
}

double discount_percentage(int code)
{
    if (code<=300)return 0.05;
    if (code<=500) return 0.10;
    if (code<=1000) return 0.15;
    else return 0.20;
}
int product_points(int code , double fprice)
{
    int points=1;
    if(code>=100 && code<=1500)
    {
        points+=ceil(fprice/5);

    }
    return points;
}
