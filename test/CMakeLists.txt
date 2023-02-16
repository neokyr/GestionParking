enable_testing()

add_executable(
        parkingTest
        test.cpp
        ../include/ListeCarteVolee.hpp)
target_link_libraries(
        parkingTest
        GTest::gtest_main
        gmock
)

include(GoogleTest)
gtest_discover_tests(parkingTest)
