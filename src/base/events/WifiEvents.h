#ifndef FRAMEWORK_WIFIEVENTS_H
#define FRAMEWORK_WIFIEVENTS_H

#include "base/interfaces/IEventName.h"

class WifiOnConnect : public IEventName<WifiOnConnect> {
public:
    WifiOnConnect() {};

    static const char* getEventName() {
        return "WifiOnConnect";
    }
};

class WifiOnDisconnect : public IEventName<WifiOnDisconnect> {
public:
    WifiOnDisconnect() {};

    static const char* getEventName() {
        return "WifiOnDisconnect";
    }
};

#endif //FRAMEWORK_WIFIEVENTS_H
