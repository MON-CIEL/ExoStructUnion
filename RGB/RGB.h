struct Srgb {
	unsigned char r;
	unsigned char g;
	unsigned char b;
};

union UColor {
	unsigned int val;
	Srgb components;
	unsigned char tabCol[3];
};