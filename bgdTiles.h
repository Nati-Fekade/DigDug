
//{{BLOCK(bgdTiles)

//======================================================================
//
//	bgdTiles, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 9 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 288 + 2048 = 2848
//
//	Time-stamp: 2022-10-30, 22:52:39
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BGDTILES_H
#define GRIT_BGDTILES_H

#define bgdTilesTilesLen 288
extern const unsigned short bgdTilesTiles[144];

#define bgdTilesMapLen 2048
extern const unsigned short bgdTilesMap[1024];

#define bgdTilesPalLen 512
extern const unsigned short bgdTilesPal[256];

#endif // GRIT_BGDTILES_H

//}}BLOCK(bgdTiles)
