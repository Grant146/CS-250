#include "SmartStaticArray.hpp"

#include "cuTEST/Menu.hpp"

SmartStaticArray::SmartStaticArray()
{
	m_itemCount = 0;
}

bool SmartStaticArray::Push(const string& newItem)
{
	if (m_itemCount == MAX_SIZE)
	{
		return false;
	}

	m_data[m_itemCount] = newItem;
	m_itemCount++;
}


bool SmartStaticArray::Insert(int index, const string& newItem)
{

	//Original Code: Most likely will delete once program runs
	 if (m_itemCount > MAX_SIZE || m_itemCount < 0)
	{
	return false;
	}

	 string temp = m_data[index];
	 m_data[index] = newItem;

	 m_itemCount++;

	for (int i = index + 1; i >= m_itemCount; i++)
	{
		string temp2 = m_data[i];
		m_data[i] = temp;
		temp = temp2;
	}

}

bool SmartStaticArray::Extend(const SmartStaticArray& other)
{
	return false;
}


bool SmartStaticArray::Pop()
{
	if (m_itemCount > 0)
	{
		m_itemCount--;
	}

	if (m_itemCount < 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}


bool SmartStaticArray::Remove(int index)
{
	if (m_itemCount > MAX_SIZE || m_itemCount <= 0 || index > m_itemCount - 1)
	{
		return false;
	}

	if (m_itemCount = index)
	{
		Pop();
	}

	m_itemCount--;
	
	for (int i = index; i < m_itemCount - 1; i++)
	{
		m_data[i] = m_data[i + 1];
	}

}


string SmartStaticArray::Get(int index) const
{
	if (index < 0 || index >= m_itemCount)
	{
		return "";
	}

	return m_data[index];
}


int SmartStaticArray::Size() const
{
	return m_itemCount;
}


bool SmartStaticArray::IsFull() const
{
	return m_itemCount == MAX_SIZE;
}

bool SmartStaticArray::IsEmpty() const
{
	return m_itemCount == 0;
}

string SmartStaticArray::operator[](int index)
{
	return "placeholder"; // placeholder
}


SmartStaticArray& SmartStaticArray::operator=(const SmartStaticArray& other)
{
	return *this; // placeholder
}

bool SmartStaticArray::operator==(const SmartStaticArray& other)
{
	return false;
}


bool SmartStaticArray::operator!=(const SmartStaticArray& other)
{
	return !(*this == other);
}
