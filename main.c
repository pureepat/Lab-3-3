#include<stdio.h>
#include<math.h>
int main (void) 
{
 float r, h, ans;
 printf("Enter R :");
 scanf("%f",&r);
 printf("Enter H :");
 scanf("%f",&h);
 ans = (2 * 3.14 * r)*h+2*(3.14*pow(r,2));
 printf("Answer = %0.3f",ans);
}