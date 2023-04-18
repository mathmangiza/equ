#include <stdio.h>
int e1;
float a1 ,b1, a2,b2 ;
float x,y,detc  ;
float  c1 ,c2;
void scan(){ 
printf("a1:\n");
scanf("%f",&a1);
printf("b1:\n");
scanf("%f",&b1);
printf("a2\n");
scanf("%f",&a2);
printf("b2: \n");
scanf("%f",&b2);
printf("c1:\n");
scanf("%f",&c1);
printf("c2:\n");
scanf("%f",&c2);
if (a1==a2 && b1==b2 && c1==c2){
e1=1;
}};
void det(){
detc=(a1*b2)-(a2*b1);}
void res(){
float a3=a1;
a1=(b2)/detc;
b2=a3/detc;
b1=-b1/detc;
a2=-a2/detc;
/*return 0;*/}
void sol(){
if (e1){
printf("two equations are the same equation! or there are no solution \n");
}else{
y=(a2*c1)+(b2*c2);
x=(a1*c1)+(b1*c2);
printf("SS. is {(%0.f , %0.f)}\n",x,y);}}
int main(){
scan();
det();
res();
sol();
return 0;}







