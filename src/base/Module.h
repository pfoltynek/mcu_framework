#ifndef FRAMEWORK_MODULE_H
#define FRAMEWORK_MODULE_H

#include <unordered_map>
#include <string>
#include "interfaces/IModule.h"
#include "interfaces/ISensor.h"

/**
 * @class Module
 * @brief Base class for modules managing sensors.
 *
 * This class provides a base implementation for modules that manage sensors.
 * It includes methods for setting up and looping through the module, as well as
 * registering and retrieving sensors.
 */
class Module : public IModule {
private:
    /**
     * @brief Map of sensor names to their respective ISensor pointers.
     */
    std::unordered_map<std::string, ISensor*> sensors;

public:
    /**
     * @brief Sets up the module.
     *
     * This method is called to perform any necessary setup for the module.
     */
    void setup() override;

    /**
     * @brief Loops through the module.
     *
     * This method is called repeatedly to perform the module's main functionality.
     */
    void loop() override;

    /**
     * @brief Destructor for Module.
     */
    ~Module() override = default;

protected:
    /**
     * @brief Protected constructor to prevent direct instantiation.
     */
    Module();

    /**
     * @brief Registers the module's sensors.
     *
     * This pure virtual method must be implemented by derived classes to register their sensors.
     */
    virtual void registerModuleSensors() = 0;

    /**
     * @brief Registers a sensor with a given name.
     * @param name The name of the sensor to register.
     * @param sensor Pointer to the ISensor to be registered.
     */
    void registerSensor(const std::string& name, ISensor* sensor);

    /**
     * @brief Retrieves a sensor by name.
     * @param name The name of the sensor to retrieve.
     * @return Pointer to the ISensor associated with the given name.
     */
    ISensor* getSensor(const std::string& name);
};

#endif //FRAMEWORK_MODULE_H