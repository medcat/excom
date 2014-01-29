
#include <stdlib.h>
#include <stdio.h>
#define FILE "protocol.test"

#define TEST_PREFIX
#include "./utest.h"
#include "./protocol.test"
#undef TEST_PREFIX

int main() {
#define TEST_BEFORE
#include "./utest.h"
TEST_BEFORE_HOOK1;
#include "./protocol.test"
TEST_BEFORE_HOOK2;
#undef TEST_BEFORE

#define TEST_DURING
#include "./utest.h"
#include "./protocol.test"
#undef TEST_DURING

#define TEST_AFTER
#include "./utest.h"
TEST_AFTER_HOOK1;
#include "./protocol.test"
TEST_AFTER_HOOK2;
#undef TEST_AFTER

  return TEST_RETURN;
}
