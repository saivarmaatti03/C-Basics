#include <stdio.h>
#include <limits.h>
void main()
{
	printf("Short int:\nSigned: %hd to %hd\n", SHRT_MIN, SHRT_MAX);
	printf("Unsigned: %d to %hu\n", 0, USHRT_MAX);
	printf("Int:\nSigned: %d to %d\n", INT_MIN, INT_MAX);
	printf("Unsigned: %d to %u\n", 0, UINT_MAX);
	printf("Long int:\nSigned: %ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("Unsigned: %d to %lu\n", 0, ULONG_MAX);
	printf("Long long int:\nSigned: %lld to %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
	printf("Unsigned: %d to %llu\n", 0, ULONG_LONG_MAX);
}
