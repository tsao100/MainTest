# CMakeList.txt: MainTest 的 CMake 專案，在此包含來源及定義
# 專案專屬邏輯。
#
cmake_minimum_required (VERSION 3.8)

# 將來源新增到此專案的可執行檔。
add_executable (MainTest "MainTest.cpp" "MainTest.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET MainTest PROPERTY CXX_STANDARD 20)
endif()

# TODO: 新增測試，並視需要安裝目標。
link_directories(${PROJECT_SOURCE_DIR}/lib)

target_link_libraries(MainTest MyDll)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)