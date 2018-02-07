#include "Grades.h"

Grades::Grades(string name, float gpa)
	{
		n = name;
		g = gpa;
	}
void Grades::setN(string name)
	{
		n = name;
	}
string Grades::getN()
	{
		return n;
	}
void Grades::getG(float gpa)
	{
		g = gpa;
	}
float Grades::setG()
	{
		return  g;
	}

