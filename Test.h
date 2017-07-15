#include<iostream>
using namespace std;
class Test
{
	friend ostream &operator<<(ostream &out,Test test)
	{
		out<<test.getTest1()<<","<<test.getTest2()<<endl;
		return out;
	}
public:
	Test(int t1=0,int t2=0){m_iTest1=t1;m_iTest2 =t2;}
	int getTest1(){return m_iTest1;}
	int getTest2(){return m_iTest2;}
private:
	int m_iTest1;
	int m_iTest2;
};