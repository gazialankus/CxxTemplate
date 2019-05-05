include(GoogleTest)

add_executable(tests TestedClass_test.cpp ../src/TestedClass.cpp)

target_link_libraries(tests GTest::GTest)

gtest_discover_tests(tests)



