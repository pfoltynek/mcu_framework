#ifndef FRAMEWORK_IWIFISERVICE_H
#define FRAMEWORK_IWIFISERVICE_H

#include "../base/interfaces/IServiceName.h"
#include "../base/services/EventService.h"

class IWifiService : public IServiceName<IWifiService> {
    public:
        virtual bool connect(const char* ssid, const char* password) = 0;
        virtual bool disconnect() = 0;
        virtual bool isConnected() = 0;

        static const char* getServiceName() {
            return "IWifiService";
        }

    protected:
        virtual void OnConnect() = 0;
        virtual void OnDisconnect() = 0;
};

#endif //FRAMEWORK_IWIFISERVICE_H
