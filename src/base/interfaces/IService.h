#ifndef FRAMEWORK_ISERVICE_H
#define FRAMEWORK_ISERVICE_H

/**
 * @class IService
 * @brief Interface for service classes.
 *
 * This interface serves as a base for all service classes. It provides a virtual destructor
 * to ensure proper cleanup of derived service objects.
 */
class IService {
public:
    /**
     * @brief Virtual destructor for IService.
     *
     * Ensures that derived service objects are properly destroyed.
     */
    virtual ~IService() = default;
};

#endif //FRAMEWORK_ISERVICE_H