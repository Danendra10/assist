#include "assist/assist.h"

void AssistRun(assist_data_t *data, uint8_t *ret)
{
    // printf("stat: %d \n", data->game_status);

    switch (data->game_status)
    {
    case PREP_KICKOFF_HOME:
        AssistPrepKickoffHome(data, ret);
        break;
    case START_KICKOFF_HOME:
        AssistKickoffHome(data, ret);
        break;
    }
}

void AssistPrepKickoffHome(assist_data_t *data, uint8_t *ret)
{
    printf("DEF_Prep_kickoff: %d %d", data->robot_x[data->robot_num], data->robot_y[data->robot_num]);
}

void AssistKickoffHome(assist_data_t *data, uint8_t *ret)
{
    printf("DEF_Start_kickoff: %d %d", data->robot_x[data->robot_num], data->robot_y[data->robot_num]);
    *ret = 100;
}