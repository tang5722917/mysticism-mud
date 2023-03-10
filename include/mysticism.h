/*** 
 * @Author: Donald duck tang5722917@163.com
 * @Date: 2023-02-17 10:19:27
 * @LastEditors: Donald duck tang5722917@163.com
 * @LastEditTime: 2023-03-14 16:49:16
 * @FilePath: \mysticism-mud\include\mysticism.h
 * @Description: 
 * @
 * @Copyright (c) 2023 by Donald duck tang5722917@163.com, All Rights Reserved. 
 */
#ifndef MYSTICISM_H
#define MYSTICISM_H

//开启调试模式
//#define DEBUG_MYSTICISM

/* 游戏目录 */
#define PATH_DIR "/"
#define  INHERIT_PATH     PATH_DIR "/inherit/"

// 游戏driver版本
#define VERSION "0.0.1"

/* 核心对象 */
#define MYSTICISM_LOGIN_OB PATH_DIR "system/obj/login"


/* 守护进程 */
#define MYSTICISM_LOGIN_D  PATH_DIR "system/daemons/login_d"
#define MYSTICISM_CHAR_D   PATH_DIR "system/daemons/char_d"
#define MYSTICISM_FIGHT_D  PATH_DIR "system/daemons/combat_d"
#define MYSTICISM_COMMAND_D PATH_DIR "system/daemons/command_d"
/* inherit 特性文件 */
#define CORE_STD_ROOM           PATH_DIR "inherit/room"
#define CORE_STD_PERSON         PATH_DIR "inherit/person"
#define CORE_STD_NPC            PATH_DIR "inherit/person_npc"
#define CORE_STD_TASK           PATH_DIR "inherit/task"
#define CORE_STD_PROPERTY       PATH_DIR "inherit/property"
#define CORE_STD_TEST           PATH_DIR "inherit/test"
#define CORE_STD_FIGHT_S        PATH_DIR "inherit/combat_single"
#define CORE_STD_FIGHT_M        PATH_DIR "inherit/combat_multi"

/* inherit 特性文件 (覆盖用)*/
#define _LIVING         PATH_DIR "inherit/living"
#define _USER           PATH_DIR "inherit/user"
#define _USER_QUEST     PATH_DIR "inherit/user_quest"
#define _COMMAND        PATH_DIR "inherit/command"

// 游戏管理员账号
#define WIZARD  "mysticism"

// 游戏欢迎界面
#define MOTD    PATH_DIR "World/front-page/MOTD1"

/* 守护进程 */
#define LOGIN_D     MYSTICISM_LOGIN_D
#define CHAR_D      MYSTICISM_CHAR_D
#define FIGHT_D     MYSTICISM_FIGHT_D
#define COMMAND_D   MYSTICISM_COMMAND_D

// START_ROOM   游戏出生点
#define START_ROOM  PATH_DIR "World/00/start_room"
#define Game_World  PATH_DIR "World/world_create"

// CMD_PATH_WIZ   巫师指令
#define CMD_PATH_WIZ ({PATH_DIR "cmds/wizard/"})
// CMD_PATH_STD   玩家指令
#define CMD_PATH_STD ({PATH_DIR "cmds/player/" ,PATH_DIR "verbs/common/"})

#define VERB_DIR PATH_DIR "verbs/"

/* 核心对象 (覆盖用)*/
#define VOID_OB     PATH_DIR "system/obj/void"
#define USER_OB     PATH_DIR "system/obj/user"


#endif
