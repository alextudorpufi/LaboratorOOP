#pragma once
#include <iostream>
#include <exception>
using namespace std;

class exceptie1 : public exception
{
	virtual const char* what() const throw()
	{
		return "Index out of range";
	}
};
class exceptie2 : public exception
{
	virtual const char* what() const throw()
	{
		return "Negative iterator";
	}
};

class Compare
{
public:
	virtual int CompareElements(void* e1, void* e2) = 0;
};

template<class T>
class _Compare :public Compare
{
public:
	int CompareElements(void* e1, void* e2)
	{	
		T* a = static_cast<T*>(e1);
		T* b = static_cast<T*>(e2);

		if (a > b)
			return 1; // primul mai mare
		if (a < b)
			return -1; // al doilea mai mare
		else
			return 0; // egale
	}
};

template<class T>
class ArrayIterator
{
private:
	int Current; // mai adaugati si alte date si functii necesare pentru iterator
	T** List;
public:
	ArrayIterator()
	{
		Current = 0;
	}
	ArrayIterator(int _Current, T** _List)
	{
		this->Current = _Current;
		this->List = _List;
	}
	ArrayIterator& operator ++ ()
	{
		Current++;
		return *this;
	}
	ArrayIterator& operator -- ()
	{
		try
		{
			if (Current-1 < 0)
				throw exceptie2();
			Current--;
		}
		catch (exception& exceptie2)
		{
			cout << "Exceptie: " << exceptie2.what() << endl;
		}
		
		return *this;
	}
	bool operator= (ArrayIterator<T>& _Current)
	{
		return (*this) == _Current;
	}
	bool operator!=(ArrayIterator<T>& _Current)
	{
		return (*this) != _Current;
	}

	T* GetElement()
	{
		return this->List[this->Current];
	}
	T* operator*()
	{
		return GetElement();
	}
};

template<class T>
class Array
{
private:
	T** List;		 // lista cu pointeri la obiecte de tipul T*
	int Capacity;	 // dimensiunea listei de pointeri
	int Size;		 // cate elemente sunt in lista

public:
	Array() // Lista nu e alocata, Capacity si Size = 0
	{
		Capacity = 0;
		Size = 0;
	}
	~Array() // destructor
	{
		for (int i = 0; i < Size; i++)
			delete[] List[i];
		delete[] List;
	}
	Array(int capacity) // Lista e alocata cu 'capacity' elemente
	{
		Capacity = capacity;
		for (int i = 0; i < Capacity; i++)
			List = new T * [Capacity];
	}

	Array(const Array<T>& otherArray) // constructor de copiere
	{
		this->Capacity = otherArray.Capacity;
		this->Size = otherArray.Size;
		for (int i = 0; i < this->Capacity; i++)
		{
			this->List[i] = new T * (otherArray.List[i]);
		}
	}

	T& operator[] (int index) // arunca exceptie daca index este out of range
	{
		try
		{
			if (index > this->Size)
				throw exceptie1();
		}
		catch (exception& exceptie1)
		{
			cout << "Exceptie: " << exceptie1.what() << endl;
		}
		return *this->List[index];
	}

	const Array<T>& operator+=(const T& newElem) // adauga un element de tipul T la sfarsitul listei si returneaza this
	{
		this->Size += 1;
		List[Size] = new T (newElem);
		return (*this);
	}

	const Array<T>& Insert(int index, const T& newElem) // adauga un element pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie
	{
		try
		{
			if (index > this->Size)
				throw exceptie1();
			this->Size += 1;
			for (int i = this->Size; i > index; i--)
			{
				this->List[i] = this->List[i - 1];
			}
			List[index] = newElem;
		}
		catch (exception& exceptie1)
		{
			cout << "Exceptie: " << exceptie1.what() << endl;
		}
		return *this;
	}

	const Array<T>& Insert(int index, const Array<T> otherArray) // adauga o lista pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie
	{

		try
		{
			if (index > this->Size)
				throw exceptie1();
			this->Size += otherArray.Size;

			for (int i = this->Size; i > index; i--)
			{
				this->List[i] = this->List[i - otherArray.Size];
			}

			for (int i = 0; i < otherArray.Size; i++)
			{
				this->List[i + index] = otherArray.List[i];
				index++;
			}
		}
		catch (exception& exceptie1)
		{
			cout << "Exceptie: " << exceptie1.what() << endl;
		}
		return *this;

	}

