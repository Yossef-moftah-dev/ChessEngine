#pragma once

#include<string>

// preprocessor command
#if __cpp_exceptions
#include<stdexcept>
#endif

// macro to avoid the wranning of not using a varaible
#define UNUSED(x) (void)(x)

// modern enum that is safer against data leakage
enum class ErrorCode{
    OK = 0,
    Error = 1,
};

[[noreturn]] [[maybe_unused]] static void Throw(const ErrorCode code, const std::string description){
    #if __cpp_exceptions
    UNUSED(code);
    throw std::runtime_error(description);
    #endif
}

[[noreturn]] [[mayb_unused]] static void Throw(const ErrorCode code){
    Throw(code,"");
}

[[noreturn]] [[maybe_unused]] static void Throw(const std::string description){
    Throw(ErrorCode::Error, description);
}

[[noreturn]] [[maybe_unused]] static void Throw(){
    Throw(ErrorCode::Error, "");
}