
//{{BLOCK(win)

//======================================================================
//
//	win, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 170 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 5440 + 2048 = 8000
//
//	Time-stamp: 2022-10-29, 23:57:17
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short winTiles[2720] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xC690,0xCCCC,0xC690,0xCCCC,0xC690,0xCCCC,0xC690,0xCCCC,
	0xC690,0xCCCC,0xC690,0xCCCC,0x9900,0x9999,0x0000,0x9000,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCC6,0x996C,0xCCC6,0x096C,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x9999,0x9999,0x0000,0x0000,

	0x096C,0x0000,0x096C,0x0000,0x096C,0x0000,0x096C,0x0000,
	0x096C,0x0000,0x096C,0x0000,0x6699,0x6666,0xC690,0x6CCC,
	0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,
	0x0000,0xC690,0x0000,0xC690,0x0009,0x9900,0x0009,0x0000,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0x9999,0xCCC6,0x9000,0xCCC6,
	0xCCCC,0x6CCC,0xCCCC,0x6CCC,0xCCCC,0x6CCC,0xCCCC,0x6CCC,
	0xCCCC,0x6CCC,0xCCCC,0x6CCC,0x996C,0x9999,0x096C,0x0000,

	0x0009,0x0000,0x0009,0x0000,0x0009,0x0000,0x0009,0x0000,
	0x0009,0x0000,0x0009,0x0000,0x0000,0x6690,0x0000,0xC690,
	0x9000,0xCCC6,0x9000,0xCCC6,0x9000,0xCCC6,0x9000,0xCCC6,
	0x9000,0xCCC6,0x9000,0xCCC6,0x6666,0x9999,0x6CCC,0x0009,
	0xCCCC,0x096C,0xCCCC,0x096C,0xCCCC,0x096C,0xCCCC,0x096C,
	0xCCCC,0x096C,0xCCCC,0x096C,0x9999,0x6699,0x0000,0xC690,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x6666,0x0009,0x6CCC,0x0009,

	0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,
	0x0000,0xC690,0x0000,0xC690,0x0009,0xC690,0x0009,0xC690,
	0x6CCC,0x0009,0x6CCC,0x0009,0x6CCC,0x0009,0x6CCC,0x0009,
	0x6CCC,0x0009,0x6CCC,0x0009,0x6CCC,0x0009,0x6CCC,0x0009,
	0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,
	0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,
	0x0000,0x9000,0x0000,0x9000,0x0000,0x9000,0x0000,0x9000,
	0x0000,0x9000,0x0000,0x9000,0x6690,0x6666,0xC690,0x6CCC,

	0xCCC6,0xCCCC,0xCCC6,0xCCCC,0xCCC6,0xCCCC,0xCCC6,0xCCCC,
	0xCCC6,0xCCCC,0xCCC6,0xCCCC,0x9999,0x9999,0x0009,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0009,0x0000,0x0009,0x0000,
	0x0000,0x9000,0x0000,0x9000,0x0000,0x9000,0x0000,0x9000,
	0x0000,0x9000,0x0000,0x9000,0x0000,0x9000,0x0000,0x9000,
	0xCCC6,0x096C,0xCCC6,0x096C,0xCCC6,0x096C,0xCCC6,0x096C,
	0xCCC6,0x096C,0xCCC6,0x096C,0xCCC6,0x096C,0xCCC6,0x096C,

	0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,
	0x0000,0x6690,0x0000,0x9900,0x0000,0x0000,0x0000,0x0000,
	0x6CCC,0x0009,0x6CCC,0x0009,0x6CCC,0x0009,0x6CCC,0x0009,
	0x6666,0x0009,0x9999,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0009,0xC690,0x0009,0xC690,0x0009,0xC690,0x0009,0xC690,
	0x0009,0xC690,0x0009,0xC690,0x0009,0xC690,0x0009,0xC690,
	0xC690,0x6CCC,0xC690,0x6CCC,0xC690,0x6CCC,0xC690,0x6CCC,
	0x6690,0x6666,0x9900,0x9999,0x0000,0x0000,0x0000,0x0000,

	0x0009,0x0000,0x0009,0x0000,0x0009,0x0000,0x0009,0x0000,
	0x0009,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x9900,0x9999,0x6690,0x6666,
	0xC690,0xCCCC,0xC690,0xCCCC,0xC690,0xCCCC,0xC690,0xCCCC,
	0x0000,0x0000,0x0000,0x0000,0x9999,0x9999,0x6666,0x6666,
	0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
	0x0009,0x0000,0x0009,0x0000,0x0009,0x9900,0x0009,0x6690,
	0x0009,0xC690,0x0009,0xC690,0x0009,0xC690,0x0009,0xC690,

	0x0000,0x0000,0x0000,0x0000,0x9999,0x9999,0x6666,0x6666,
	0xCCCC,0x6CCC,0xCCCC,0x6CCC,0xCCCC,0x6CCC,0xCCCC,0x6CCC,
	0xC690,0xCCCC,0x6690,0x6666,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xCCCC,0xCCCC,0x6666,0xCC66,0x0000,0xC690,0x0000,0xC690,
	0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,
	0x0009,0xC690,0x0009,0x6690,0x0009,0x0000,0x0009,0x0000,
	0x0009,0x0000,0x0009,0x0000,0x0009,0x0000,0x0009,0x0000,

	0xCCCC,0xCCCC,0x6666,0x6666,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xCCCC,0x6CCC,0xCC66,0x6CCC,0xC690,0x6CCC,0xC690,0x6CCC,
	0xC690,0x6CCC,0xC690,0x6CCC,0xC690,0x6CCC,0xC690,0x6CCC,
	0x0000,0x9000,0x0000,0x9000,0x0000,0x9000,0x0000,0x9000,
	0x0000,0x9000,0x0000,0x9000,0x6690,0x6666,0xC690,0xCCCC,
	0xCCC6,0x096C,0xCCC6,0x096C,0xCCC6,0x096C,0xCCC6,0x096C,
	0xCCC6,0x096C,0xCCC6,0x096C,0xCCCC,0x66CC,0xCCCC,0xCCCC,

	0xC690,0x6CCC,0xC690,0x6CCC,0xC690,0x6CCC,0xC690,0x6CCC,
	0xC690,0x6CCC,0xC690,0x6CCC,0x9966,0x9999,0x096C,0x0000,
	0x9000,0xCCC6,0x9000,0xCCC6,0x9000,0xCCC6,0x9000,0xCCC6,
	0x9000,0xCCC6,0x9000,0xCCC6,0x6666,0xCCCC,0xCCCC,0xCCCC,
	0x096C,0x0000,0x096C,0x0000,0x096C,0x0000,0x096C,0x0000,
	0x096C,0x0000,0x096C,0x0000,0x66CC,0x6666,0xCCCC,0x6CCC,
	0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,0x0000,0xC690,
	0x0000,0xC690,0x0000,0xC690,0x6666,0x9966,0xCCCC,0x096C,

	0x6CCC,0x0009,0x6CCC,0x0009,0x6CCC,0x0009,0x6CCC,0x0009,
	0x6CCC,0x0009,0x6CCC,0x0009,0x9999,0x0000,0x0000,0x0000,
	0x0009,0xC690,0x0009,0xC690,0x0009,0xC690,0x0009,0xC690,
	0x0009,0xC690,0x0009,0xC690,0x0000,0x9900,0x0000,0x0000,
	0xC690,0x6CCC,0xC690,0x6CCC,0xC690,0x6CCC,0xC690,0x6CCC,
	0xC690,0x6CCC,0xC690,0x6CCC,0x9900,0x9999,0x0000,0x9000,
	0x0009,0x0000,0x0009,0x0000,0x0009,0x0000,0x0009,0x0000,
	0x0009,0x0000,0x0009,0x0000,0x6666,0x6666,0xCCC6,0xCCCC,

	0x0009,0x0000,0x0009,0x0000,0x0009,0x0000,0x0009,0x0000,
	0x0009,0x0000,0x0009,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1110,0x0000,0x1110,0x0000,0x1110,
	0x0000,0x1110,0x0000,0x1110,0x0000,0x1110,0x0000,0x1110,
	0x0000,0x0000,0x0001,0x0000,0x0001,0x0000,0x0001,0x0000,
	0x0001,0x0000,0x0001,0x0000,0x0001,0x0000,0x0001,0x0000,
	0x0000,0x0000,0x1000,0x0111,0x1000,0x0111,0x1000,0x0111,
	0x1000,0x0111,0x1000,0x0111,0x1000,0x0111,0x1000,0x0111,

	0x0000,0x0000,0x0000,0x1100,0x0000,0x1100,0x0000,0x1100,
	0x0000,0x1100,0x0000,0x1100,0x0000,0x1100,0x0000,0x1100,
	0x0000,0x0000,0x1111,0x0001,0x1111,0x0001,0x1111,0x0011,
	0x0111,0x0111,0x0111,0x0111,0x0111,0x1110,0x0111,0x1110,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,0x0000,0x1000,
	0x0000,0x1000,0x0000,0x1000,0x0000,0x1000,0x0000,0x1000,

	0x0000,0x0000,0x0000,0x0000,0x0011,0x0000,0x0011,0x0000,
	0x0011,0x0000,0x0011,0x0000,0x0011,0x0000,0x0011,0x0000,
	0x0000,0x1110,0x0000,0x1110,0x0000,0x1110,0x0000,0x1110,
	0x0000,0x1110,0x0000,0x1110,0x0000,0x1110,0x0000,0x1110,
	0x0001,0x0000,0x0001,0x0000,0x0001,0x0000,0x0001,0x0000,
	0x0001,0x0000,0x0001,0x0000,0x0001,0x0000,0x0001,0x0000,
	0x1000,0x0111,0x1000,0x0111,0x1000,0x0111,0x1000,0x0111,
	0x1000,0x0111,0x1000,0x0111,0x1000,0x0111,0x1000,0x0111,

	0x0000,0x1100,0x0000,0x1100,0x0000,0x1100,0x0000,0x1100,
	0x0000,0x1100,0x0000,0x1100,0x0000,0x1100,0x0000,0x1100,
	0x0111,0x1100,0x0111,0x1000,0x0111,0x1000,0x0111,0x0000,
	0x0111,0x0000,0x0111,0x0000,0x0111,0x0000,0x0111,0x0000,
	0x0001,0x0000,0x0011,0x0000,0x0111,0x0000,0x1111,0x0000,
	0x1111,0x0000,0x1110,0x0001,0x1110,0x0001,0x1100,0x0011,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1111,0x1000,0x1111,0x1100,0x1111,0x1110,0x1001,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0001,0x0000,0x0011,0x0000,0x0111,0x0000,
	0x1000,0x0011,0x0000,0x0111,0x0000,0x1111,0x0000,0x1110,
	0x0000,0x1110,0x0000,0x1100,0x0000,0x1000,0x0000,0x0000,
	0x0000,0x1000,0x0000,0x1000,0x0000,0x1000,0x0000,0x1000,
	0x0001,0x1000,0x0011,0x1000,0x0111,0x1000,0x0111,0x1000,
	0x0001,0x0000,0x0001,0x1000,0x0001,0x1100,0x0001,0x1110,
	0x0001,0x1111,0x1001,0x0111,0x1101,0x0011,0x1111,0x0001,

	0x1111,0x0000,0x0111,0x0000,0x0011,0x0000,0x0001,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1111,0x0000,0x1110,0x0001,0x1100,0x0011,0x1000,0x0111,
	0x0000,0x1111,0x0000,0x1110,0x0000,0x1100,0x0000,0x1000,
	0x1000,0x0111,0x1000,0x0111,0x1000,0x0111,0x1000,0x0111,
	0x1000,0x0111,0x1001,0x0111,0x1011,0x0111,0x1111,0x0111,
	0x1110,0x1000,0x1110,0x1001,0x1100,0x1001,0x1100,0x1011,
	0x1000,0x1011,0x1000,0x1111,0x0000,0x1111,0x0000,0x1110,

	0x0000,0x1110,0x0000,0x1110,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1111,0x0000,0x0111,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1717,0xEEEE,
	0x1111,0x0111,0x1110,0x0111,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1100,0x0000,0x1100,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0099,

	0x0011,0x0000,0x0011,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9000,
	0x0000,0x1100,0x0000,0x1100,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0x0000,
	0x0000,0x9000,0x0000,0x7000,0x0000,0x7900,0x0000,0xEE00,
	0x0000,0xEE00,0x0000,0xEE00,0x0000,0xEE00,0x0000,0xE070,

	0x8B88,0xEE71,0xD9B8,0xEE78,0xD90B,0xE78D,0x987E,0x188B,
	0xB17E,0x78D8,0x81EE,0x71DD,0x1EEE,0xE777,0xEEEE,0xEEEE,
	0x000E,0x0000,0x00EE,0x0000,0x00EE,0x0000,0x0EE7,0x0000,
	0x0EEE,0x0000,0x0EE7,0xB000,0x0E1E,0x8B00,0x00EE,0x0B00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x000B,0x0000,0x00B8,0x0000,0xB890,0x9009,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0xB000,0x990B,0x8B90,0xAA98,0x09B8,0x99E0,

	0x9000,0x0B8D,0xB900,0xBDDD,0xD8B0,0x8DDD,0xBABB,0xDAAA,
	0xBABB,0xDAAA,0xAAA9,0xDDAA,0xD8DA,0xDADD,0xAD80,0xDDDA,
	0x0000,0x0000,0x0000,0x0000,0x000B,0x0000,0x009D,0x0000,
	0x009D,0x0000,0x0098,0x0000,0x000B,0x0000,0x0098,0x0000,
	0x0000,0x1900,0x0000,0x18B0,0x0000,0x8D8B,0x0000,0x1BB8,
	0x0000,0x1888,0x0000,0x1BB9,0x0000,0xEEE0,0x0000,0x1EEE,
	0x1111,0x0009,0x1111,0x0091,0xB811,0x0008,0x9009,0x0000,
	0x8B11,0x00BB,0x1111,0x0091,0x1111,0x0001,0x1E11,0x0009,

	0x0000,0x7970,0x0000,0x0790,0x0000,0x0900,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEE00,0xEEEE,0x7900,0x0077,
	0x9000,0x0009,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xB9EE,0x0009,0x888E,0x0000,0xBBB0,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x8B00,0x8B98,0x9000,0xB88B,0x0000,0x0BB0,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x000B,0x00E0,0x0000,0x0E00,0x0000,0xEE00,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xDD80,0xDDDD,0xD8EE,0x8DD8,0x99EE,0xBDDB,0x0000,0xB99B,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x0009,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x1E9E,0x0000,0x1111,0x9000,0xE111,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x11E1,0x000E,0xE1EE,0x000E,0xE90E,0x000E,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9000,0x88DD,
	0x9000,0x4BDD,0x9000,0x4BDD,0x9000,0x88DD,0x9000,0x09DD,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xD80B,0x0B88,
	0xDD04,0x0444,0xDD04,0xB8BB,0xDD9B,0xB8BB,0xDD00,0x0444,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x88D8,0x8D9B,
	0x44DD,0xDD04,0xBBDD,0x8DB8,0xBBDD,0xDDB8,0x44DD,0xDD04,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xB8B9,0xF8DF,
	0x0B89,0xDBB8,0x00BB,0xDB04,0x9008,0xD888,0x9B89,0xD90B,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x000F,0x0000,0x0098,0x0000,0x009D,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDD90,
	0x0000,0xDD90,0x0000,0xDD90,0x0000,0xDD90,0x0000,0xDD90,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0FD8,0xBB8D,
	0x09BB,0x4FDD,0x000B,0x88D8,0x0098,0xFDDF,0x0009,0xFDF0,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xD898,0x0B88,
	0x8D04,0x044B,0x8D0B,0x08B9,0xDDB0,0x9BBB,0x8D00,0x044B,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xF8DF,0xDDB0,
	0xDBB8,0xDD99,0xDB04,0xDD0F,0xD888,0xDDB8,0xD90B,0xDDB8,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0B88,0x0000,
	0x044B,0x0000,0x044B,0x0000,0x0B88,0x0000,0x0BD0,0x0000,
	0x9000,0x098D,0x0000,0x0099,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0xD800,0x0B88,0x9900,0x0099,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x88D8,0x8D9B,0x9999,0x9900,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xB8B9,0xD90B,0x0900,0x9000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0098,0x0000,0x0009,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x8D90,0x0000,0x9900,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0009,0xFDF0,0x0000,0x0900,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xD800,0x9988,0x9900,0x009B,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xD90B,0x8DB8,0x9000,0x9909,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0F4B,0x0000,0x0990,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDD00,
	0x0000,0xDD00,0x0000,0xDD00,0x0000,0xDD00,0x0000,0xDD00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0DDD,0x0000,0xDDDD,0x000D,0x000D,0x00DD,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xD000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0DDD,0xD000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDDDD,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0xD000,0x0000,0xD000,
	0x0000,0xD000,0x0000,0xD000,0x0000,0xD000,0x0000,0x0000,
	0x0000,0x0000,0xDDD0,0x000D,0xDDDD,0x00DD,0x0DDD,0x00DD,
	0x00DD,0x0000,0x00DD,0x0000,0x00DD,0x0000,0xDDDD,0x00DD,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xDDD0,0xDDDD,0xDDD0,0xDDDD,0xDDD0,0xDDDD,0x0000,0x0DDD,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0DDD,0xDD00,0x0DDD,0xDDD0,0x0DDD,0x0DD0,0x0000,0x0DD0,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x00DD,0x0000,0x00DD,0xDD00,0x00DD,0xDD00,0x00DD,0xDD00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xDDDD,0x000D,0x0000,0x0DD0,0x0000,0xDDD0,0x000D,0x0D00,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0DD0,0xD00D,0xDDDD,0xDDDD,0xDDDD,0xDDDD,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x000D,0x0000,0x00DD,0x0000,0x0DDD,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0DD0,
	0x0000,0x0DD0,0x0000,0x0DD0,0x0000,0x0DD0,0x0000,0x0DD0,
	0x0000,0x0000,0xDD00,0x0000,0xDD00,0x0000,0xDD00,0xDD00,
	0xDD00,0xDDD0,0xDD00,0x00DD,0xDD00,0x000D,0xDD00,0x000D,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x000D,0x0000,
	0x00DD,0x0000,0x0DD0,0x0000,0x0DD0,0x0000,0x0DD0,0x0000,
	0x0000,0x0DD0,0x0000,0x0DD0,0x0000,0x0DD0,0x0000,0x0DD0,
	0x0000,0x0DD0,0x0000,0x0DD0,0x0000,0x0DD0,0x0000,0x0DD0,
	0x00DD,0x0000,0x00DD,0x0000,0x00DD,0x0000,0x00DD,0x0000,
	0x00DD,0x0000,0x00DD,0x0000,0x00DD,0x0000,0x00DD,0x0000,
	0x0000,0xD0DD,0x0000,0xD0D0,0x0000,0xD0D0,0x0000,0xD0DD,
	0xDDDD,0xD00D,0xDDDD,0xD000,0x0000,0xD000,0x0000,0xD000,

	0x000D,0x0000,0x000D,0xD000,0x000D,0xD0D0,0xD00D,0xD0DD,
	0xDDDD,0xD00D,0x0DDD,0xD000,0x000D,0xD000,0x000D,0xD000,
	0xDDDD,0xDD00,0xD00D,0xDD00,0xD000,0xDD00,0xDDD0,0xD000,
	0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0xDDDD,0xD000,
	0xDDDD,0xD000,0x0000,0xD000,0x00DD,0xD000,0x0DDD,0x0000,
	0xDDD0,0x0000,0xD000,0x0000,0xDDDD,0xDD00,0xDDDD,0xDD00,
	0xDD0D,0x0000,0x000D,0x0000,0x0DDD,0x0000,0x0DDD,0x0000,
	0xDD00,0x0000,0x0DDD,0x0000,0x0DDD,0x0000,0x00DD,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xD000,
	0x0000,0xD000,0x0000,0xD000,0x0000,0xD000,0x0000,0xD000,
	0xDD00,0x0DDD,0x0000,0x0DDD,0x0000,0x0DD0,0x00DD,0x0D00,
	0x000D,0x0DD0,0x000D,0x0DD0,0xDDDD,0x0DDD,0xDDDD,0x0DDD,
	0x0000,0x0DDD,0x0000,0x0DDD,0x0000,0x0DDD,0x0000,0x0DDD,
	0x0000,0x0DDD,0x0000,0x0DDD,0x0000,0x0DDD,0x0000,0x0DDD,
	0x0000,0x00DD,0x0000,0x00DD,0xD000,0xDDDD,0xD000,0xDDDD,
	0xD000,0xDDDD,0xD000,0x0000,0xDD00,0x0000,0x0D00,0x0000,

	0x00DD,0xDD00,0x00DD,0xDD00,0x0DDD,0xDD00,0x0DDD,0xDD00,
	0x0DDD,0xDD00,0x0DD0,0xDD00,0x0DD0,0xDD00,0x0DD0,0xDD00,
	0xD00D,0x0DDD,0xDDD0,0x00DD,0xDDDD,0x0000,0xD000,0x000D,
	0x0000,0x00DD,0x0000,0x0DD0,0x0000,0xDD00,0x0000,0xD000,
	0xD000,0x00DD,0xD000,0x00DD,0xD000,0x00DD,0xD000,0x00DD,
	0xD000,0x00DD,0xD000,0x00DD,0xD000,0x00DD,0xD000,0x00DD,
	0x0000,0x0DD0,0x0000,0x0DD0,0x0000,0x0DD0,0x0000,0xDDD0,
	0x0000,0xDDDD,0x0000,0x0DD0,0x0000,0x0DD0,0x0000,0x0DD0,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDDDD,0x000D,
	0xDDDD,0xD00D,0x0000,0xD000,0x0000,0xD000,0x0000,0xD000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xDDDD,0x00DD,0x0000,0x00D0,0x0000,0x0DD0,0x0000,0x0D00,
	0xDD00,0x0000,0xDD00,0x0000,0xDD00,0x0000,0xDD00,0x0000,
	0xDD00,0xD000,0xDD00,0xDDDD,0xDD00,0xDDDD,0xDD00,0xD000,
	0x0D00,0x0000,0x0D00,0x0000,0x0D00,0x0000,0x0DDD,0x0000,
	0x00DD,0xD000,0x000D,0xDD00,0x000D,0x0DD0,0x00DD,0xDDD0,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDD00,
	0x00DD,0xDD00,0xDDD0,0x0DD0,0xD000,0x0DD0,0x0D0D,0xDD00,
	0x0000,0x0DD0,0x0000,0x0DD0,0x0000,0x0DD0,0x00DD,0x0DD0,
	0xDDDD,0xDDDD,0xD0DD,0xDDDD,0x0000,0x0DD0,0x0000,0x0DD0,
	0x0000,0x0000,0x0000,0x0000,0xDD00,0x00DD,0xDD00,0x00D0,
	0x0DDD,0x00D0,0x0DDD,0x0DDD,0x0DD0,0x0DDD,0xDD00,0xDD00,
	0x0000,0x0000,0x00DD,0x0000,0x00DD,0xDD00,0xDDDD,0x0DDD,
	0x00DD,0x0000,0x00DD,0x0000,0x00DD,0x0000,0x00DD,0x0000,

	0x00DD,0x0000,0x00DD,0x0000,0xDDDD,0xDDDD,0x00DD,0x0000,
	0x00DD,0x0000,0x00DD,0x0000,0x00DD,0x0000,0x00DD,0x0D00,
	0x000D,0xD000,0x000D,0x0000,0x000D,0x0000,0x000D,0x0000,
	0x000D,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xDDDD,0xDD00,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0DDD,0x0000,0x0DDD,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x00D0,0xDD00,0x0000,0xDD00,0x0000,0xDD00,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xD000,0x00DD,0xD000,0x00DD,0xD000,0x00D0,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0DD0,0x0000,0x0DD0,0x0000,0xDDD0,0x0000,0xDDD0,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0xD000,0x0000,0xD000,0xDDDD,0xD000,0xDDDD,0xD000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0D00,0x0000,0x0DD0,0x0000,0x00D0,0xD00D,0x00DD,
	0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xDD00,0x0000,0xDD00,0x0000,0xDD00,0x0000,0xDD00,0x0000,
	0xDD00,0x0000,0xDD00,0x0000,0xDD00,0x0000,0xDD00,0x0000,
	0x00DD,0x0DD0,0x0DDD,0x0DD0,0x0DDD,0x0DD0,0x0DD0,0x0DD0,
	0xDDD0,0xDD00,0xDD00,0xD00D,0xD000,0x00DD,0x0000,0x0000,
	0x00DD,0xD000,0x0000,0xD0D0,0x0000,0x00D0,0xDD00,0x00D0,
	0x0DDD,0xDDD0,0x0DDD,0xDDD0,0x0000,0x0000,0x0000,0x0000,

	0x000D,0x0DD0,0x00DD,0x0DD0,0x00DD,0x0DD0,0x00DD,0x0DD0,
	0x00DD,0xDDD0,0x000D,0xDDD0,0x0000,0x0000,0x0000,0x0000,
	0x0000,0xD000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xDDDD,0x0000,0x0DDD,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x00DD,0xD000,0x000D,0xD000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x00DD,0xDD00,0xDDDD,0xDDDD,0xDDDD,0xDDDD,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x000D,0x0000,0x000D,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xDD00,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short winMap[1024] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0001,0x0002,0x0003,0x0004,0x0005,0x0006,
	0x0007,0x0008,0x0009,0x0003,0x000A,0x000B,0x0001,0x0002,
	0x0003,0x0004,0x000C,0x000D,0x0000,0x000E,0x000D,0x000F,
	0x0010,0x0003,0x0004,0x0011,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0012,0x0013,0x0000,0x0413,0x0412,0x040D,
	0x040E,0x000E,0x000D,0x0000,0x0014,0x0015,0x0012,0x0013,
	0x0000,0x0413,0x0016,0x000D,0x0000,0x000E,0x000D,0x0413,
	0x0412,0x0000,0x0017,0x0018,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0012,0x0013,0x0000,0x0413,0x0412,0x040D,
	0x040E,0x000E,0x000D,0x0019,0x001A,0x0815,0x0012,0x0013,
	0x0000,0x0413,0x0016,0x000D,0x0000,0x000E,0x000D,0x0413,
	0x001B,0x001A,0x001C,0x0818,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0012,0x0013,0x0000,0x0413,0x0412,0x040D,
	0x040E,0x000E,0x000D,0x001D,0x001E,0x000D,0x0012,0x0013,
	0x0000,0x0413,0x0016,0x000D,0x0000,0x000E,0x000D,0x0413,
	0x001F,0x0020,0x0021,0x0412,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0022,0x0023,0x0820,0x0024,0x0008,0x0025,
	0x0026,0x0005,0x0409,0x0820,0x0027,0x0028,0x0022,0x0023,
	0x0820,0x0024,0x0029,0x0409,0x0820,0x0027,0x0028,0x002A,
	0x002B,0x0820,0x0024,0x002C,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0819,0x081A,0x081A,0x0414,0x0014,0x081A,
	0x081C,0x0018,0x0415,0x081A,0x0C19,0x0000,0x0819,0x081A,
	0x081A,0x0414,0x0000,0x0415,0x081A,0x0C19,0x0000,0x0418,
	0x0C1C,0x081A,0x0414,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x002D,0x002E,0x0000,0x0000,0x002F,0x0030,0x0430,
	0x0031,0x0032,0x0033,0x0034,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0035,0x0036,0x0000,0x0000,0x0037,0x0038,0x0438,
	0x0039,0x003A,0x0436,0x0438,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0035,0x0036,0x003B,0x003C,0x0037,0x0038,0x0438,
	0x0435,0x003D,0x003E,0x0438,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0035,0x003F,0x0040,0x0041,0x0042,0x0038,0x0438,
	0x0435,0x0000,0x0043,0x0438,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0044,0x0045,0x0000,0x0000,0x0046,0x0047,0x0048,
	0x0444,0x0049,0x004A,0x0048,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x004B,0x004C,0x004D,0x004E,0x004F,0x0050,0x0051,
	0x0000,0x0052,0x0053,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0054,0x0055,0x0056,0x0057,0x0058,0x0059,0x005A,
	0x0000,0x005B,0x005C,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x005D,0x005E,0x005F,0x0060,0x0061,0x0000,0x0000,0x0000,
	0x0062,0x0063,0x0064,0x0065,0x0066,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0067,0x0068,0x0069,0x006A,0x006B,0x0000,0x0000,0x0000,
	0x006C,0x006D,0x006E,0x006F,0x0070,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0071,0x0072,0x0000,0x0073,0x0074,0x0075,
	0x0000,0x0076,0x0077,0x0078,0x0079,0x007A,0x007B,0x007C,
	0x007D,0x007E,0x0000,0x0000,0x0000,0x007F,0x0080,0x0000,
	0x0081,0x0000,0x0000,0x0082,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0482,0x0083,0x0084,0x0085,0x0086,0x0087,
	0x0000,0x0088,0x0089,0x008A,0x008B,0x008C,0x008D,0x008E,
	0x0000,0x008F,0x0090,0x0091,0x0000,0x0092,0x0093,0x0094,
	0x0095,0x0096,0x0097,0x0098,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0871,0x0888,0x0099,0x009A,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x009B,0x0000,0x009C,0x0000,0x009D,
	0x0000,0x009E,0x009F,0x00A0,0x0000,0x00A1,0x00A2,0x00A3,
	0x00A4,0x00A5,0x00A6,0x00A7,0x00A8,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x00A9,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short winPal[256] __attribute__((aligned(4)))=
{
	0x0000,0x0383,0x4A40,0x0011,0x4A52,0x3DE0,0x03DE,0x01B1,
	0x739C,0x0021,0x77A0,0x0841,0x03FF,0x7FFE,0x001E,0x3DEF,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(win)