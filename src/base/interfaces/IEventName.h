#ifndef FRAMEWORK_IEVENTNAME_H
#define FRAMEWORK_IEVENTNAME_H

#include "IEvent.h"

/**
 * @class IEventName
 * @brief Template interface for event name classes.
 *
 * This template interface serves as a base for all event name classes. It provides
 * a static method to retrieve the event name from the derived event name class.
 *
 * @tparam EventName The derived event name class.
 */
template <typename EventName>
class IEventName : public IEvent {
public:
    /**
     * @brief Gets the name of the event.
     * @return The event name as a constant character pointer.
     */
    static const char* getName() {
        return EventName::getEventName();
    }
};

#endif //FRAMEWORK_IEVENTNAME_H