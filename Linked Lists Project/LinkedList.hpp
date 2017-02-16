#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Node
{
	Node()
	{
		ptrNext = nullptr;
		ptrPrev = nullptr;
	}

	Node<T>* ptrNext;
	Node<T>* ptrPrev;

	T data;
};

template <typename T>
class LinkedList
{
public:
	LinkedList() // done
	{
		m_ptrFirst = nullptr;
		m_ptrLast = nullptr;
		m_itemCount = 0;
	}

	~LinkedList() // done
	{
		Free();
	}

	void Push(const T& newItem)
	{
		Node<T>* newNode = new Node<T>;
		newNode->data = newItem;

		if (m_ptrFirst == nullptr)
		{
			//Empty List
			m_ptrFirst = newNode;
			m_ptrLast = newNode;
		}
		else 
		{
			newNode->ptrPrev = m_ptrLast;
			m_ptrLast->ptrNext = newNode;
			m_ptrLast = newNode;
		}
	}

	bool Insert(int index, const T& newItem)
	{
		return false; // temp
	}

	void Extend(const LinkedList& other)
	{
		Node<T>* ptrCurrent = other.m_ptrFirst;
	}

	bool Pop()
	{
		if (isEmpty())
		{
			return false;
		}

		if (Size() > 1)
		{
			Node<T>* ptrPenultimate = m_ptrLast->ptrPrev;

			delete m_ptrLast;
			m_ptrLast = ptrPenultimate;
			m_ptrLast->ptrNext = nullptr;
			m_itemCount--;
			return true;
		}
		else
		{
			delete m_ptrFirst;
			m_ptrFirst = nullptr;
			m_ptrLast = nullptr;
			m_itemCount--;
			return true;
		}
	}

	bool Remove(int index)
	{
		if ()
		{

		}
		return false; // temp
	}

	T Get(int index) const
	{
		if (index < 0 || index >= m_itemCount)
		{
			T();
		}

		Node<T>* ptrCurrent = m_ptrFirst;
		int counter = 0;
		while (counter < index)
		{
			ptrCurrent = ptrCurrent->ptrNext;
			counter++;
		}

		return ptrCurrent->data;
	}

	int Size() const // done
	{
		return m_itemCount;
	}

	bool IsEmpty() const // done
	{
		return (m_ptrFirst == nullptr);
	}

	T operator[](int index) // done
	{
		return Get(index);
	}

	LinkedList& operator=(const LinkedList& other)
	{
		return (*this); // temp
	}

	bool operator==(const LinkedList& other)
	{
		return false; // temp
	}

	bool operator!=(const LinkedList& other)
	{
		return !((*this) == other);
	}

private:
	void Free() // done
	{
		while (!IsEmpty())
		{
			Pop();
		}
	}

	Node<T>* m_ptrFirst;
	Node<T>* m_ptrLast;
	int m_itemCount;
};

#endif
