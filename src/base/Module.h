#ifndef FRAMEWORK_MODULE_H
#define FRAMEWORK_MODULE_H

#include <unordered_map>
#include <string>
#include "interfaces/IModule.h"
#include "interfaces/ISensor.h"

class Module : public IModule {
    private:
        std::unordered_map<std::string, ISensor*> sensors;
    public:
        Module();
        void setup() override;
        void loop() override;
        ~Module() override = default;
    protected:
        void registerSensor(const std::string& name, ISensor* sensor);
        ISensor* getSensor(const std::string& name);
};

#endif //FRAMEWORK_MODULE_H
