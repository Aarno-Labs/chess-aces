project(pp)

set(PP_SRCS
        pp.h
        pp1.cpp
        pp2.cpp
        pp3.cpp
        pp4.cpp
        pp5.cpp
        pp6.cpp
        pp7.cpp
        pp8.cpp
        )

# Add all sources to a library file so we can link with other projects and test suites
add_library(pp_objs STATIC ${PP_SRCS})
target_compile_definitions(pp_objs PUBLIC LINUX POSIX)
# Cross-built Boost lives outside the default include path (/opt/boost-arm);
# propagate its include dirs so the sources here can find Boost headers.
target_link_libraries(pp_objs PUBLIC Boost::headers)

add_executable(pp main.cpp)
target_compile_definitions(pp PUBLIC LINUX POSIX)
target_link_libraries(pp pp_objs)
