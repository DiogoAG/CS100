CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(movie
	src/main.cpp
	src/GetRecommendation.cpp
        src/MovieList.cpp
)

ADD_EXECUTABLE(test
	tests/test.cpp
	src/GetRecommendation.cpp
        src/MovieList.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
