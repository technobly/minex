#ifndef _PLAYER_DATA_H
#define _PLAYER_DATA_H

#define PLAYER_DRAW_SCALE				0x10
#define PLAYER_MODEL_SCALE				12

#define PLAYER_THRUST_FRAME				1

#define PLAYER_FLAME_NUM_FRAMES			2

#define PLAYER_EXPLODE_FRAME			6
#define PLAYER_EXPLODE_NUM_FRAMES		4

#define PLAYER_TELEPORT_FRAME			10
#define PLAYER_TELEPORT_NUM_FRAMES		5

#define PLAYER_HYPERSPACE_NUM_FRAMES		8

extern const signed char * const player_anim[];
extern const signed char player_behind[];
extern const signed char* const player_hyperspace[];

#endif
