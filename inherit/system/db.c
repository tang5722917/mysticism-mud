/*
 * @Author: Donald duck tang5722917@163.com
 * @Date: 2023-04-12 18:21:31
 * @LastEditors: Donald duck tang5722917@163.com
 * @LastEditTime: 2023-04-14 11:45:37
 * @FilePath: \mysticism-mud\inherit\system\db_d.c
 * @Description: 数据库基类
 * Copyright (c) 2023 by Donald duck email: tang5722917@163.com, All Rights Reserved.
 */
 inherit CORE_DB;

mixed get_db_handle(){return db_handle;}
string * get_db_table_column(){return db_table_column;}
