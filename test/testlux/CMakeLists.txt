include_directories(../../include)

file(GLOB TEST_SOURCES *.cpp)

add_executable(testlux ${TEST_SOURCES})

target_link_libraries(testlux lux libgtest libgmock)

add_test(NAME testlux COMMAND testlux)
