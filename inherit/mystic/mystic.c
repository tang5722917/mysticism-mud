/*
 * @Author: Donald duck tang5722917@163.com
 * @Date: 2023-02-21 18:09:47
 * @LastEditors: Donald duck tang5722917@163.com
 * @LastEditTime: 2023-05-08 11:42:14
 * @FilePath: \mysticism-mud\inherit\mystic\mystic.c
 * @Description:  非凡能力基础类
 *
 * Copyright (c) 2023 by Donald duck tang5722917@163.com, All Rights Reserved.
 */
inherit _MXP;
inherit CORE_STD_TEST;
inherit INHERIT_PATH "mystic/mystic_value";
inherit INHERIT_PATH "mystic/mystic_card";
inherit INHERIT_PATH "mystic/mystic_status";
/*
序列编号 1-22
1  占卜家	小丑	  魔术师    无面人   秘偶大师	诡法师	   古代学者	  奇迹师	诡秘侍者	愚者
2  学徒	    戏法大师  占星人    记录官    旅行家	秘法师	   漫游者	  旅法师	星之匙	    门
3  偷盗者	诈骗师	  解密学者	盗火人    窃梦家	寄生者	   欺瞒导师	  命运木马	 时之虫   	错误
4  观众	    读心者	  心理医生	催眠师    梦境行者	操纵师	   织梦人	  洞察者	作家	   空想家
5  歌颂者	祈光人	  太阳神官  公证人    光之祭司	无暗者	   正义导师	  逐光者	 纯白天使	太阳
6  阅读者	推理学员  守知者	博学者    秘术导师	预言家	   洞悉者	  智天使	 全知之眼	白塔
7  水手   	暴怒之民  航海家	风眷者    海洋歌者	灾难主祭   海王	      天灾       雷神	   暴君
8  秘祈人	倾听者	  隐修士	蔷薇主教  牧羊人	黑骑士	   三首圣堂	  秽语长老	  暗天使	倒吊人
9  收尸人	掘墓人	  通灵者	死灵导师  看门人	不死者	   摆渡人	  死亡执政官  苍白皇帝 	死神
10 不眠者	午夜诗人  梦魇	    安魂师    灵巫	    守夜人	   恐惧主教	  隐秘之仆	  厄难骑士	黑暗
11 战士	    格斗家	  武器大师  黎明骑士  守护者	猎魔者	    银骑士	  荣耀者	  神明之手	黄昏巨人
12 猎人	    挑衅者	  纵火家	阴谋家    收割者	铁血骑士   战争主教	  天气术士	   征服者	红祭司
13 刺客	    教唆者	  女巫	    欢愉      痛苦	   绝望	       不老      灾难	     末日	   魔女
14 耕种者	医师	  丰收祭司	生物学家   德鲁伊	古代炼金师	抬棺人	   荒芜主母	    自然行者  母亲
15 药师	    驯兽师	  吸血鬼	魔药教授   深红学者	巫王	   召唤大师	   创生者	    美神	月亮
16 律师	    野蛮人	  贿赂者	腐化男爵   混乱导师	堕落伯爵	狂乱法师   熵之公爵	   弑序亲王	黑皇帝
17 仲裁人	治安官	  审讯者	法官	  惩戒骑士	律令法师	混乱猎手   平衡者	   秩序之手	审判者
18 罪犯	    折翼天使  连环杀手	恶魔	  欲望使徒	魔鬼	    呓语者	   鲜血大公	  污秽君王	深渊
19 囚犯	    疯子	  狼人	   活尸	       怨魂    木偶	       沉默门徒	  古代邪物	   神孽	   被缚者
20 窥秘人	格斗学者  巫师	    卷轴教授   星象师	神秘学家	预言大师	贤者	   知识皇帝	隐者
21 通识者	考古学家  鉴定师    机械专家   天文学家	炼金术士	奥秘学者	知识导师	文明启蒙者	完美者
22 怪物	    机器	  幸运儿    灾祸教士   赢家	   厄运法师	   混乱行者	   先知	      水银之蛇	命运之轮
*/
// 返回该非凡特性编号

int rank_num()
{
    return 0;
}
//返回非凡特性编号
int mystic_id()
{
    int rank = this_object()->mystic_rank();
    if((rank>=0)&&(rank<=9))
        return rank_num()*10+rank;
    else return 1000+rank_num();
}

//非凡特性名称
string mystic_name(){return "";}
//非凡特性short 介绍
string mystic_short(){return "";}

string mxp_name(){return mystic_name();}
string mxp_explain(){return mystic_short();}
