#ifndef FRAMEWORK_FRAMEWORK_H
#define FRAMEWORK_FRAMEWORK_H

#include "base/interfaces/IEvent.h"
#include "base/interfaces/IEventName.h"
#include "base/interfaces/IService.h"
#include "base/interfaces/IServiceName.h"
#include "base/interfaces/ISensor.h"
#include "base/interfaces/ISensorName.h"
#include "base/interfaces/IModule.h"
#include "base/Module.h"
#include "base/Shell.h"

#include "base/events/WifiEvents.h"

#include "base/services/ServiceLocator.h"
#include "base/services/EventService.h"

#include "interfaces/ILoggerService.h"
#include "interfaces/IWifiService.h"

/**
 * @file framework.h
 * @brief This file includes all the necessary headers for the Framework package.
 *
 * The Framework package provides interfaces and classes for event handling,
 * service management, sensor management, and module management. It includes
 * the following components:
 * - IEvent: Interface for events.
 * - IEventName: Interface for event names.
 * - IService: Interface for services.
 * - IServiceName: Interface for service names.
 * - ISensor: Interface for sensors.
 * - ISensorName: Interface for sensor names.
 * - IModule: Interface for modules.
 * - Module: Base class for modules.
 * - Shell: Base class for the application shell.
 * - WifiEvents: Events related to WiFi.
 * - ServiceLocator: Singleton class for locating services.
 * - EventService: Singleton class for managing events.
 * - ILoggerService: Interface for logging services.
 * - IWifiService: Interface for WiFi services.
 */

#endif //FRAMEWORK_FRAMEWORK_H