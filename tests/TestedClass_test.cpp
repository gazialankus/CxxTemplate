#include "../src/TestedClass.h"
#include "gtest/gtest.h"

namespace {

// The fixture for testing class Foo.
class TestedClassTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if its body
  // is empty.

  TestedClassTest() {
     // You can do set-up work for each test here.
  }

  ~TestedClassTest() override {
     // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  void SetUp() override {
     // Code here will be called immediately after the constructor (right
     // before each test).
  }

  void TearDown() override {
     // Code here will be called immediately after each test (right
     // before the destructor).
  }

  // Objects declared here can be used by all tests in the test case for Foo.
};

// Tests that the Foo::Bar() method does Abc.
TEST_F(TestedClassTest, CanAdd) {
	TestedClass tc;
	EXPECT_EQ(5, tc.add(2, 3));
}

// Tests that Foo does Xyz.
//TEST_F(TestedClassTest, DoesXyz) {
//  // Exercises the Xyz feature of Foo.
//}

}  // namespace

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
