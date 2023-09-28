#pragma once

#include <functional>
#include <memory>

namespace threading {

class Timer {
public:
    typedef std::function<void ()> Callback;

    Timer(double interval, Callback function); 
    void start();
    void cancel(); 

#ifdef DEBUG
    void set_message(const std::string& message);
#endif

public:
    struct Impl; 

private:
    std::shared_ptr<Impl> pimpl;
};

}   // namespace threading
