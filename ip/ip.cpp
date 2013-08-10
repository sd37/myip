#include "../include/ip.h"
int main(int argc,char *argv[])
{
	if(argc <= 1)
	{
		printf("ip usage: Error\n");
		return 0;
	}

	char *opt = argv[1];
	IpFunc ip_call;
	ip_call.make_call();
return 0;
}
