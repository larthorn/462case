#include <rpc/rpc.h>
#include "sum.h"
#include <stdio.h>
static float total;
float *sum_1(inputs* pinputs,CLIENT *client)
{
	float a=(*pinputs).a;
	float b=(*pinputs).b;
	total=a+b;
	return(&total);
}
float* sum_1_svc(inputs* pinputs, struct svc_req *svc)
{
	CLIENT *client;
	return(sum_1(pinputs,client));
}
