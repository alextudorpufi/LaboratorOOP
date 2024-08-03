#pragma once
#include "Procesator.h"
class Find:public Procesator
{
public:
    bool (*function)(int i);

    Find(bool (*function)(int i))
    {
        this->function = function;
    }

    void Run(int* data, int count) override {
        int j = 0;
        for (int i = 0; i < count; ++i) {
            if (function(data[i])) {
                j++;
            }
        }
        cout << "Find: " << j << std::endl;
    }
};

