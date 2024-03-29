/*
 * @Author: Donald duck tang5722917@163.com
 * @Date: 2023-03-21 19:50:11
 * @LastEditors: Donald duck tang5722917@163.com
 * @LastEditTime: 2023-05-30 15:56:23
 * @FilePath: \mysticism-mud\inherit\display\mxp.c
 * @Description: MXP输出基类
 *               提供MXP输出函数
 * Copyright (c) 2023 by Donald duck email: tang5722917@163.com, All Rights Reserved.
 */


#include <mxp.h>

string mxp_name(){return "名称";}
string mxp_explain(){return "对名称的解释";}

varargs string * print_mxp_name_all(int type, string input_str) {
    string *str,s,c;
    string title = "效果";
    str = ({});
    c = "<C FORE=";
    switch(type)
    {
        case MYSTIC:
            c += "cyan";
            break;
        case CARD:
            c += "aqua";
            break;
        case STATUS:
            c += "gold";
            break;
        case PROPERTY:
            c += "green";
            break;
        case EQUIP:
            c += "orange";
            break;
        case SUMMON:
            c += "fuchsia";
            break;
        case LIV_1:
            c += "white BACK=green";
            title = "介绍";
            break;
        case LIV_2:
            c += "white BACK=orange";
            title = "介绍";
            break;
        case LIV_3:
            c += "white BACK=red";
            title = "介绍";
            break;
        case MXP_MAP:
            c += "black BACK=white";
            title = "介绍";
            break;
        case OTHER:
            c += "white";
            break;
    } 
    c +=">";
    if(!stringp(input_str)){
        s = c+"<A \"Card\" hint=\"名称：" + mxp_name() +" "+title+"："+ mxp_explain() + "\">"+mxp_name()+"</A></C>";
        str += ({s});
        str += ({mxp_name()});
    }
    else{
        s = c+"<A \"Card\" hint=\"名称：" + mxp_name() +" "+title+"："+ mxp_explain() + "\">"+input_str+"</A></C>";
        str += ({s});
        str += ({input_str});
    }
    str += ({mxp_explain()});
    return str;
}

varargs string print_mxp_name(int type,object user,string input_str) {
    string *str = print_mxp_name_all(type,input_str);
    if (MXP_USER(user) == 1 )
        return str[0];
    else return str[1];
}

string print_mxp_name_tab(int type,object user) {
    string *str = print_mxp_name_all(type);
    if (MXP_USER(user) == 1 )
        return str[0];
    else return str[1];
}

string mxp_sprintf(string * str,int width,object ob)
{
    string ps;
    if(MXP_USER(ob))
    {
        if(width <= strwidth(str[1]))
            return str[0];
        else
            return str[0]+repeat_string(" ",width-strwidth(str[1]));
    }
    else
    {
        ps = "%-"+width+"s";
        return sprintf(ps,str[1]);
    }
}
