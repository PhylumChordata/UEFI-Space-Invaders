// UEFI Bootable Space Invaders Game - ThatOSDev ( 2021 )
// https://github.com/ThatOSDev/UEFI-Space-Invaders

// Add our Sprites here.
// 8x4 = 32       32x4 = 128
UINT32 sprites[128] = {
// Alien 1
1,0,0,1,1,0,0,1,
0,1,0,1,1,0,1,0,
0,0,1,1,1,1,0,0,
0,1,0,0,0,0,1,0,

// Alien 2
0,0,0,1,1,0,0,0,
0,1,0,1,1,0,1,0,
1,0,1,1,1,1,0,1,
0,0,1,0,0,1,0,0,

// Player Ship
0,0,0,1,1,0,0,0,
0,0,1,1,1,1,0,0,
0,0,1,0,0,1,0,0,
0,1,1,0,0,1,1,0,

// Barrier
0,0,1,1,1,1,0,0,
0,1,1,1,1,1,1,0,
1,1,1,0,0,1,1,1,
1,1,1,0,0,1,1,1
};
