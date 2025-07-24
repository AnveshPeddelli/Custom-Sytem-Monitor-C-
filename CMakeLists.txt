cmake_minimum_required(VERSION 3.15)
project(CustomSystemMonitorC LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#ADD ALL LIBS AND APPS
add_subdirectory(libs/DataCollector)
add_subdirectory(app/)

add_custom_command(TARGET app
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E echo "Running app.exe..."
    COMMAND $<TARGET_FILE:app>
)