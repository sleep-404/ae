set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)


IF (DARKNET_ACTIVE)
    SET(EXTRA_LIBS ${EXTRA_LIBS}
         ${DARKNET_LIBRARIES}
         ${CUDA_LIBRARIES}
         ${CUDA_LIBRARIES}
         ${CUDA_CUBLAS_LIBRARIES}
         ${CUDA_curand_LIBRARY})

    include_directories(${DARKNET_INCLUDE_DIR})
ENDIF()


set (SOURCES main.cpp
        mainwindow
        )


include_directories(
        ${OpenCV_INCLUDE_DIRS}
        ${comm_INCLUDE_DIRS}
        ${utils_INCLUDE_DIRS}
        ${ros_INCLUDE_DIRS}
        ${PYTHON_INCLUDE_DIRS}
        ${INTERFACES_CPP_DIR}
        ${GLOG_INCLUDE_DIRS}
        ${Boost_INCLUDE_DIR}
        ${QT_INCLUDE_DIRS}
        ${CMAKE_CURRENT_LIST_DIR}
)


add_executable(DatasetGenerator ${SOURCES})


TARGET_LINK_LIBRARIES(DatasetGenerator
        ${OpenCV_LIBRARIES}
        ${EXTRA_LIBS}
        ${Boost_LIBRARIES}
        ${QT_LIBRARIES}
        ${PYTHON_LIBRARIES}
        ${GLOG_LIBRARIES}
        ${PYTHON_LIBRARIES}
        ssl
        crypto
        )
