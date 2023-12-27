#include "EventService.h"

EventService EventService::instance;

EventService &EventService::getInstance() {
    return instance;
}

unsigned int EventService::subscribe(const std::string &eventName, const EventHandler& handler) {
    unsigned int id = nextId++;
    events[eventName].push_back({handler, id});
    return id;
}

void EventService::unsubscribe(unsigned int id) {
    for (auto & event : events) {
        for (auto itHandler = event.second.begin(); itHandler != event.second.end(); ++itHandler) {
            if (itHandler->id == id) {
                event.second.erase(itHandler);
                return;
            }
        }
    }
}

void EventService::publish(const std::string &eventName, IEvent *event) {
    auto it = events.find(eventName);
    if (it != events.end()) {
        for (const auto& subscriber : it->second) {
            subscriber.handler(event);
        }
    }
}