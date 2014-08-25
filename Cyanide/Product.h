#pragma once

#include "Producer.h"

class Product
{
public:
	Product();
	~Product();

    int requiredMinerals();
    int requiredGas();

    Producer getProducer();
};

