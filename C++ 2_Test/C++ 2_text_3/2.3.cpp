// ��дһ��C++������ʹ��3���û�����ĺ���������main()��,����������������
// Three blind mice
// Three blind mice
// See how they run
// See how they run
#include<iostream>
using namespace std;

void mice(void);
void run(void);
int main()
{
	mice();
	mice();
	run();
	run();
	return 0;
}

void mice(void)
{
	cout << " Three blind mice." << endl;
}
void run(void)
{
	cout << " See how they run." << endl;
}