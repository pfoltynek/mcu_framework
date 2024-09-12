#ifndef FRAMEWORK_SERVICELOCATOR_H
#define FRAMEWORK_SERVICELOCATOR_H

#include <string>
#include <unordered_map>
#include "../interfaces/IService.h"

/**
 * @class ServiceLocator
 * @brief Singleton class for managing service registration and retrieval.
 *
 * This class provides methods to register services and retrieve them by name.
 * It ensures that only one instance of the class exists.
 */
class ServiceLocator {
private:
    /**
     * @brief Singleton instance of ServiceLocator.
     */
    static ServiceLocator instance;

    /**
     * @brief Map of service names to their respective IService pointers.
     */
    std::unordered_map<std::string, IService*> services;

public:
    /**
     * @brief Gets the singleton instance of ServiceLocator.
     * @return Reference to the singleton instance of ServiceLocator.
     */
    static ServiceLocator& getInstance();

    /**
     * @brief Registers a service with a given name.
     * @param name The name of the service to register.
     * @param service Pointer to the IService to be registered.
     */
    void registerService(const std::string& name, IService* service);

    /**
     * @brief Retrieves a service by name.
     * @param name The name of the service to retrieve.
     * @return Pointer to the IService associated with the given name.
     */
    IService* getService(const std::string& name);
};

#endif //FRAMEWORK_SERVICELOCATOR_H