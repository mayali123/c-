#if 0
//string����
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s = "hello ";
	int i;
	s += "world";
	cout << s << endl;
	cout << s.find('l', 4) << endl;			  //find(Ҫ�ҵĶ���,��ʼ��λ��)
	cout << s.size() << endl;
	cout << s.substr(2, 1) << endl;			  //substr(��ʼ��λ�� ,����)��ȡһ��
	cout << s.insert(0, "blbl") << endl;         //����insert(��ʼ��λ��,����Ķ���);
	for (i = 1; i < s.size(); i++)
	{
		cout << s[i] << "-";
	}
}
#endif

#if 0
//vector��ʹ��  
//vector���Ա䳤�ȵ�����
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector  <int> v = { 1,2,34,5 }, z;
	v.push_back(20);                        //����һ����
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	v.pop_back();							//�������һ��
	cout << endl;
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
	v.resize(2);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}
#endif

#if 0
//ָ���ʹ��
#include<iostream>
using namespace std;
int main()
{
	int a = 3, * p = &a;
	cout << a << "\t" << *p << endl;
	cout << &a << "\t" << p << endl;
	*p = 5;
	cout << a << "\t" << *p << endl;
	int t[10], * q = t;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(q + i) = 2 * i + 1;
		cout << *(q + i) << "\t";
	}
}
#endif


#if 1
//��̬�ڴ����
#include<iostream>
using namespace std;
int main()
{
	int* p;
	p = new int;							//����һ��int��С���ڴ�ռ�
	*p = 100;
	cout << *p << '\t' << p << endl;
	delete p;								//�ͷ�p��ָ���ǿ�ռ�
	p = new int[10];							//����10��int��С���ڴ�ռ䣬������pָ���һ��
	int i = 0;
	char* c = (char*)p;
	for (; i < 10 * sizeof(int) / sizeof(char); i++)
	{
		*c = 'A' + i;
		cout << *c << '\t';
	}
	delete[10]p;							//�ͷ���10��ռ�
	return 0;
}
#endif