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
	/* if (m_itemCount > MAX_SIZE || m_itemCount < 0)
	{
		return false;
	}

	for (int i = m_itemCount - 1; i >= index; i--)
	{
		m_data[i] = m_data[i - 1];

	}
	*/
	return false;
}

bool SmartStaticArray::Extend( const SmartStaticArray& other )
{
	return false; // placeholder
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


bool SmartStaticArray::Remove( int index )
{
	//May use this: but not currently
	/*int locatedIndex = Get(index);
	bool canRemove = !IsEmpty() && (locatedIndex > -1);
	if (canRemove)
	{
		m_itemCount--;
		m_data[locatedIndex] = m_data[m_itemCount];
	}*/

	return false;
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

//originally using m_itemCount == 0
{
	return m_itemCount == 0;
}

string SmartStaticArray::operator[]( int index )
{
	return "placeholder"; // placeholder
}


SmartStaticArray& SmartStaticArray::operator=( const SmartStaticArray& other )
{
    return *this; // placeholder
}

bool SmartStaticArray::operator==( const SmartStaticArray& other )
{
	return false; // placeholder
}


bool SmartStaticArray::operator!=(const SmartStaticArray& other)
{
	return !(*this == other);
}
