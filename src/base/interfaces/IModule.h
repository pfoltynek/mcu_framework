#ifndef FRAMEWORK_IMODULE_H
#define FRAMEWORK_IMODULE_H

/**
 * @class IModule
 * @brief Interface for module classes.
 *
 * This interface defines the basic structure for modules, including setup and loop methods.
 * It ensures that all derived module classes implement these methods.
 */
class IModule {
public:
    /**
     * @brief Sets up the module.
     *
     * This method is called once to initialize the module.
     */
    virtual void setup() = 0;

    /**
     * @brief Main loop for the module.
     *
     * This method is called repeatedly to perform the module's main tasks.
     */
    virtual void loop() = 0;

    /**
     * @brief Virtual destructor for IModule.
     *
     * Ensures that derived module objects are properly destroyed.
     */
    virtual ~IModule()= default;
};

#endif //FRAMEWORK_IMODULE_H