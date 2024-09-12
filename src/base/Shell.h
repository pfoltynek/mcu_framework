#ifndef FRAMEWORK_SHELL_H
#define FRAMEWORK_SHELL_H

#include <vector>
#include <string>
#include "interfaces/IModule.h"
#include "interfaces/IService.h"

/**
 * @class Shell
 * @brief Base class for managing application modules and services.
 *
 * This class provides a base implementation for managing application modules and services.
 * It includes methods for setting up and looping through the application, as well as
 * registering modules and services.
 */
class Shell {
private:
    /**
     * @brief Vector of pointers to registered modules.
     */
    std::vector<IModule*> modules;

protected:
    /**
     * @brief Protected constructor to prevent direct instantiation.
     */
    Shell();

    /**
     * @brief Registers the application's modules.
     *
     * This pure virtual method must be implemented by derived classes to register their modules.
     */
    virtual void registerAppModules() = 0;

    /**
     * @brief Registers the application's core services.
     *
     * This pure virtual method must be implemented by derived classes to register their core services.
     */
    virtual void registerAppCoreServices() = 0;

    /**
     * @brief Registers a module.
     * @param module Pointer to the IModule to be registered.
     */
    void registerModule(IModule *module);

    /**
     * @brief Registers a service with a given name.
     * @param name The name of the service to register.
     * @param service Pointer to the IService to be registered.
     */
    void registerService(const std::string& name, IService *service);

    /**
     * @brief Destructor for Shell.
     */
    ~Shell() = default;

public:
    /**
     * @brief Sets up the application.
     *
     * This method is called to perform any necessary setup for the application.
     */
    virtual void setup();

    /**
     * @brief Loops through the application.
     *
     * This method is called repeatedly to perform the application's main functionality.
     */
    virtual void loop();
};

#endif //FRAMEWORK_SHELL_H