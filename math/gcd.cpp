typedef unsigned int uint_t;

uint_t gcd(uint_t x, uint_t y)
{
	if (x == 0 || y == 0)
		return x + y;
	uint_t kx, ky;
	for (kx = 0; x % 2 == 0; x >>= 1)
		kx++;
	for (ky = 0; y % 2 == 0; y >>= 1)
		ky++;
	while (x != y) {
		if (x > y) {
			x = (x - y) / 2;
			while (x % 2 == 0)
				x >>= 1;
		} else {
			y = (y - x) / 2;
			while (y % 2 == 0)
				y >>= 1;
		}
	}
	return x << (kx <= ky ? kx : ky);
}
