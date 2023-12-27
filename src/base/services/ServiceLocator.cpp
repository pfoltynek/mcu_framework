#include "ServiceLocator.h"

ServiceLocator ServiceLocator::instance;

ServiceLocator &ServiceLocator::getInstance() {
    return instance;
}

void ServiceLocator::registerService(const std::string &name, IService *service) {
    services[name] = service;
}

IService *ServiceLocator::getService(const std::string &name) {
    auto it = services.find(name);
    if (it != services.end()) {
        return it->second;
    }
    return nullptr;
}