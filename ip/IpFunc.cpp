#include "../include/IpFunc.h"

IpFunc::IpFunc()
{
	ip_func_map.clear();
	ip_func_map.insert(make_pair("addr",&IpFunc::do_ipaddr));
	ip_func_map.insert(make_pair("monitor",&IpFunc::do_ipmonitor));
}

void* IpFunc::do_ipaddr(void*)
{
	printf("do_ipaddr\n");
	return 0;
}

void* IpFunc::do_ipmonitor(void*)
{
	printf("do_ipmonitor");
	return 0;
}

void IpFunc::make_call()
{
	(this->*ip_func_map["addr"])(NULL);
}
