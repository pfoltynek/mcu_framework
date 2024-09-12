#ifndef FRAMEWORK_IWIFISERVICE_H
#define FRAMEWORK_IWIFISERVICE_H

#include "../base/interfaces/IServiceName.h"
#include "../base/services/EventService.h"

/**
 * @class IWifiService
 * @brief Interface for WiFi services.
 *
 * This interface defines the methods required for managing WiFi connections,
 * including connecting to and disconnecting from a WiFi network, and checking
 * the connection status. It inherits from IServiceName to provide a service name identifier.
 */
class IWifiService : public IServiceName<IWifiService> {
public:
    /**
     * @brief Connects to a WiFi network.
     * @param ssid The SSID of the WiFi network.
     * @param password The password of the WiFi network.
     * @return True if the connection was successful, false otherwise.
     */
    virtual bool connect(const char* ssid, const char* password) = 0;

    /**
     * @brief Disconnects from the current WiFi network.
     * @return True if the disconnection was successful, false otherwise.
     */
    virtual bool disconnect() = 0;

    /**
     * @brief Checks if the device is connected to a WiFi network.
     * @return True if connected, false otherwise.
     */
    virtual bool isConnected() = 0;

    /**
     * @brief Gets the service name for the WiFi service.
     * @return The service name as a constant character pointer.
     */
    static const char* getServiceName() {
        return "IWifiService";
    }

protected:
    /**
     * @brief Called when a connection to a WiFi network is established.
     */
    virtual void OnConnect() = 0;

    /**
     * @brief Called when the device is disconnected from a WiFi network.
     */
    virtual void OnDisconnect() = 0;
};

#endif //FRAMEWORK_IWIFISERVICE_H