/*
 * @Author: Donald duck tang5722917@163.com
 * @Date: 2023-03-03 18:22:14
 * @LastEditors: Donald duck tang5722917@163.com
 * @LastEditTime: 2023-05-24 11:40:16
 * @FilePath: \mysticism-mud\inherit\space\room_base.c
 * @Description: ROOM基类扩展
 * 
 * Copyright (c) 2023 by git config user.email, All Rights Reserved. 
 */
inherit CORE_ROOM;
inherit CORE_STD_TEST;

int get_room_type()
{
    return this_object()->query("room_type");
}

varargs void setup(int room_type)
{
    this_object()->set("room_type",room_type);
    if(room_type == 0)
        this_object()->set("no_clean_up",1);
    else
    {
        this_object()->set("no_clean_up",0);
    }
    reset();
}

// 设置环境区域和坐标
varargs void setArea(mixed area, int z, int y, int x, string name)
{
    set("area", area);
    set("zone", ([
        "x":x,
        "y":y,
        "z":z,
        "name":name,
        "visible":1
    ]));
}

// 获取区域坐标
string coordinate()
{
    mapping coordinate = query("zone");
    int x, y, z;
    string name;
    if (!mapp(coordinate))
        coordinate = ([]);
    x = coordinate["x"];
    y = coordinate["y"];
    z = coordinate["z"];
    name = coordinate["name"];
    return sprintf("(%d,%d,%d,%s)", x, y, z, name);
}

// 获取区域名称
string Room_name()
{
    mapping coordinate = query("zone");
    string name;
    if (!mapp(coordinate))
        coordinate = ([]);
    name = coordinate["name"];
    return sprintf("(%s)", name);
}

int obs_num_in_room()
{
    mapping obs;
    obs = query_temp("objects");
    return sizeof(obs);
}

object ob_in_room(string id)
{
    mapping obs;
    obs = query_temp("objects");
    foreach (string key,object ob in obs)
    {
        if (id == ob->query("id"))
            return ob;
    }
    return 0;
}

//获取ROOM short name
string get_room_name(){
    return query("short");
}

//获取 ROOM AREA Z Y X 
int * get_room_azyx()
{
    mapping coordinate = query("zone");
    return ({query("area"),coordinate["z"],coordinate["y"],coordinate["x"]});
}
