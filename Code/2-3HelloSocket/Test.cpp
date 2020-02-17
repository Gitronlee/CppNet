#define WIN32_LEAN_AND_MEAN
#include<windows.h>
#include<winSock2.h>


//#pragma comment(lib, "ws2_32.lib")
//仍会报错，需要加入windows的动态链接库“ws2_32.lib”也可改为在属性、链接器、输入、附加依赖项、增加此lib
int main() 
{
	/**
	* WINSocket的启动函数，参数为一个WWORD版本版本号和一个LPWSADATA的数据结构（WSADATA）指针
	* 需要加入windows的动态链接库“ws2_32.lib”
	*/
	WORD ver = MAKEWORD(2, 2);
	WSADATA dat;

	WSAStartup(ver, &dat);

	WSACleanup();
	return 0;
}