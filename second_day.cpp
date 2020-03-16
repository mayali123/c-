#if 0
//string类型
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s = "hello ";
	int i;
	s += "world";
	cout << s << endl;
	cout << s.find('l', 4) << endl;			  //find(要找的东西,开始的位置)
	cout << s.size() << endl;
	cout << s.substr(2, 1) << endl;			  //substr(开始的位置 ,数量)截取一段
	cout << s.insert(0, "blbl") << endl;         //插入insert(开始的位置,插入的东西);
	for (i = 1; i < s.size(); i++)
	{
		cout << s[i] << "-";
	}
}
#endif

#if 0
//vector的使用  
//vector可以变长度的数组
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector  <int> v = { 1,2,34,5 }, z;
	v.push_back(20);                        //推入一个数
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	v.pop_back();							//弹出最后一个
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
//指针的使用
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
//动态内存变量
#include<iostream>
using namespace std;
int main()
{
	int* p;
	p = new int;							//申请一块int大小的内存空间
	*p = 100;
	cout << *p << '\t' << p << endl;
	delete p;								//释放p所指的那块空间
	p = new int[10];							//申请10块int大小的内存空间，并且用p指向第一个
	int i = 0;
	char* c = (char*)p;
	for (; i < 10 * sizeof(int) / sizeof(char); i++)
	{
		*c = 'A' + i;
		cout << *c << '\t';
	}
	delete[10]p;							//释放那10块空间
	return 0;
}
#endif