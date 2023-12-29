#ifndef FRAMEWORK_SERVICELOCATOR_H
#define FRAMEWORK_SERVICELOCATOR_H

#include <string>
#include <unordered_map>
#include "../interfaces/IService.h"

class ServiceLocator {
private:
    static ServiceLocator instance;
    std::unordered_map<std::string, IService*> services;

public:
    static ServiceLocator& getInstance();
    void registerService(const std::string& name, IService* service);
    IService* getService(const std::string& name);
};

#endif //FRAMEWORK_SERVICELOCATOR_H
