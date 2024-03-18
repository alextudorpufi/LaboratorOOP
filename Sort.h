#pragma once
#include <initializer_list>
using namespace std;
class Sort
{
private:
    int v[105],count;
    void quickSort(int st, int dr,bool ascendant);
    // add data members
public:
    // add constuctors
    Sort(int _count, int min, int max);
    Sort(int _v[10], int _count);
    Sort(initializer_list <int> _v);
    Sort(int _count, ...);
    Sort(char a[256]);
    void InsertSort(bool ascendent);
    void QuickSort(bool ascendent);
    void BubbleSort(bool ascendent);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};