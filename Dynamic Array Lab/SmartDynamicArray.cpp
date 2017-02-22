#include "SmartDynamicArray.hpp"

#include "cuTEST/Menu.hpp"

SmartDynamicArray::SmartDynamicArray()
{
	m_itemCount = 0;
	m_arraySize = 0;
	m_data = nullptr;
}

SmartDynamicArray::~SmartDynamicArray()
{
	Free();
}

bool SmartDynamicArray::Push( const string& newItem )
{
	if (IsFull())
	{
		Resize();
	}

	if (m_itemCount == m_arraySize)
	{
		return false;
	}

	m_data[m_itemCount] = newItem;
	m_itemCount++;
}


bool SmartDynamicArray::Insert( int index, const string& newItem )
{
	if (IsFull())
	{
		Resize();
	}

	if (m_itemCount > m_arraySize || m_itemCount < 0)
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


bool SmartDynamicArray::Extend( const SmartDynamicArray& other )
{
	for (int i = 0; i < other.m_itemCount; i++)
	{
		Push(other.m_data[i]);
	}
	return true;
}


bool SmartDynamicArray::Pop()
{
	if (m_itemCount > 0)
	{
		m_itemCount--;
	}

	if (m_itemCount < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool SmartDynamicArray::Remove( int index )
{
	if (m_itemCount > m_arraySize || m_itemCount <= 0 || index > m_itemCount - 1)
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


string SmartDynamicArray::Get( int index ) const
{
	if (index < 0 || index >= m_itemCount)
	{
		return "";
	}

	return m_data[index];
}


int SmartDynamicArray::Size() const
{
	return m_itemCount;
}

int SmartDynamicArray::GetMaxSize() const
{
    return -1; // temp
}

bool SmartDynamicArray::IsFull() const
{
	if (m_itemCount == m_arraySize)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool SmartDynamicArray::IsEmpty() const
{
	return m_itemCount == 0;
}

string SmartDynamicArray::operator[]( int index )
{
	return m_data[index];
}

SmartDynamicArray& SmartDynamicArray::operator=( const SmartDynamicArray& other )
{
    return *this; // temp
}

bool SmartDynamicArray::operator==( const SmartDynamicArray& other )
{
	if (m_itemCount == other.m_itemCount)
	{
		for (int i = 0; i < m_itemCount; i++)
		{
			if (!(m_data[i] == other.m_data[i]))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}


bool SmartDynamicArray::operator!=( const SmartDynamicArray& other )
{
	return false; // temp
}

void SmartDynamicArray::Free()
{
	//if (!(m_data* == nullptr))
	//{

//	}
}

void SmartDynamicArray::Resize()
{
	//Resize(m_arraySize + 10);
}


void SmartDynamicArray::Resize( int newSize )
{
	//string temp = m_data[newSize];
}




