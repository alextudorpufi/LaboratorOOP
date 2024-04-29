#pragma once
#include <iostream>
template <class K,class V>
class Map {
public:

	struct element {
		K key;
		V value;
		int index;
	}* elements;

	int size;
	int count;

	Map() {

		size = 2;
		count = 0;
		elements = new element[size];

	}
	~Map() {

		delete[] elements;

	}
	void Clear() {

		delete[] elements;
		size = 2;
		count = 0;
		elements = new element[size];

	}
	void grow() {

		size = size + 1;
		element* temp = new element[size];

		for (int i = 0; i < count; ++i) {
			temp[i].key = elements[i].key;
			temp[i].value = elements[i].value;
			temp[i].index = i;
		}

		delete[] elements;
		elements = temp;

	}

	V& operator[](K _key) {

		for (int i = 0; i < count; i++)
			if (elements[i].key == _key)
				return elements[i].value;

		if (count >= size)
			grow();

		elements[count].key = _key;
		elements[count].index = count;
		count++;

		return elements[count - 1].value;

	}

	void Set(K key, V value) {

		elements[key].value = value;

	}

	bool Get(const K& key, V& value){

		for (int i = 0; i < count; i++) 
			if (elements[i].key == key)
			{
				value = elements[i].value;
				return true;
			}

		return false;

	}

	int Count() {
		return count;
	}

	const element* begin() const {
		return &elements[0];
	}
	const element* end() const {
		return &elements[count];
	}

	bool Includes(const Map<K, V>& map) {

		for (auto p : map) {
			if (Get(p.key, p.value) == false) {
				return false;
			}
		}
		return true;

	}
	bool Delete(const K& key)
	{
		for (int i = 0; i < count; i++) {
			if (elements[i].key == key) {
				for (int j = i; j <= count; j++) {
					elements[j] = elements[j + 1];
					elements[j].index = j;
				}
				elements[count] = element();  // stergem ultimul nod
				count--;
				return true;
			}
		}
		return false;
	}


};