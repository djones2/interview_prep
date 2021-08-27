#include <stdio.h>

#define TRUE 1
#define FALSE 0

int greater_than_5(int n) {
	if (n>5) {
		return TRUE;
	} else {
		return 5;
	}
}

void test(int expected, int actual, const char *testname) {
	if (expected == actual) {
		printf("%s PASSED\n", testname);
	} else {
		printf("%s FAILED, expected = %d, actual = %d\n", testname, expected, actual);
	}
}

int main() {
	test(TRUE, greater_than_5(33), "33 is greater than 5");
	return 0;
}