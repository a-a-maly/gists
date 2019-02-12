#include <inttypes.h>
typedef unsigned int uint_t;

static uint_t read_uint()
{
	const uint_t D = 10;
	uint_t u = 0;
	do {
		int c = getchar_unlocked();
		assert (0 <= c);
		u = c - '0';
	} while (D <= u);
	for (;;) {
		uint_t v = getchar_unlocked() - '0';
		if (D <= v)
			break;
		u = u * D + v;
	}
	return u;
}

static uint64_t read_uint64()
{
	const uint_t D = 10;
	uint64_t u = 0;
	do {
		int c = getchar_unlocked();
		assert (0 <= c);
		u = c - '0';
	} while (D <= u);
	for (;;) {
		uint_t v = getchar_unlocked() - '0';
		if (D <= v)
			break;
		u = u * D + v;
	}
	return u;
}

static int read_int()
{
	const uint_t D = 10;
	uint_t u = 0, s = 0;
	do {
		int c = getchar_unlocked();
		assert (0 <= c);
		u = c - '0';
		if (c == '-') {
			s = 1;
			u = 0;
		}
	} while (D <= u);
	for (;;) {
		uint_t v = getchar_unlocked() - '0';
		if (D <= v)
			break;
		u = u * D + v;
	}
	return s ? -u : u;
}
