#include "../include/ip.h"
int main(int argc,char *argv[])
{
	if(argc <= 1)
	{
		printf("ip usage:\n");
		return 0;
	}

	char *opt = argv[1];
	printf("%s\n",opt);
return 0;
}
