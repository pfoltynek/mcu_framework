#ifndef FRAMEWORK_ISENSORNAME_H
#define FRAMEWORK_ISENSORNAME_H

#include "ISensor.h"

template <typename SensorName>
class ISensorName : public ISensor {
public:
    static const char* getName() {
        return SensorName::getSensorName();
    }
};

#endif //FRAMEWORK_ISENSORNAME_H
