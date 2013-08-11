#include "common.h"
class IpFunc;
typedef void* (IpFunc::*ip_f)(void*);

class IpFunc
{
	string func_name;
	map<string,ip_f> ip_func_map;
	
	public:
		IpFunc();
		void* do_ipaddr(void*);
		void* do_ipmonitor(void*);
		void make_call(const string &);
}; 
