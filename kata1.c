/*This code does not execute properly. Try to figure out why.*/
int multiply(int a, int b) {
  return a * b;
}

//Test
#include <criterion/criterion.h>
int multiply(int, int);

Test(ExampleTests, should_pass_all_the_tests_provided) {
    cr_assert_eq(multiply(5, 6), 30);
    cr_assert_eq(multiply(12, 12), 144);
}