	const Array<T>& Delete(int index) // sterge un element de pe pozitia index, returneaza this. Daca index e invalid arunca o exceptie
	{
		try
		{
			if (index > this->Size)
				throw exceptie1();
			this->Size += 1;
			for (int i = index; i < this->Size; i++)
			{
				this->List[i] = this->List[i + 1];
			}
			delete[] List[this->Size];
			this->Size -= 1;
		}
		catch (exception& exceptie1)
		{
			cout << "Exceptie: " << exceptie1.what() << endl;
		}
		return *this;
	}
	bool operator=(const Array<T>& otherArray)
	{
		if (otherArray.Size != this->Size)
			return false;
		for (int i = 0; i < this->Size; i++)
		{
			if (this->List[i] != otherArray.List[i])
				return false;
		}
		return true;

	}

	void Sort() // sorteaza folosind comparatia intre elementele din T
	{
		for (int i = 0; i < this->Size - 1; i++)
			for (int j = i + 1; j < this->Size; j++)
			{
				if (this->List[i] > this->List[j])
				{
					swap(List[i], List[j]);
				}
			}
	}
	void Sort(int(*compare)(const T&, const T&)) // sorteaza folosind o functie de comparatie
	{
		for (int i = 0; i < this->Size - 1; i++)
			for (int j = i + 1; j < this->Size; j++)
			{
				if (compare(List[i], List[j]) > 0)
				{
					swap(List[i], List[j]);
				}
			}
	}
	void Sort(Compare* comparator) // sorteaza folosind un obiect de comparatie
	{
		for (int i = 0; i < this->Size - 1; i++)
			for (int j = i + 1; j < this->Size; j++)
			{
				if (comparator->CompareElements(List[i], List[j]) > 0)
				{
					swap(List[i], List[j]);
				}
			}
	}

	// functii de cautare - returneaza pozitia elementului sau -1 daca nu exista
	int BinarySearch(const T& elem) // cauta un element folosind binary search in Array
	{
		Sort(); // avem nevoie de un Vector sortat
		int mij;
		int ok = 0;
		int st = 1;
		int dr = Size;
		while (st <= dr)
		{

			mij = (st + dr) / 2;
			if (List[mij] == elem)
			{
				ok = 1;
				break;
			}
			else
				if (elem < List[mij])
					dr = mij - 1;
				else
					st = mij + 1;
		}
		return mij; // returnam indexul

	}
	int BinarySearch(const T& elem, int(*compare)(const T&, const T&)) // cauta un element folosind binary search si o functie de comparatie
	{
		Sort(); // avem nevoie de un Vector sortat
		int mij;
		int ok = 0;
		int st = 1;
		int dr = Size;
		while (st <= dr)
		{

			mij = (st + dr) / 2;
			if (compare(List[mij], elem) == 0)
			{
				ok = 1;
				break;
			}
			else
				if (compare(elem, List[mij]) < 0)
					dr = mij - 1;
				else
					st = mij + 1;
		}
		return mij; // returnam indexul

	}
	int BinarySearch(const T& elem, Compare* comparator)// cauta un element folosind binary search si un comparator
	{
		Sort(); // avem nevoie de un Vector sortat
		int mij;
		int ok = 0;
		int st = 1;
		int dr = Size;
		while (st <= dr)
		{

			mij = (st + dr) / 2;
			if (comparator->CompareElements(List[mij], elem) == 0)
			{
				ok = 1;
				break;
			}
			else
				if (comparator->CompareElements(elem, List[mij]) < 0)
					dr = mij - 1;
				else
					st = mij + 1;
		}
		return mij; // returnam indexul
	}
	int Find(const T& elem) // cauta un element in Array
	{
		for (int i = 0; i < this->Size; i++)
		{
			if (this->List[i] == elem)
				return i;
		}
	}
	int Find(const T& elem, int(*compare)(const T&, const T&)) // cauta un element folosind o functie de comparatie
	{
		for (int i = 0; i < this->Size; i++)
		{
			if (compare(List[i], elem) == 0)
				return i;
		}
	}
	int Find(const T& elem, Compare* comparator) // cauta un element folosind un comparator
	{
		for (int i = 0; i < this->Size; i++)
		{
			if (comparator->CompareElements(List[i], elem) == 0)
				return i;
		}
	}


	int GetSize()
	{
		return this->Size;
	}
	int GetCapacity()
	{
		return this->Capacity;
	}
	ArrayIterator<T> GetBeginIterator()
	{
		ArrayIterator<T> it(0, List);
		return it;
	}
	ArrayIterator<T> GetEndIterator()
	{
		ArrayIterator<T> it(this->Size, List);
		return it;
	}

	ArrayIterator<T> begin()
	{
		return GetBeginIterator();
	}
	ArrayIterator<T> end()
	{
		return GetEndIterator();
	}
	
	void print()
	{
		for (int i = 0; i < Size; i++)
			std::cout << List[i] << " ";
		cout << '\n';
	}
};
