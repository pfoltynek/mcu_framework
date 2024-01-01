#ifndef FRAMEWORK_SHELL_H
#define FRAMEWORK_SHELL_H

#include <vector>
#include <string>
#include "interfaces/IModule.h"
#include "interfaces/IService.h"

class Shell {
    private:
        std::vector<IModule*> modules;
    protected:
        Shell();
        virtual void registerAppModules() = 0;
        virtual void registerAppCoreServices() = 0;
        void registerModule(IModule *module);
        void registerService(const std::string& name, IService *service);
        ~Shell() = default;
    public:
        virtual void setup();
        virtual void loop();
};


#endif //FRAMEWORK_SHELL_H
