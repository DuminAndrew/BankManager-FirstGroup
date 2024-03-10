cmake_minimum_required(VERSION 3.10)
project(banking_service)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Source files for server
set(SERVER_SOURCE_FILES 
    src/server/client_database.cpp
    src/server/server_database.cpp
    src/server/server.cpp
    src/server/manager.cpp
)

# Source files for client
set(CLIENT_SOURCE_FILES
    src/user/user.cpp
    src/client/main_client.cpp
)

# Source files for manager
set(MANAGER_SOURCE_FILES
    src/manager/main_manager.cpp
)

# Server executable
add_executable(server ${SERVER_SOURCE_FILES})

# Client executable
add_executable(client ${CLIENT_SOURCE_FILES})

# Manager executable
add_executable(manager ${MANAGER_SOURCE_FILES})
