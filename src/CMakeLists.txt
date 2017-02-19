file(GLOB LUX_SOURCES *.cpp)

include_directories(../include)

add_library(lux SHARED ${LUX_SOURCES})

target_link_libraries(lux lua)
