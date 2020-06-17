cmake_minimum_required(VERSION 3.10)
project(openCVX)

# find_package(opencv2)

include_directories(/usr/include)

# add_subdirectory(src)

add_executable(showimg dispimg.cpp)
add_executable(playvideo playvideowithtrackbar.cpp)
add_executable(simpleplayvideo playvideo.cpp)
# add_executable()

# target_link_libraries( ${_LIBRARIES})

