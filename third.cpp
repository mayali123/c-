#if 0
//�ṹ���ʹ��
#include<iostream>
#include<string>
#define N 5
using namespace std;
struct student {
	string name;
	int score;
};
void fun1(student*p)
{
	double s=0;
	int max = p->score, min = p->score;
	int i = 1;
	for (; i < N; i++)
	{
		if ((p + i)->score > max)
			max = (p + i)->score;
		if ((p + i)->score < min)
			min = (p + i)->score;
		s += 1.0*(p + i)->score / N;
	}
	cout << "average=" << '\0' << '\t'<<"max=" << '\0' << '\t'<<"min=" << min <<"\tmax"<< endl;
}
void fun(string* p, int* q, student*m)
{
	int i = 0;
	for (; i < N; i++)
	{
		(m+i)->name = p[i];
		(m+i)->score = q[i];
	}
	i = 0;
	for (; i < N; i++)
	{
		cout << (m + i)->name << '\t' << (m + i)->score << endl;
	}
}
int main()
{
	int a = 0;
	student s[N];
	string name[N] = {"С��","С��","С��","С��","С��"};
	int score[N] = {90,85,99,88,77};
	fun(name,score,s);
	fun1(s);
}
#endif 


#if 0
//�ṹ���vector��ʹ��
//��Ϊ���������˾Ͷ������  iterator(������)��ʹ��
#include<iostream>
#include<vector>
#include<string>
#define N 5
using namespace std;
struct student {
	string name;
	int score;
};

void fun1(vector<student>* p)                  //��pָ��s����
{
	double s = 0;
	vector<student>::iterator it = p->begin();       //����һ��������it 
	int max = it->score, min = it->score;
	for (vector<student>::iterator it = p->begin(); it != p->end(); it++)
	{
		if (it->score > max)
			max = it->score;
		if (it->score < min)
			min = it->score;
		s += 1.0 * it->score /p->size();
	}
	cout << "average=" << s << '\t' << "max=" << max << '\t' << "min=" << min  << endl;
}
int main()
{
	int a = 0;
	vector<student> s,*p;
	student std;
	while(1)
	{
		cout << "��ֱ��������ֺͳɼ���" << endl;
		cin >> std.name >> std.score;
		if (std.score < 0)
			break;
		s.push_back(std);
	}
	for (int i=0 ;i<s.size();i++)
	{
		cout << "���֣�" << s[i].name << "\t�ɼ�" << s[i].score << endl;
	}
	fun1(&s);
	p = &s;
	for (vector<student>::iterator it = p->begin(); it != p->end(); it++)
		cout << it->name <<it->score<< endl;
}
#endif 


#if 0
//��class����
#include<iostream>
#include<string>
using namespace std;
class student {
	string name;						//˽�е�name��score
	int score;
public:
	void get_name(string str);
	void get_score(int i);
	string return_name();
	int return_score();
};
void  student::get_name(string str)
{
	name = str;
}
void student::get_score(int i)
{
	score = i;
}
string student::return_name()
{
	return name;
}
int student::return_score()
{
	return score;
}
int main()
{
	student su;
	su.get_name("�");
	su.get_score(88);
	cout << su.return_name() << '\t' << su.return_score() << endl;
	return 0;
}

#endif 

#if 0
//Ĭ��   ���캯��
#include<iostream>
#include<string>
using namespace std;
class student {
	string name;						//˽�е�name��score
	int score;
public:
	student(string str,int i)
	{
		name = str;
		score = i;
		cout << "���캯��\n";
	}
	void get_name(string str);
	void get_score(int i);
	string return_name();
	int return_score();
};
void  student::get_name(string str)
{
	name = str;
}
void student::get_score(int i)
{
	score = i;
}
string student::return_name()
{
	return name;
}
int student::return_score()
{
	return score;
}
int main()
{
	student su("�",88);								//ͨ�����캯��
	cout << su.return_name() << '\t' << su.return_score() << endl;
	return 0;
}
#endif