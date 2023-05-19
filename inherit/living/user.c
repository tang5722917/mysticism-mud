
inherit  CORE_STD_PERSON;
inherit _USER_COMBAT_RECORD;
inherit _USER_GMCP;
inherit _USER_QUEST;
inherit INHERIT_PATH "living/status" ;
inherit INHERIT_PATH "living/status_task_days" ;
inherit INHERIT_PATH "living/status_task_main" ;
inherit INHERIT_PATH "living/mxp_user" ;
inherit INHERIT_PATH "living/msp_user" ;
inherit INHERIT_PATH "living/user_task_base" ;
inherit INHERIT_PATH "living/user_monitor" ;
inherit INHERIT_PATH "living/user_message" ;
#include <ansi.h>
//临时显示在玩家眼前的对象
nosave object *temp_object_list=({});
//user 战斗对象
protected nosave object fight_ob;
//user 上一场战斗结果对象
protected nosave object last_fight;
//该玩家是否在战斗过程中
int is_fight_user()
{
    return query("user_fight");
}
//玩家是否需要确认
int is_choice_command(){
    return query("choice_command");
}
void set_choice_command(int value){
    set("choice_command",value);
}
//是否允许玩家输入指令
int is_command_busy(){
    return query("is_command_busy");
}
void enable_command(){
    set("is_command_busy",0);
}
void disable_command(){
    set("is_command_busy",1);
}
int start_fight(object fob)
{
    if(fob != 0)
    {
        write(HBYEL "你已进入战斗状态!"NOR+"\n");
        fight_ob = fob;
        return set("user_fight",1);
    }
    return 0;
}

int end_fight()
{
    fight_ob = 0;
    set("user_fight",0);
}

int is_temp_object_user()
{
    return sizeof(temp_object_list);
}

int add_object_temp_list(object ob)
{

}

object * fight(object me,object ob)
{
    return ({me});
}

object fight_object()
{
    return fight_ob;
}

int into_cur_fight(object fob)
{
    if(fob != 0)
    {
        fight_ob = fob;
        write(HBYEL "你已进入战斗场景"NOR);
    }
    return 0;
}

varargs void version_boardcast(int v)
{
    object o;
    o = load_object(_BOARD);
    write("版本说明：最初版本\n"+o->board_print("Test",50));
}

void user_env_config()
{
    enable_command();
    init_user_monitor(0,0,env("USER_MAX_INPUT"));  //玩家输入限制
    init_user_meaage();                            //初始化USER_MSG
    init_user_task_main();
    init_user_task_days();
}
void user_setup()
{
    user_env_config();
    person_setup();
}

void remove()
{
}
