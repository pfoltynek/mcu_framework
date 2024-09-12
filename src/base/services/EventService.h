#ifndef FRAMEWORK_EVENTSERVICE_H
#define FRAMEWORK_EVENTSERVICE_H

#include <unordered_map>
#include <vector>
#include <framework.h>
#include <functional>

using EventHandler = std::function<void(IEvent*)>;

/**
 * @class EventService
 * @brief Singleton class for managing event subscriptions and publications.
 *
 * This class provides methods to subscribe to events, unsubscribe from events, and publish events.
 * It ensures that only one instance of the class exists.
 */
class EventService {
    private:
        /**
         * @brief Singleton instance of EventService.
         */
        static EventService instance;

        /**
         * @struct Subscriber
         * @brief Structure to hold event handler and subscription identifier.
         */
        struct Subscriber {
            EventHandler handler; /**< The event handler to be called when the event is published. */
            unsigned int id; /**< The unique identifier for the subscription. */
        };

        /**
         * @brief Map of event names to their respective handlers and identifiers.
         */
        std::unordered_map<std::string, std::vector<Subscriber>> events;

        /**
         * @brief Next unique identifier for subscriptions.
         */
        unsigned int nextId = 0;

        /**
         * @brief Private constructor to prevent instantiation.
         */
        EventService() = default;

    public:
        /**
         * @brief Gets the singleton instance of EventService.
         * @return Reference to the singleton instance of EventService.
         */
        static EventService& getInstance();

        /**
         * @brief Subscribes to an event with a given handler.
         * @param eventName The name of the event to subscribe to.
         * @param handler The event handler to be called when the event is published.
         * @return The unique identifier for the subscription.
         */
        unsigned int subscribe(const std::string& eventName, const EventHandler& handler);

        /**
         * @brief Unsubscribes from an event using the subscription identifier.
         * @param id The unique identifier for the subscription to be removed.
         */
        void unsubscribe(unsigned int id);

        /**
         * @brief Publishes an event to all subscribed handlers.
         * @param eventName The name of the event to publish.
         * @param event The event object to be passed to the handlers.
         */
        void publish(const std::string &eventName, IEvent* event);
};

#endif //FRAMEWORK_EVENTSERVICE_H