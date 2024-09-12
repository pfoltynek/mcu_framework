#ifndef FRAMEWORK_ISENSOR_H
#define FRAMEWORK_ISENSOR_H

/**
 * @class ISensor
 * @brief Interface for sensor classes.
 *
 * This interface serves as a base for all sensor classes. It provides a virtual destructor
 * to ensure proper cleanup of derived sensor objects.
 */
class ISensor {
public:
    /**
     * @brief Virtual destructor for ISensor.
     *
     * Ensures that derived sensor objects are properly destroyed.
     */
    virtual ~ISensor() = default;
};

#endif //FRAMEWORK_ISENSOR_H