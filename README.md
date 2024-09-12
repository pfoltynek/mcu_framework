# mcu_framework
**Modular platform independent framework for microcontrollers.**

This framework provides a modular and platform-independent approach to developing applications for microcontrollers. It includes various classes and methods for managing events, services, modules, and the overall application shell.

### Features
- Event management
- Service registration and retrieval
- Module management
- Application shell setup and loop

### Usage
To use this framework, include the necessary headers and implement the required methods in your application.

### Example
```cpp
#include "EventService.h"
#include "ServiceLocator.h"
#include "Module.h"
#include "Shell.h"

int main() {
    // Setup and run the application
    MyApp app;
    app.setup();
    while (true) {
        app.loop();
    }
    return 0;
}