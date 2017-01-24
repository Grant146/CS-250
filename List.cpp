/* Grant McLain
Lab 1:
List.cpp
*/

#include <iostream>
#include <string>
#include <list>
using namespace std;

class Student
{
public:
	Student(const string& name, int grade) : m_name(name), m_grade(grade) { }
	void Display();

	bool operator>(const Student& other);
	bool operator<(const Student& other);
	bool operator>=(const Student& other);
	bool operator<=(const Student& other);
	bool operator==(const Student& other);

private:
	string m_name;
	int m_grade;
};


int main()
{
	// Create a list of Student objects called students
	list<Student> students;

	// Push multiple students into the list.
	students.push_back( Student( "Vid",         100 ) ); //taken from comment originally here
	//Numbers used for grades switched between test 1 and 2 to confirm code working properly (seen in test results)
	students.push_back(Student("John", 0));
	students.push_back(Student("Michael", 42));
	students.push_back(Student("Tyler", 89));
	students.push_back(Student("Sam", 14));
	
	// Call the sort() function
	students.sort();
	// Call the reverse() function to make it descending.
	students.reverse();

	// Display all the students
	for (list<Student>::iterator it = students.begin(); it != students.end(); it++)
	{
		it->Display();
	}

	return 0;
}

void Student::Display()
{
	cout << m_grade << "\t" << m_name << endl;
}


bool Student::operator>(const Student& other)
{
	return this->m_grade > other.m_grade;
}

bool Student::operator<(const Student& other)
{
	return this->m_grade < other.m_grade;
}

bool Student::operator>=(const Student& other)
{
	return this->m_grade >= other.m_grade;
}

bool Student::operator<=(const Student& other)
{
	return this->m_grade <= other.m_grade;
}

bool Student::operator==(const Student& other)
{
	return this->m_grade == other.m_grade;
}


/* Test Results 1:
100     Vid
70      John
64      Sam
42      Michael
28      Tyler
Press any key to continue . . .

Test Results 2: (Switched scores used previously to confirm that code works correctly)

100     Vid
89      Tyler
42      Michael
14      Sam
0       John
Press any key to continue . . .

*/
