#if 0
//����������ʹ��
#include <iostream>
using namespace std;
void help()
{
	cout << "������������:\n";
}

int main()
{
	while (1)
	{
		help();
		int a, b;
		char c;
		cin >> a >> c >> b;
		if (c == '+')
			cout << a + b;
		else if (c == '-')
			cout << a - b;
		else if (c == '/')
			cout << a / b;
		else if (c == '*')
			cout << a * b;
		cout << endl;
	}
}
#endif


#if 0
//�ļ��Ĳ���
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(void)
{
	int i;
	ofstream of("text.txt");				//��ofstream ������һ��of����
	of << "hello \t" << 314 << "word" << "hello c++\n" << "c++ file open " << endl;
	of.close();
	string str;
	ifstream f("text.txt");				//��ifstream ������һ��f����
	f >> str >> i;
	cout << str << i << endl;
	return 0;
}
#endif 


#if 0
//���ñ�����ʹ��
#include<iostream>

using namespace std;
void exchange(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
int main()
{
	int a, b;
	cout << "����������Ҫ����������" << endl;
	cin >> a >> b;
	cout << "����֮ǰ��a=" << a << " b=" << b << endl;
	exchange(a, b);
	cout << "����֮���a=" << a << " b=" << b << endl;
	return 0;
}

#endif 
#if 0
//������Ĭ��ֵ�ͺ���������
#include<iostream>
using namespace std;
void fun(int x, int n = 0)//Ĭ�ϵĲ���Ҫ����
{
	cout << "x=" << x << " n=" << n;
}
void fun(double x, double n)
{
	cout << "x=" << x << " n=" << n;
}
int main()
{
	fun(1);                //���������β��б���ɺ�����ǩ��
	cout << endl;		   //����ǩ�������ֲ�ͬ�����ı�־
	fun(2.1, 3.2);         //����������
	return 0;
}
#endif 

#if 0
//cout ��++i��i++��̽��
#include<iostream>
using namespace std;
int main()
{
	int i = 1;										       //�Ӻ���ǰѹ��
	cout << i << i++ << endl;						           //���i++�ǰ�i��ֵѹ��
	cout << i++ << i << endl;                                //���i�ǰ�i����ѹ��
	cout << ++i << ++i << endl;                              //������ǰ�i(��i����������i��ֵ)��ѹ��ջ
	cout << ++i << i++ << i << i++ << ++i << endl;         //5 3 5 2 5
	return 0;
}
#endif 

#if 0
//����ģ�� template 
#include<iostream>
#include<string>
using namespace std;
template <typename T>                               //������һ������ģ�����T
T add(T x, T y)
{
	return x + y;
}

int main()
{
	string s;
	//s=add<double>(3.4,5.5);
	// s= add<int>(2,5);
	s = add<string>("hello ", "world!!");
	cout << s << endl;
}
#endif