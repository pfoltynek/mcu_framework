#ifndef FRAMEWORK_ISERVICENAME_H
#define FRAMEWORK_ISERVICENAME_H

#include "IService.h"
/*
 * Pokud potřebujete přetížit statickou funkci bez parametrů ve více odvozených třídách,
 * můžete použít techniku známou jako Curiously Recurring Template Pattern (CRTP).
 * CRTP vám umožní přetížit statické funkce ve více odvozených třídách.
 * */
template <typename ServiceName>
class IServiceName : public IService {
    public:
        static const char* getName() {
            return ServiceName::getServiceName();
        }
};

#endif //FRAMEWORK_ISERVICENAME_H
