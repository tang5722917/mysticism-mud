/*
 * @Author: Donald duck tang5722917@163.com
 * @Date: 2023-03-28 17:59:07
 * @LastEditors: Donald duck tang5722917@163.com
 * @LastEditTime: 2023-04-04 18:14:50
 * @FilePath: \mysticism-mud\inherit\combat\combat_script.c
 * @Description: 战斗剧本基类，用于控制敌我战斗过程
 * Copyright (c) 2023 by Donald duck email: tang5722917@163.com, All Rights Reserved.
 */
 //一定时间+回合时执行脚本
 void combat_process(int fight_time,int fight_round,object fig)
 {
 }
//一定时间时执行脚本
 void combat_process_time(int fight_time,object fig)
 {
 }
//一定回合时执行脚本
 void combat_process_round(int fight_round,object fig)
 {
    object ob1,ob2;
    function *funs;
    string s;
    int n;
    ob1 = fig->get_player1();
    ob2 = fig->get_player2();
    funs=functions(this_object());
    foreach(function f in funs)
    {
        s = sprintf("%O",f);
        if(s[1..21] == "combat_process_round_")
        {
            n = to_int(s[22..strlen(s)-2]);
            if(n == fight_round)
                call_other(this_object(),s[1..strlen(s)-2],ob1,ob2);
        }
    }
 }


//具体script对象实现
 void combat_event_init(object o1,object o2){}
 void combat_event_end(object o1,object o2){}
