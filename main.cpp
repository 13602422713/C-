#include <iostream>
#include "QueueTemplate.h"
#include "Test.h"
int main(void)
{
	//Queue<Test> iqueue(4);
	//Test test1(10,100);
	//Test test2(20,200);
	//Test test3(30,300);
	//Test test4(40,400);

	Queue<int> iqueue(4);
	int test1=1;
	int test2=2;
	int test3=3;
	int test4=4;

	iqueue.EnQueue(test1);
	iqueue.EnQueue(test2);
	iqueue.EnQueue(test3);
	iqueue.EnQueue(test4);

	iqueue.DeQueue();

	cout<<"queue length:"<<iqueue.getLength()<<endl;

	iqueue.printAllQueue();

	system("pause");
	return 0;
}