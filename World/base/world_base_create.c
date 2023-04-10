/*
 * @Author: Donald duck tang5722917@163.com
 * @Date: 2023-04-04 11:43:47
 * @LastEditors: Tangzp tang5722917@163.com
 * @LastEditTime: 2023-04-06 06:02:23
 * @FilePath: \mysticism-mud\World\base\world_base_create.c
 * @Description: 游戏全局资源预加载
 * Copyright (c) 2023 by Donald duck email: tang5722917@163.com, All Rights Reserved.
 */

#include <game_world.h>
inherit CORE_STD_PRE;

string ob_name()
{
    return "游戏基础资源对象";
}

 void create()
 {
    load_path_object(MYSTIC_PATH);
    ob_load_end(1);
 }