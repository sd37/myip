#include "ipheader/ip.h"
int main(int argc,char *argv[])
{
	if(argc <= 1)
	{
		printf("ip usage:");
		return 0;
	}

	char *opt = argv[1];
	printf("%s",opt);
return 0;
}
