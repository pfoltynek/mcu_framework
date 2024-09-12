#ifndef FRAMEWORK_ISENSORNAME_H
#define FRAMEWORK_ISENSORNAME_H

#include "ISensor.h"

/**
 * @class ISensorName
 * @brief Template interface for sensor name classes.
 *
 * This template interface serves as a base for all sensor name classes. It provides
 * a static method to retrieve the sensor name from the derived sensor name class.
 *
 * @tparam SensorName The derived sensor name class.
 */
template <typename SensorName>
class ISensorName : public ISensor {
public:
    /**
     * @brief Gets the name of the sensor.
     * @return The sensor name as a constant character pointer.
     */
    static const char* getName() {
        return SensorName::getSensorName();
    }
};

#endif //FRAMEWORK_ISENSORNAME_H