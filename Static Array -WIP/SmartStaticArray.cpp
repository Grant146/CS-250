#include "SmartStaticArray.hpp"

SmartStaticArray::SmartStaticArray()
{
	m_itemCount = 0;
}

bool SmartStaticArray::Push( const string& newItem )
{
	if (m_itemCount == MAX_SIZE)
	{
		return false; // temp
	}

	m_data[m_itemCount] = newItem;
	m_itemCount++;
}


bool SmartStaticArray::Insert( int index, const string& newItem )
{
	if(m_itemCount > MAX_SIZE || m_itemCount < 0)
	{
		return false; // temp
	}

	for (int i = m_itemCount - 1; i >= index; i--)
	{
		m_data[i] = m_data[i - 1];

	}


}


bool SmartStaticArray::Extend( const SmartStaticArray& other )
{
	if ()
	{
		return false; // temp
	}
}


bool SmartStaticArray::Pop()
{
	return false; // temp
}


bool SmartStaticArray::Remove( int index )
{
	return false; // temp
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

	return -1; // temp
}


bool SmartStaticArray::IsFull() const
{
	return false; // temp
}

bool SmartStaticArray::IsEmpty() const
{
	if (m_itemCount == 0)
	{
		return true;
	}
	else
	{
		return false; // temp
	}
}


string SmartStaticArray::operator[]( int index )
{
	return "temp"; // temp
}


SmartStaticArray& SmartStaticArray::operator=( const SmartStaticArray& other )
{
    SmartStaticArray blorp; // temp
    return blorp; // temp
}

bool SmartStaticArray::operator==( const SmartStaticArray& other )
{
	return false; // temp
}
