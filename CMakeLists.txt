cmake_minimum_required(VERSION 3.10)

project(pwdgen)

add_executable(${PROJECT_NAME} src/main.cpp src/PasswordImpl.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/headers)
