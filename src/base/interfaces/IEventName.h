#ifndef FRAMEWORK_IEVENTNAME_H
#define FRAMEWORK_IEVENTNAME_H

#include "IEvent.h"

template <typename EventName>
class IEventName : public IEvent {
public:
    static const char* getName() {
        return EventName::getEventName();
    }
};

#endif //FRAMEWORK_IEVENTNAME_H
