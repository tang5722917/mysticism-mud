/*
 * @Author: Donald duck tang5722917@163.com
 * @Date: 2023-04-07 19:29:13
 * @LastEditors: Donald duck tang5722917@163.com
 * @LastEditTime: 2023-04-24 17:17:28
 * @FilePath: \mysticism-mud\inherit\entity\entity.c
 * @Description:  物品基类
 * Copyright (c) 2023 by Donald duck email: tang5722917@163.com, All Rights Reserved.
 */

inherit CORE_STD_TEST;
inherit _MXP;
inherit _NAME;
inherit _MOVE;
inherit _MESSAGE;

string print_card_name(object user);
string print_equip_name(object user);
string print_summon_name(object user);
string print_status_name(object user);

/*开头数字代表类型
*9  继承自property特殊物品
*1  Card
*2  Equit
*3  Summon
*4  Skill
*5  Status
*/
int entity_id(){return 0;}
varargs string print_name(object user,object ob)
{
    string str = "";
    if(!ob)
        ob = this_object();
    if(!user)
        user = this_player();
    if( inherits(CORE_STD_CARD,ob)  )
        str += ob->print_card_name(user);
    else if( inherits(CORE_STD_EQUIP,ob)  )
        str += print_equip_name(user);
    else if( inherits(CORE_STD_SUMMON,ob)  )
        str += ob->print_summon_name(user);
    else if( inherits(CORE_STD_STATUS,ob)  )
        str += ob->print_status_name(user);
    return str;
}
