#define WIN32_LEAN_AND_MEAN
#include<windows.h>
#include<winSock2.h>


//#pragma comment(lib, "ws2_32.lib")
//�Իᱨ����Ҫ����windows�Ķ�̬���ӿ⡰ws2_32.lib��Ҳ�ɸ�Ϊ�����ԡ������������롢������������Ӵ�lib
int main() 
{
	/**
	* WINSocket����������������Ϊһ��WWORD�汾�汾�ź�һ��LPWSADATA�����ݽṹ��WSADATA��ָ��
	* ��Ҫ����windows�Ķ�̬���ӿ⡰ws2_32.lib��
	*/
	WORD ver = MAKEWORD(2, 2);
	WSADATA dat;

	WSAStartup(ver, &dat);

	WSACleanup();
	return 0;
}