#ifndef _QUEUETEMPLATE_H
#define _QUEUETEMPLATE_H
#include <iostream>
#include <string>

using namespace std;
template<typename T>
class Queue
{
public:
	Queue(int length);//Create queue
	~Queue();//Delete queue
	void ClearAll();//clear all member of queue
	bool IsFull();//is this queue full or not
	bool IsEmpty();//is this queue empty or not
	int getLength();//get queue's number now
	bool EnQueue(T data);//enter queue
	T DeQueue();//Esc queue
	void printAllQueue();//printf all memberof queue
private:
	T *m_tpQueue;
	int m_iTotal;//Total
	int m_iLength;// head length
	int m_iHead;//head of queue
	int m_iTail;//end of queue
};

template<typename T>
Queue<T>::Queue(int length)
{
	m_tpQueue=new T[length];
	m_iTotal = length;
	m_iLength=0;
	m_iHead=0;
	m_iTail=0;
}

template<typename T>
Queue<T>::~Queue()
{
	delete []m_tpQueue;
	m_tpQueue=NULL;
}

template<typename T>
void Queue<T>::ClearAll()
{
	for(int i=0;i<m_iLength;i++)
	{
		m_tpQueue[i] = NULL;
	}
}

template<typename T>
bool Queue<T>::IsFull(void)
{
	if(m_iLength == m_iTotal)
	{
		return true;
	}
	return false;
}

template<typename T>
bool Queue<T>::IsEmpty(void)
{
	if(m_iLength == 0)
	{
		return true;
	}
	return false;
}

template<typename T>
int Queue<T>::getLength(void)
{
	return m_iLength;
}

template<typename T>
bool Queue<T>::EnQueue(T data)
{
	if(IsFull())
	{
		//throw full
	}
	else
	{
		m_tpQueue[m_iTail++] = data;
		m_iTail=m_iTail%m_iTotal;
		m_iLength++;
	}
	return false;
}

template<typename T>
T Queue<T>::DeQueue()
{
	if(IsEmpty())
	{
		return NULL;
	}
	else
	{
		m_iHead=m_iHead%m_iTotal;
		m_iLength--;
		return m_tpQueue[m_iHead++] ;
	}
	return NULL;
}
template<typename T>
void Queue<T>::printAllQueue()
{
	for(int i=m_iHead;i<m_iHead+m_iLength;i++)
	{
		cout<<m_tpQueue[i%m_iTotal]<<endl;
	}
}


#endif
