/* Question: Array maximum
 * Return the largest element. Require 1 <= n <= 20. The fixed global long array data has capacity 20; use only its first n elements. Domain: 1 <= n <= 20 and -100 <= each element <= 100 unless stated otherwise.
 * Complete only solve; write the answer to global result.
 * Use 10-20 nonblank code lines, excluding brace-only lines.
 */
#include <stdio.h>

long result;
long data[20];

void solve(long n)
{
    /* TODO: implement solve here. */
}

int main(void)
{
    int passed;
    passed = 0;
    data[0] = 5L;
    result = -999999L;
    solve(1L);
    if (result == 5L) {
        passed = passed + 1;
        printf("Test 1: PASS\n");
    } else {
        printf("Test 1: FAIL (expected %ld, got %ld)\n", 5L, result);
    }
    data[0] = 3L;
    data[1] = 1L;
    data[2] = 2L;
    result = -999999L;
    solve(3L);
    if (result == 3L) {
        passed = passed + 1;
        printf("Test 2: PASS\n");
    } else {
        printf("Test 2: FAIL (expected %ld, got %ld)\n", 3L, result);
    }
    data[0] = -4L;
    data[1] = -9L;
    data[2] = -2L;
    result = -999999L;
    solve(3L);
    if (result == -2L) {
        passed = passed + 1;
        printf("Test 3: PASS\n");
    } else {
        printf("Test 3: FAIL (expected %ld, got %ld)\n", -2L, result);
    }
    data[0] = 7L;
    data[1] = 7L;
    data[2] = 7L;
    result = -999999L;
    solve(3L);
    if (result == 7L) {
        passed = passed + 1;
        printf("Test 4: PASS\n");
    } else {
        printf("Test 4: FAIL (expected %ld, got %ld)\n", 7L, result);
    }
    data[0] = 100L;
    data[1] = 0L;
    data[2] = -100L;
    result = -999999L;
    solve(3L);
    if (result == 100L) {
        passed = passed + 1;
        printf("Test 5: PASS\n");
    } else {
        printf("Test 5: FAIL (expected %ld, got %ld)\n", 100L, result);
    }
    printf("Passed %d of 5 test cases (%d%%)\n", passed, passed * 20);
    return passed == 5 ? 0 : 1;
}
