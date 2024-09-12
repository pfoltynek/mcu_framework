#ifndef FRAMEWORK_WIFIEVENTS_H
#define FRAMEWORK_WIFIEVENTS_H

#include "base/interfaces/IEventName.h"

/**
 * @class WifiOnConnect
 * @brief Event class for WiFi connection events.
 *
 * This class represents an event that is triggered when a WiFi connection is established.
 * It inherits from IEventName to provide a unique event name identifier.
 */
class WifiOnConnect : public IEventName<WifiOnConnect> {
public:
    /**
     * @brief Constructor for WifiOnConnect event.
     */
    WifiOnConnect() {};

    /**
     * @brief Gets the event name for the WiFi connection event.
     * @return The event name as a constant character pointer.
     */
    static const char* getEventName() {
        return "WifiOnConnect";
    }
};

/**
 * @class WifiOnDisconnect
 * @brief Event class for WiFi disconnection events.
 *
 * This class represents an event that is triggered when a WiFi disconnection occurs.
 * It inherits from IEventName to provide a unique event name identifier.
 */
class WifiOnDisconnect : public IEventName<WifiOnDisconnect> {
public:
    /**
     * @brief Constructor for WifiOnDisconnect event.
     */
    WifiOnDisconnect() {};

    /**
     * @brief Gets the event name for the WiFi disconnection event.
     * @return The event name as a constant character pointer.
     */
    static const char* getEventName() {
        return "WifiOnDisconnect";
    }
};

#endif //FRAMEWORK_WIFIEVENTS_H