#ifndef FRAMEWORK_EVENTSERVICE_H
#define FRAMEWORK_EVENTSERVICE_H

#include <unordered_map>
#include <vector>
#include <framework.h>
#include <functional>

using EventHandler = std::function<void(IEvent*)>;

class EventService {
    private:
        static EventService instance;
        struct Subscriber {
            EventHandler handler;
            unsigned int id;
        };
        std::unordered_map<std::string, std::vector<Subscriber>> events;
        unsigned int nextId = 0;
        EventService() = default;

    public:
        static EventService& getInstance();

        unsigned int subscribe(const std::string& eventName, const EventHandler& handler);
        void unsubscribe(unsigned int id);
        void publish(const std::string &eventName, IEvent* event);
};

#endif //FRAMEWORK_EVENTSERVICE_H
