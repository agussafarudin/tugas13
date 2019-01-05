#include<stdio.h>
#include<conio.h>

int c=4;
int m=3;
void lokal(){
int a=5;
int b=a+2;
printf("Lokal a=%d\n",a);
printf("Lokal b=%d\n",b);
//karena tidak ada c, maka diambil global
printf("global c=%d\n",c);

}

int main(){
int a=1;
int b=2;
int c=3;
lokal();
printf("lokal a=%d\n",a);
printf("lokal b=%d\n",b);
//walaupun global c ada, tapi c yang digunakan c yang di main
printf("lokal c=%d\n",c);
//karena idak ada m maka diambil global
printf("global m=%d\n",m);
getch();
}
