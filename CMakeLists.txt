CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(calculator
	main.cpp
	factory.cpp
)

ADD_EXECUTABLE(test
	test.cpp
	factory.cpp
)

SET(DEBUG_FLAG "-g")
add_definitions(${DEBUG_FLAG})

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
