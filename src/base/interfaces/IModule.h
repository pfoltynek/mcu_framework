#ifndef FRAMEWORK_IMODULE_H
#define FRAMEWORK_IMODULE_H

class IModule {
public:
    virtual void setup() = 0;
    virtual void loop() = 0;
    virtual ~IModule()= default;
};

#endif //FRAMEWORK_IMODULE_H
