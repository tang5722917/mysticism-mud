/*
 * @Author: Donald duck tang5722917@163.com
 * @Date: 2023-02-17 10:19:27
 * @LastEditors: Tangzp tang5722917@163.com
 * @LastEditTime: 2023-02-25 06:09:14
 * @FilePath: \mysticism-mud\system\daemons\login_d.c
 * @Description: 
 * 
 * Copyright (c) 2023 by Donald duck tang5722917@163.com, All Rights Reserved. 
 */
inherit CORE_LOGIN_D;
#include <ansi.h>

protected void welcome(object ob)
{
    color_cat(MOTD);
    write("\n                               版本"VERSION);
    write("\n^_^!请输入你的登录ID:");
    input_to("get_id", ob);
}
