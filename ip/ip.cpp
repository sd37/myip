#include "../include/ip.h"
int main(int argc,char *argv[])
{
	if(argc <= 1)
	{
		printf("ip usage: Error\n");
		return 0;
	}

	string opt = argv[1];
	IpFunc ip_call;
	ip_call.make_call(opt);
return 0;
}
