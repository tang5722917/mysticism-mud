/*
 * @Author: Tangzp tang5722917@163.com
 * @Date: 2023-03-16 22:24:00
 * @LastEditors: Donald duck tang5722917@163.com
 * @LastEditTime: 2023-04-21 20:35:04
 * @FilePath: \mysticism-mud\inherit\combat\combat_UI_single.c
 * @Description: 提供单人战斗的UI
 * Copyright (c) 2023 by tang5722917@163.com, All Rights Reserved. 
 */

#include <ansi.h>
#include  <combat.h>
inherit INHERIT_PATH "combat/combat_UI";

nosave protected object ob1;
nosave protected object ob2;
nosave protected object fight_env,script;

//战斗过程颜色控制
string print_color_fig(F_INFO str,int type)
{
    string s;
    if(str == 0)
        return 0;
    if(type == USER )
    {
        s = str->str;
        s = GRN + "你："+ s + NOR;
        return s;
    }
    if(type == ENV )
    {
        s = str->str;
        s = RED +str->ob1->id_list()[0] +"："+ s + NOR;
        return s;
    }
    if(type == COM )
    {
        s = str->str;
        s = BYEL + s + NOR;
        return s;
    }
    return 0;
}

//执行一条战斗指令的动作
void print_fight(F_INFO msg)
{
    int type;
    if(msg->ob1 == 0)
        type = COM;
    else if(msg->ob1 == ob1)
        type = USER;
    else if(msg->ob1 == ob2)
        type = ENV;
    message("FIG",print_color_fig(msg,type),ob1);
    if(msg->act)
        perform(msg);
}

object get_ob_data(object ob)
{
    if(ob == ob1)
        return ob1_data[0];
    else
        return ob2_data[0];
}
string ob2_s_status(){return ::ob2_status(({ob2}));}
string ob2_s_equip(){return ::ob2_equip(({ob2}));}
string ob2_s_cards(){return ::ob2_cards(({ob2}));}
string out_s_area(){return ::out_area(({ob1}),({ob2}));}
string ob1_s_cards(){return ::ob1_cards(({ob1}));}
string ob1_s_equip(){return ::ob1_equip(({ob1}));}
string ob1_s_status(){return ::ob1_status(({ob1}));}

string print_ob1_ent(object *obs)
{
    object ob = obs[0];
    return "";
}
