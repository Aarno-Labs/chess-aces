project(defcomp)

set(DC_SRCS
        defcomp.cpp defcomp.h
        )

add_library(defcomp_objs STATIC ${DC_SRCS})
target_compile_definitions(defcomp_objs PUBLIC LINUX POSIX)
# Cross-built Boost lives outside the default include path (/opt/boost-arm);
# propagate its include dirs so the sources here can find Boost headers.
target_link_libraries(defcomp_objs PUBLIC Boost::headers)

add_executable(defcomp main.cpp)
target_compile_definitions(defcomp PUBLIC LINUX POSIX)
target_link_libraries(defcomp defcomp_objs)
