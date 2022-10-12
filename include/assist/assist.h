#ifndef ASSIST_H
#define ASSIST_H

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "multirole_func/multirole_func.h"
#include "motion/motion.h"

//=-------Global-------=//
extern uint8_t game_status;
extern uint8_t n_active_robot;
static uint16_t game_sub_status;
extern uint8_t n_active_robot;
extern uint8_t style;

//=--------Prep--------=//
bool PreparationKickOffAssist();

//=--------Main--------=//
void GameMainSingleAssist();
void GameMainDoubleAssist();
void GameMainTripleAssist();
void GameMainQuadrupleAssist();

#endif