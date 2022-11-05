#if defined(COMPILER_MSVC)
#pragma warning(push)
#pragma warning(disable: 4201; disable: 4324; disable: 4310)
#elif defined(COMPILER_CLANGCL)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-volatile"
#endif
