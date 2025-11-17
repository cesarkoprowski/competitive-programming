cmake_minimum_required(VERSION 3.25)
project(competitive_programming)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE ALL_CPP_FILES
        "codeforces/*.cpp"
        "beecrowd/*.cpp"
        "hackerrank/*.cpp"
        "sbc/*.cpp"
)

foreach(SOURCE_FILE ${ALL_CPP_FILES})
    get_filename_component(EXEC_NAME ${SOURCE_FILE} NAME_WE)
    add_executable(${EXEC_NAME} ${SOURCE_FILE}
            codeforces/41A/translation.cpp
            codeforces/41A/translation.cpp
            codeforces/41A/translation.cpp
            codeforces/41A/translation.cpp
            codeforces/41A/translation.cpp
            codeforces/41A/translation.cpp
            codeforces/41A/translation.cpp
            codeforces/41A/translation.cpp
            codeforces/41A/translation.cpp)
endforeach()
