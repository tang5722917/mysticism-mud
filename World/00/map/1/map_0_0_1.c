/*
 * @Author: Donald duck tang5722917@163.com
 * @Date: 2023-05-16 19:30:32
 * @LastEditors: Donald duck tang5722917@163.com
 * @LastEditTime: 2023-05-23 19:28:08
 * @FilePath: \mysticism-mud\World\00\map\1\map_0_0_1.c
 * @Description: 廷根 黑夜教会/职业小队地图 - 休息室
 * Copyright (c) 2023 by Donald duck email: tang5722917@163.com, All Rights Reserved.
 */
#include <ansi.h>
#include <game_world.h>
#include <world_map.h>
#include "area_1.h"
inherit AREA_1 "area_1_map";
 
 void create()
 {
     set("short", "休息室");
     set("long", "里面放着茶几和几个长沙发。如果你累了可以躺在这里睡一觉\n");
     set("dq", 1); // 设置所属世界
     set("outdoors", 0); // 设置是否户外
     setArea(1, 0, 0, 1,"黑荆棘安保公司"); // 设置所属地区和x,y,z坐标
     set("no_get", 0); // 是否禁止拾起
     set("no_drop", 0); // 是否禁止丢弃
     set("no_fight", 1); // 是否禁止战斗
     set("no_sleep",1);   //是否可以休息
     set("exits",([ 
        "southwest" : PATH_00_MAP "1/map_0_0_2"
     ]));
     set("objects",([

     ]));
 
     setup();
 }
