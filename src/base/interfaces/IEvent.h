#ifndef FRAMEWORK_IEVENTARGS_H
#define FRAMEWORK_IEVENTARGS_H

/**
 * @class IEvent
 * @brief Interface for event classes.
 *
 * This interface serves as a base for all event classes. It provides a virtual destructor
 * to ensure proper cleanup of derived event objects.
 */
class IEvent {
public:
    /**
     * @brief Virtual destructor for IEvent.
     *
     * Ensures that derived event objects are properly destroyed.
     */
    virtual ~IEvent() = default;
};

#endif //FRAMEWORK_IEVENTARGS_H