#include "sum.h"
#include <stdlib.h>
#include <stdio.h>
void getArgs(float* pa, float* pb);
int main()
{
float a, b;
getArgs(&a,&b);
CLIENT *clnt;
float *result_1;
inputs arguments;
arguments.a=a;
arguments.b=b;
clnt = clnt_create("127.0.0.1",SUMPROG,SUMVER1, "udp");
result_1=sum_1(&arguments,clnt);
clnt_destroy(clnt);
printf("sum= %f\n",*result_1);
return 0;
}

void getArgs(float* pa, float *pb)
{
printf("Enter a: ");
scanf("%e", pa);
printf("\nEnter b: ");
scanf("%e",pb);
}
