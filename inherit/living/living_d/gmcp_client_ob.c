/*
 * @Author: Donald duck tang5722917@163.com
 * @Date: 2023-09-06 00:05:51
 * @LastEditors: Donald duck tang5722917@163.com
 * @LastEditTime: 2023-09-11 04:03:47
 * @FilePath: \mysticism-mud\inherit\living\living_d\gmcp_client_ob.c
 * @Description:  处理GMCP Client.*** 指令
 * Copyright (c) 2023 by Donald duck email: tang5722917@163.com, All Rights Reserved.
 */
//检查当前客户端/GUI是否支持GMCP
int client_gmcp_check(object user)
{
    mapping gmcp_info;
    gmcp_info = user->get_gmcp_info();
    if((gmcp_info["client"] == "mudlet")||(gmcp_info["client"] == "tintin"))
        if((gmcp_info["gui"] == "MYSTICISM_AUTO_TEST") || (gmcp_info["gui"] == "MYSTICISM_MUD_GUI") || (gmcp_info["gui"] == "TINTIN_GUI"))
            if()
}

void gmcp_deal(object user,string var,mixed * gmcp_req,object env)
{
    string gmcp_sub;
    string *vars = explode(var, "." );
    gmcp_sub = vars[1];
    switch(gmcp_sub)
    {
        case "Info":
            user->gmcp_info_init(gmcp_req);
            user->gmcp_enable(client_gmcp_check(user));
            break;
        default:
            debug_message("[" + ctime() + "] [GMCP Instruction ERROR] "+ gmcp_sub+" \n");
            break;
    }
}
