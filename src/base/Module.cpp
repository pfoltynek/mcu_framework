#include "Module.h"

Module::Module()
{
    sensors = std::unordered_map<std::string, ISensor*>();
}

void Module::registerModuleSensors() {

}

void Module::setup() {
    registerModuleSensors();
}

void Module::loop() {

}

void Module::registerSensor(const std::string &name, ISensor *sensor) {
    sensors[name] = sensor;
}

ISensor *Module::getSensor(const std::string &name) {
    auto it = sensors.find(name);
    if (it != sensors.end()) {
        return it->second;
    }
    return nullptr;
}