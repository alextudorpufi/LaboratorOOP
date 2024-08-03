#include "MyVector.h"
void MyVector::clear()
{
	data.clear();
}
void MyVector::process()
{
	for (int i = 0; i < processors.size(); i++)
		processors[i]->Run(data.data(),data.size());
}
MyVector::operator int()
{
	return data.size();
}
MyVector::operator unsigned int()
{
	return processors.size();
}
MyVector& MyVector::operator +=(int _data)
{
	data.push_back(_data);
	return *this;
}
MyVector& MyVector::operator +=(Procesator* _procesator)
{
	processors.push_back(_procesator);
	return *this;
}
MyVector& MyVector::operator +=(initializer_list<int> _values)
{
	data.insert(data.end(), _values);
	return *this;
}