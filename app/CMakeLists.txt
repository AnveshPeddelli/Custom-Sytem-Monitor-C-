add_executable(app main.cpp)

target_link_libraries(app PRIVATE DataCollector)

#set ide folder
set_target_properties(app PROPERTIES FOLDER "apps")

add_custom_command(TARGET app
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E echo "Running app.exe..."
    COMMAND $<TARGET_FILE:app>
)