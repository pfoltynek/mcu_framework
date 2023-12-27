#ifndef FRAMEWORK_ILOGGER_H
#define FRAMEWORK_ILOGGER_H

#include "base/interfaces/IServiceName.h"

class ILoggerService : public IServiceName<ILoggerService> {
    public:
        virtual void log(const char* message) = 0;
        virtual void logInfo(const char* message) = 0;
        virtual void logDebug(const char* message) = 0;
        virtual void logError(const char* message) = 0;
        virtual void logWarning(const char* message) = 0;

    static const char* getServiceName() {
        return "ILoggerService";
    }
};

#endif //FRAMEWORK_ILOGGER_H
