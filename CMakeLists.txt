cmake_minimum_required(VERSION 3.10)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(ANDROID_ABI armeabi-v7a)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(game)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS jni/src/*.cpp jni/src/*.cc)
add_library(game SHARED ${SOURCES})

target_include_directories(game PUBLIC jni/src)
target_include_directories(game PUBLIC jni/include)
target_include_directories(game PUBLIC jni/include/includes)
target_include_directories(game PUBLIC jni/include/cocos2dx)
target_include_directories(game PUBLIC jni/include/cocos2dx/platform)
target_include_directories(game PUBLIC jni/include/cocos2dx/platform/android)
target_include_directories(game PUBLIC jni/include/cocos2dx/kazmath/include)
target_include_directories(game PUBLIC jni/include/cocos2dx/include)
target_include_directories(game PUBLIC jni/include/KittyMemory)

target_link_libraries(game PRIVATE dl log)
target_link_libraries(game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Libraries/armeabi-v7a/libcocos2dcpp.so ${CMAKE_CURRENT_SOURCE_DIR}/Libraries/armeabi-v7a/libhooking.so log android )
target_compile_options(game PUBLIC -fdebug-prefix-map=${CMAKE_SOURCE_DIR}=.)
set(ANDROID_STL "c++_shared")