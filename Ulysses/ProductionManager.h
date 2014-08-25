#pragma once

#include "ResourceManager.h"
#include "Product.h"
#include "Common.h"
#include "CyanideAIModule.h"
#include "Observer.h"

class ProductionManager : Observer
{
public:
    static ProductionManager& Instance();

    void produce(Product product);

    void handleFrame();

private:
    ProductionManager();

    bool canProduce(Product& product);

    std::queue<Product> productQueue;
    std::list<Producer> currentProducers;
};

