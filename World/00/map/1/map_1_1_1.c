/*
 * @Author: Donald duck tang5722917@163.com
 * @Date: 2023-05-16 19:30:32
 * @LastEditors: Donald duck tang5722917@163.com
 * @LastEditTime: 2023-05-23 18:09:20
 * @FilePath: \mysticism-mud\World\00\map\1\map_1_1_1.c
 * @Description: 廷根 黑夜教会/职业小队地图 - 地下 -走廊
 * Copyright (c) 2023 by Donald duck email: tang5722917@163.com, All Rights Reserved.
 */
#include <ansi.h>
#include <game_world.h>
 
 inherit CORE_STD_ROOM;
 
 void create()
 {
     set("short", "走廊");
     set("long", "\n");
     set("dq", 1); // 设置所属世界
     set("outdoors", 0); // 设置是否户外
     setArea(1, 1, 1, 1,"圣塞琳娜教堂地下"); // 设置所属地区和x,y,z坐标
     set("no_get", 0); // 是否禁止拾起
     set("no_drop", 0); // 是否禁止丢弃
     set("no_fight", 1); // 是否禁止战斗
     set("no_sleep",0);   //是否可以休息
     set("exits",([ 
        "up"         : PATH_00_MAP "1/map_0_0_6",
        "west"       : PATH_00_MAP "1/map_1_1_6",
        "east"       : PATH_00_MAP "1/map_1_1_5",
        "north"      : PATH_00_MAP "1/map_1_1_2",
        "south"      : PATH_00_MAP "1/map_1_1_7",
        "northeast"  : PATH_00_MAP "1/map_1_1_4"
     ]));
     set("objects",([
        
     ]));
 
     setup();
 }
