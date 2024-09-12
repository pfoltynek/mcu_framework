#ifndef FRAMEWORK_ILOGGER_H
#define FRAMEWORK_ILOGGER_H

#include "base/interfaces/IServiceName.h"

/**
 * @class ILoggerService
 * @brief Interface for logging services.
 *
 * This interface defines the methods required for logging messages
 * at various levels such as info, debug, error, and warning.
 * It inherits from IServiceName to provide a service name identifier.
 */
class ILoggerService : public IServiceName<ILoggerService> {
public:
    /**
     * @brief Logs a generic message.
     * @param message The message to log.
     */
    virtual void log(const char* message) = 0;

    /**
     * @brief Logs an informational message.
     * @param message The message to log.
     */
    virtual void logInfo(const char* message) = 0;

    /**
     * @brief Logs a debug message.
     * @param message The message to log.
     */
    virtual void logDebug(const char* message) = 0;

    /**
     * @brief Logs an error message.
     * @param message The message to log.
     */
    virtual void logError(const char* message) = 0;

    /**
     * @brief Logs a warning message.
     * @param message The message to log.
     */
    virtual void logWarning(const char* message) = 0;

    /**
     * @brief Gets the service name for the logger.
     * @return The service name as a constant character pointer.
     */
    static const char* getServiceName() {
        return "ILoggerService";
    }
};

#endif //FRAMEWORK_ILOGGER_H