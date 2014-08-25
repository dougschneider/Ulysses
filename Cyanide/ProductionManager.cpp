#include "ProductionManager.h"

ProductionManager& ProductionManager::Instance()
{
    static ProductionManager manager;
    return manager;
}

ProductionManager::ProductionManager()
{
    assert(CyanideAIModule::ai != NULL);
    CyanideAIModule::ai->addObserver(this);
}

void ProductionManager::produce(Product product)
{
	productQueue.push(product);
}

void ProductionManager::handleFrame()
{
    if(productQueue.size() == 0)
        return;

    while(true)
	{
        Product& product = productQueue.front();
		if(!canProduce(product))
            break;

        Producer producer = product.getProducer();
        if(producer == NULL)// TODO: how to handle when there is no avaiable producer
            break;
        producer.produce(product);
        currentProducers.push_back(producer);// TODO: keep track of producers and free when they're done

		productQueue.pop();
	}
}

bool ProductionManager::canProduce(Product& product)
{
    if(!ResourceManager::Instance().requestResources(product.requiredMinerals(), product.requiredGas()))
        return false;

    return true;
}