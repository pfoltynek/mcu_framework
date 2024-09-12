#ifndef FRAMEWORK_ISERVICENAME_H
#define FRAMEWORK_ISERVICENAME_H

#include "IService.h"

/**
 * @class IServiceName
 * @brief Template interface for service name classes.
 *
 * This template interface serves as a base for all service name classes. It provides
 * a static method to retrieve the service name from the derived service name class.
 *
 * @tparam ServiceName The derived service name class.
 *
 * If you need to override a static function without parameters in multiple derived classes,
 * you can use a technique known as the Curiously Recurring Template Pattern (CRTP).
 * CRTP allows you to override static functions in multiple derived classes.
 */
template <typename ServiceName>
class IServiceName : public IService {
public:
    /**
     * @brief Gets the name of the service.
     * @return The service name as a constant character pointer.
     */
    static const char* getName() {
        return ServiceName::getServiceName();
    }
};

#endif //FRAMEWORK_ISERVICENAME_H