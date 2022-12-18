
//{{BLOCK(main_menu)

//======================================================================
//
//	main_menu, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 163 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 5216 + 2048 = 7776
//
//	Time-stamp: 2022-10-29, 23:29:27
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_MAIN_MENU_H
#define GRIT_MAIN_MENU_H

#define main_menuTilesLen 5216
extern const unsigned short main_menuTiles[2608];

#define main_menuMapLen 2048
extern const unsigned short main_menuMap[1024];

#define main_menuPalLen 512
extern const unsigned short main_menuPal[256];

#endif // GRIT_MAIN_MENU_H

//}}BLOCK(main_menu)
