cmake_minimum_required(VERSION 3.10)
project(openCVX)

find_package(OpenCV)

include_directories("/usr/local/include/opencv4/")
link_directories(/usr/local/lib/opencv4/)

# add_subdirectory(src)
set(O_LIBRARIES opencv_video opencv_stitching opencv_dnn opencv_imgproc
    opencv_core opencv_imgcodecs opencv_highgui opencv_videoio
    opencv_photo opencv_objdetect opencv_flann opencv_ml opencv_calib3d
    opencv_features2d opencv_gapi )


add_executable(showimg dispimg.cpp)
add_executable(playvideo playvideowithtrackbar.cpp)
add_executable(simpleplayvideo playvideo.cpp)
# add_executable()

target_link_libraries(simpleplayvideo ${O_LIBRARIES})
target_link_libraries(playvideo ${O_LIBRARIES})
target_link_libraries(showimg ${O_LIBRARIES})

