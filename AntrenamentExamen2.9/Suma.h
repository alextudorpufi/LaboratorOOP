#pragma once
#include "Procesator.h"
class Suma:public Procesator
{
    void Run(int* data, int count) override {
        int sum = 0;
        for (int i = 0; i < count; ++i) {
            sum += data[i];
        }
        cout << "Suma: " << sum << std::endl;
    }
};

