#if 0
//输入和输出的使用
#include <iostream>
using namespace std;
void help()
{
	cout << "请输入两个数:\n";
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
//文件的操作
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(void)
{
	int i;
	ofstream of("text.txt");				//用ofstream 定义了一个of对象
	of << "hello \t" << 314 << "word" << "hello c++\n" << "c++ file open " << endl;
	of.close();
	string str;
	ifstream f("text.txt");				//用ifstream 定义了一个f对象
	f >> str >> i;
	cout << str << i << endl;
	return 0;
}
#endif 


#if 0
//引用变量的使用
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
	cout << "请输入两个要交换的数：" << endl;
	cin >> a >> b;
	cout << "交换之前的a=" << a << " b=" << b << endl;
	exchange(a, b);
	cout << "交换之后的a=" << a << " b=" << b << endl;
	return 0;
}

#endif 
#if 0
//函数的默认值和函数的重载
#include<iostream>
using namespace std;
void fun(int x, int n = 0)//默认的参数要靠右
{
	cout << "x=" << x << " n=" << n;
}
void fun(double x, double n)
{
	cout << "x=" << x << " n=" << n;
}
int main()
{
	fun(1);                //函数明和形参列表组成函数的签名
	cout << endl;		   //函数签名是区分不同函数的标志
	fun(2.1, 3.2);         //函数的重载
	return 0;
}
#endif 

#if 0
//cout 对++i，i++的探索
#include<iostream>
using namespace std;
int main()
{
	int i = 1;										       //从后往前压入
	cout << i << i++ << endl;						           //这个i++是把i的值压入
	cout << i++ << i << endl;                                //这个i是把i变量压入
	cout << ++i << ++i << endl;                              //这个就是把i(是i变量，不是i的值)给压入栈
	cout << ++i << i++ << i << i++ << ++i << endl;         //5 3 5 2 5
	return 0;
}
#endif 

#if 0
//函数模板 template 
#include<iostream>
#include<string>
using namespace std;
template <typename T>                               //定义了一个类型模板参数T
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