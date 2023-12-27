#include "Shell.h"
#include "services/ServiceLocator.h"

Shell::Shell() {
    modules = std::vector<IModule*>();
}

void Shell::registerModule(IModule *module) {
    modules.push_back(module);
    module->setup();
}

void Shell::loop() {
    for (auto module : modules) {
        module->loop();
    }
}

void Shell::registerService(const std::string& name,IService *service) {
    ServiceLocator& services = ServiceLocator::getInstance();
    services.registerService(name, service);
}
