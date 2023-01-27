# CMakeList.txt: myShare 的 CMake 專案，在此包含來源及定義
# 專案專屬邏輯。
#
cmake_minimum_required (VERSION 3.8)

project(MyDll)
file(GLOB SRC_LIST_CPP ${PROJECT_SOURCE_DIR}/*.cpp)
file(GLOB SRC_LIST_C ${PROJECT_SOURCE_DIR}/*.c)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

if (CMAKE_SYSTEM_NAME MATCHES "windows")
	add_definitions(-DBASE_EXPORTS)
endif()

add_library(MyDll SHARED ${SRC_LIST_CPP} ${SRC_LIST_C})