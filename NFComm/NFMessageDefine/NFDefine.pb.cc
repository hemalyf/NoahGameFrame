// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NFDefine.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "NFDefine.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace NFMsg {

namespace {

const ::google::protobuf::EnumDescriptor* EGameEventCode_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameMsgID_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EItemType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameEquipSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameElementType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameItemSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameItemExpiredType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EDrawDropItemState_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGuildPowerType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ETaskState_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ETaskType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EBattleType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_NFDefine_2eproto() {
  protobuf_AddDesc_NFDefine_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "NFDefine.proto");
  GOOGLE_CHECK(file != NULL);
  EGameEventCode_descriptor_ = file->enum_type(0);
  EGameMsgID_descriptor_ = file->enum_type(1);
  EItemType_descriptor_ = file->enum_type(2);
  EGameEquipSubType_descriptor_ = file->enum_type(3);
  EGameElementType_descriptor_ = file->enum_type(4);
  EGameItemSubType_descriptor_ = file->enum_type(5);
  EGameItemExpiredType_descriptor_ = file->enum_type(6);
  EDrawDropItemState_descriptor_ = file->enum_type(7);
  EGuildPowerType_descriptor_ = file->enum_type(8);
  ETaskState_descriptor_ = file->enum_type(9);
  ETaskType_descriptor_ = file->enum_type(10);
  EBattleType_descriptor_ = file->enum_type(11);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_NFDefine_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_NFDefine_2eproto() {
}

void protobuf_AddDesc_NFDefine_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016NFDefine.proto\022\005NFMsg*\266\n\n\016EGameEventCo"
    "de\022\020\n\014EGEC_SUCCESS\020\000\022\025\n\021EGEC_UNKOWN_ERRO"
    "R\020\001\022\026\n\022EGEC_ACCOUNT_EXIST\020\002\022\033\n\027EGEC_ACCO"
    "UNTPWD_INVALID\020\003\022\026\n\022EGEC_ACCOUNT_USING\020\004"
    "\022\027\n\023EGEC_ACCOUNT_LOCKED\020\005\022\030\n\024EGEC_ACCOUN"
    "T_SUCCESS\020\006\022\033\n\027EGEC_VERIFY_KEY_SUCCESS\020\007"
    "\022\030\n\024EGEC_VERIFY_KEY_FAIL\020\010\022\035\n\031EGEC_SELEC"
    "TSERVER_SUCCESS\020\t\022\032\n\026EGEC_SELECTSERVER_F"
    "AIL\020\n\022\030\n\024EGEC_CHARACTER_EXIST\020n\022\032\n\026EGEC_"
    "SVRZONEID_INVALID\020o\022\031\n\025EGEC_CHARACTER_NU"
    "MOUT\020p\022\032\n\026EGEC_CHARACTER_INVALID\020q\022\033\n\027EG"
    "EC_CHARACTER_NOTEXIST\020r\022\030\n\024EGEC_CHARACTE"
    "R_USING\020s\022\031\n\025EGEC_CHARACTER_LOCKED\020t\022\026\n\022"
    "EGEC_ZONE_OVERLOAD\020u\022\023\n\017EGEC_NOT_ONLINE\020"
    "v\022\027\n\023EGEC_ALREAY_IN_TEAM\020w\022\034\n\030EGEC_INVAL"
    "ID_TEAM_INVITE\020x\022\022\n\016EGEC_TEAM_FULL\020y\022\032\n\026"
    "EGEC_MAIL_UPDATE_ERROR\020z\022\034\n\030EGEC_MAIL_TO"
    "NAME_INVALID\020{\022\032\n\026EGEC_MAIL_DELETE_ERROR"
    "\020|\022\033\n\027EGEC_MAIL_TOWNAME_EQUAL\020}\022\023\n\017EGEC_"
    "LACK_MONEY\020~\022\025\n\021EGEC_FULL_PACKAGE\020\177\022\026\n\021E"
    "GEC_INVALID_ITEM\020\200\001\022\035\n\030EGEC_INVALID_CONS"
    "IGNMENT\020\201\001\022\030\n\023EGEC_NOT_ENOUGH_VIP\020\202\001\022\024\n\017"
    "EGEC_NEED_LEVEL\020\203\001\022\031\n\024EGEC_MAX_FRIEND_LI"
    "ST\020\204\001\022\030\n\023EGEC_MAX_ENEMY_LIST\020\205\001\022\030\n\023EGEC_"
    "MAX_GANGS_LSIT\020\206\001\022\032\n\025EGEC_LIMITS_TO_RIGH"
    "TS\020\207\001\022\034\n\027EGEC_INVALID_GANGS_NAME\020\210\001\022\034\n\027E"
    "GEC_REPEAT_ENTER_GANGS\020\211\001\022\035\n\030EGEC_INVALI"
    "D_GANGSMEMBER\020\212\001\022\034\n\027EGEC_MASTER_LEAVE_GA"
    "NGS\020\213\001\022\033\n\026EGEC_GANGS_TITLE_OUTOF\020\214\001\022\035\n\030E"
    "GEC_ENTER_GATEWAY_FAILD\020\215\001\022\030\n\023EGEC_NO_SE"
    "RVER4ZONE\020\216\001\022\027\n\022EGEC_INVALID_SKILL\020\217\001\022\034\n"
    "\027EGEC_ENTER_GAME_SUCCESS\020\220\001\022\036\n\031EGEC_CREA"
    "TE_GUILD_SUCCESS\020\310\001\022\034\n\027EGEC_JOIN_GUILD_S"
    "UCCESS\020\311\001\022\035\n\030EGEC_LEAVE_GUILD_SUCCESS\020\312\001"
    "*\272\037\n\nEGameMsgID\022\017\n\013EGMI_UNKNOW\020\000\022\025\n\021EGMI"
    "_EVENT_RESULT\020\001\022\030\n\024EGMI_EVENT_TRANSPOND\020"
    "\002\022\025\n\021EGMI_CLOSE_SOCKET\020\003\022\035\n\031EGMI_MTL_WOR"
    "LD_REGISTERED\020\n\022\037\n\033EGMI_MTL_WORLD_UNREGI"
    "STERED\020\013\022\032\n\026EGMI_MTL_WORLD_REFRESH\020\014\022\035\n\031"
    "EGMI_LTM_LOGIN_REGISTERED\020\024\022\037\n\033EGMI_LTM_"
    "LOGIN_UNREGISTERED\020\025\022\032\n\026EGMI_LTM_LOGIN_R"
    "EFRESH\020\026\022\036\n\032EGMI_PTWG_PROXY_REGISTERED\020\036"
    "\022 \n\034EGMI_PTWG_PROXY_UNREGISTERED\020\037\022\033\n\027EG"
    "MI_PTWG_PROXY_REFRESH\020 \022\034\n\030EGMI_GTW_GAME"
    "_REGISTERED\020(\022\036\n\032EGMI_GTW_GAME_UNREGISTE"
    "RED\020)\022\031\n\025EGMI_GTW_GAME_REFRESH\020*\022\025\n\021EGMI"
    "_STS_NET_INFO\0202\022\027\n\023EGMI_STS_HEART_BEAT\020d"
    "\022\022\n\016EGMI_REQ_LOGIN\020e\022\022\n\016EGMI_ACK_LOGIN\020f"
    "\022\023\n\017EGMI_REQ_LOGOUT\020g\022\027\n\023EGMI_REQ_WORLD_"
    "LIST\020n\022\027\n\023EGMI_ACK_WORLD_LIST\020o\022\032\n\026EGMI_"
    "REQ_CONNECT_WORLD\020p\022\032\n\026EGMI_ACK_CONNECT_"
    "WORLD\020q\022 \n\034EGMI_REQ_KICK_CLIENT_INWORLD\020"
    "r\022\030\n\024EGMI_REQ_CONNECT_KEY\020x\022\030\n\024EGMI_ACK_"
    "CONNECT_KEY\020z\022\033\n\026EGMI_REQ_SELECT_SERVER\020"
    "\202\001\022\033\n\026EGMI_ACK_SELECT_SERVER\020\203\001\022\027\n\022EGMI_"
    "REQ_ROLE_LIST\020\204\001\022\027\n\022EGMI_ACK_ROLE_LIST\020\205"
    "\001\022\031\n\024EGMI_REQ_CREATE_ROLE\020\206\001\022\031\n\024EGMI_REQ"
    "_DELETE_ROLE\020\207\001\022\032\n\025EGMI_REQ_RECOVER_ROLE"
    "\020\210\001\022\030\n\023EGMI_REQ_ENTER_GAME\020\226\001\022\030\n\023EGMI_AC"
    "K_ENTER_GAME\020\227\001\022\030\n\023EGMI_REQ_LEAVE_GAME\020\230"
    "\001\022\030\n\023EGMI_ACK_LEAVE_GAME\020\231\001\022\027\n\022EGMI_REQ_"
    "SWAP_GAME\020\232\001\022\030\n\023EGMI_REQ_SWAP_SCENE\020\233\001\022\030"
    "\n\023EGMI_ACK_SWAP_SCENE\020\234\001\022\030\n\023EGMI_REQ_END"
    "_BATTLE\020\235\001\022\030\n\023EGMI_ACK_END_BATTLE\020\236\001\022\032\n\025"
    "EGMI_ACK_OBJECT_ENTRY\020\310\001\022\032\n\025EGMI_ACK_OBJ"
    "ECT_LEAVE\020\311\001\022#\n\036EGMI_ACK_OBJECT_PROPERTY"
    "_ENTRY\020\312\001\022!\n\034EGMI_ACK_OBJECT_RECORD_ENTR"
    "Y\020\313\001\022\032\n\025EGMI_ACK_PROPERTY_INT\020\322\001\022\034\n\027EGMI"
    "_ACK_PROPERTY_FLOAT\020\323\001\022\035\n\030EGMI_ACK_PROPE"
    "RTY_STRING\020\324\001\022\035\n\030EGMI_ACK_PROPERTY_DOUBL"
    "E\020\325\001\022\035\n\030EGMI_ACK_PROPERTY_OBJECT\020\326\001\022\025\n\020E"
    "GMI_ACK_ADD_ROW\020\334\001\022\030\n\023EGMI_ACK_REMOVE_RO"
    "W\020\335\001\022\026\n\021EGMI_ACK_SWAP_ROW\020\336\001\022\030\n\023EGMI_ACK"
    "_RECORD_INT\020\337\001\022\032\n\025EGMI_ACK_RECORD_FLOAT\020"
    "\340\001\022\033\n\026EGMI_ACK_RECORD_DOUBLE\020\341\001\022\033\n\026EGMI_"
    "ACK_RECORD_STRING\020\342\001\022\033\n\026EGMI_ACK_RECORD_"
    "OBJECT\020\343\001\022\032\n\025EGMI_ACK_RECORD_CLEAR\020\344\001\022\031\n"
    "\024EGMI_ACK_RECORD_SORT\020\345\001\022\022\n\rEGMI_REQ_MOV"
    "E\020\346\001\022\022\n\rEGMI_ACK_MOVE\020\347\001\022\031\n\024EGMI_REQ_MOV"
    "E_IMMUNE\020\350\001\022\031\n\024EGMI_ACK_MOVE_IMMUNE\020\351\001\022\033"
    "\n\026EGMI_REQ_SKILL_OBJECTX\020\360\001\022\033\n\026EGMI_ACK_"
    "SKILL_OBJECTX\020\361\001\022\027\n\022EGMI_REQ_SKILL_POS\020\362"
    "\001\022\027\n\022EGMI_ACK_SKILL_POS\020\363\001\022\031\n\024EGMI_REQ_I"
    "TEM_OBJECT\020\364\001\022\031\n\024EGMI_ACK_ITEM_OBJECT\020\365\001"
    "\022\026\n\021EGMI_REQ_ITEM_POS\020\366\001\022\026\n\021EGMI_ACK_ITE"
    "M_POS\020\367\001\022\022\n\rEGMI_REQ_CHAT\020\372\001\022\022\n\rEGMI_ACK"
    "_CHAT\020\373\001\022\027\n\022EGMI_REQ_SALE_ITEM\020\374\001\022\030\n\023EGM"
    "I_REQ_SPLIT_ITEM\020\375\001\022\032\n\025EGMI_REQ_PRODUCE_"
    "ITEM\020\376\001\022\027\n\022EGMI_REQ_PICK_ITEM\020\377\001\022\031\n\024EGMI"
    "_REQ_ACCEPT_TASK\020\200\002\022\034\n\027EGMI_REQ_COMPELET"
    "E_TASK\020\201\002\022\026\n\021EGMI_REQ_JOIN_PVP\020\204\002\022\026\n\021EGM"
    "I_REQ_EXIT_PVP\020\205\002\022\027\n\022EGMT_ACK_START_PVP\020"
    "\206\002\022\034\n\027EGMI_REQ_SEARCH_OPPNENT\020\230\002\022\034\n\027EGMI"
    "_ACK_SEARCH_OPPNENT\020\231\002\022\033\n\026EGMT_REQ_START"
    "_OPPNENT\020\232\002\022\033\n\026EGMT_ACK_START_OPPNENT\020\233\002"
    "\022\033\n\026EGMI_ACK_ONLINE_NOTIFY\020\242\002\022\034\n\027EGMI_AC"
    "K_OFFLINE_NOTIFY\020\243\002\022\032\n\025EGMI_REQ_CREATE_G"
    "UILD\020\254\002\022\032\n\025EGMI_ACK_CREATE_GUILD\020\255\002\022\030\n\023E"
    "GMI_REQ_JOIN_GUILD\020\256\002\022\030\n\023EGMI_ACK_JOIN_G"
    "UILD\020\257\002\022\031\n\024EGMI_REQ_LEAVE_GUILD\020\260\002\022\031\n\024EG"
    "MI_ACK_LEAVE_GUILD\020\261\002\022\027\n\022EGMI_REQ_OPR_GU"
    "ILD\020\262\002\022\027\n\022EGMI_ACK_OPR_GUILD\020\263\002\022\032\n\025EGMI_"
    "REQ_SEARCH_GUILD\020\264\002\022\032\n\025EGMI_ACK_SEARCH_G"
    "UILD\020\265\002\022\033\n\026EGMI_REQ_OPR_GUILDINFO\020\266\002\022\033\n\026"
    "EGMI_ACK_OPR_GUILDINFO\020\267\002\022\036\n\031EGEC_REQ_CR"
    "EATE_CHATGROUP\020\220\003\022\036\n\031EGEC_ACK_CREATE_CHA"
    "TGROUP\020\221\003\022\034\n\027EGEC_REQ_JOIN_CHATGROUP\020\222\003\022"
    "\034\n\027EGEC_ACK_JOIN_CHATGROUP\020\223\003\022\035\n\030EGEC_RE"
    "Q_LEAVE_CHATGROUP\020\224\003\022\035\n\030EGEC_ACK_LEAVE_C"
    "HATGROUP\020\225\003\022$\n\037EGEC_REQ_SUBSCRIPTION_CHA"
    "TGROUP\020\226\003\022*\n%EGEC_REQ_CANCELSUBSCRIPTION"
    "_CHATGROUP\020\227\003\022\036\n\031EGEC_REQ_INVITE_CHATGRO"
    "UP\020\230\003\022\036\n\031EGEC_ACK_INVITE_CHATGROUP\020\231\003\022\034\n"
    "\027EGEC_REQ_KICK_CHATGROUP\020\232\003\022\034\n\027EGEC_ACK_"
    "KICK_CHATGROUP\020\233\003\022\037\n\032EGEC_REQ_CHATGROUP_"
    "TO_TEAM\020\302\003\022\037\n\032EGEC_ACK_CHATGROUP_TO_TEAM"
    "\020\303\003\022%\n EGEC_REQ_INTENSIFYLEVEL_TO_EQUIP\020"
    "\364\003\022%\n EGEC_ACK_INTENSIFYLEVEL_TO_EQUIP\020\365"
    "\003\022\033\n\026EGEC_REQ_HOLE_TO_EQUIP\020\366\003\022\033\n\026EGEC_A"
    "CK_HOLE_TO_EQUIP\020\367\003\022!\n\034EGEC_REQ_INLAYSTO"
    "NE_TO_EQUIP\020\370\003\022!\n\034EGEC_ACK_INLAYSTONE_TO"
    "_EQUIP\020\371\003\022#\n\036EGEC_REQ_ELEMENTLEVEL_TO_EQ"
    "UIP\020\372\003\022#\n\036EGEC_ACK_ELEMENTLEVEL_TO_EQUIP"
    "\020\373\003\022\036\n\031EGMI_REQ_CMD_PROPERTY_INT\020\350\007\022\036\n\031E"
    "GMI_REQ_CMD_PROPERTY_STR\020\351\007\022!\n\034EGMI_REQ_"
    "CMD_PROPERTY_OBJECT\020\352\007\022 \n\033EGMI_REQ_CMD_P"
    "ROPERTY_FLOAT\020\353\007\022\034\n\027EGMI_REQ_CMD_RECORD_"
    "INT\020\354\007\022\034\n\027EGMI_REQ_CMD_RECORD_STR\020\355\007\022\037\n\032"
    "EGMI_REQ_CMD_RECORD_OBJECT\020\356\007\022\036\n\031EGMI_RE"
    "Q_CMD_RECORD_FLOAT\020\357\007\022\033\n\026EGMI_REQ_BUY_FO"
    "RM_SHOP\020\220N\022\033\n\026EGMI_ACK_BUY_FORM_SHOP\020\221N\022"
    "\037\n\032EGMI_REQ_MOVE_BUILD_OBJECT\020\222N\022\037\n\032EGMI"
    "_ACK_MOVE_BUILD_OBJECT\020\223N\022\032\n\025EGMI_REQ_UP"
    "_BUILD_LVL\020\365N\022\031\n\024EGMI_REQ_CREATE_ITEM\020\366N"
    "\022\033\n\026EGMI_REQ_BUILD_OPERATE\020\367N*\264\001\n\tEItemT"
    "ype\022\016\n\nEIT_NORMAL\020\000\022\r\n\tEIT_EQUIP\020\001\022\016\n\nEI"
    "T_BOUNTY\020\002\022\021\n\rEIT_HERO_CARD\020\003\022\022\n\016EIT_HER"
    "O_STONE\020\004\022\030\n\024EIT_STRENGTHEN_STONE\020\005\022\032\n\026E"
    "IT_DEMONIZATION_STONE\020\006\022\014\n\010EIT_WOOD\020d\022\r\n"
    "\tEIT_STONE\020e*\350\002\n\021EGameEquipSubType\022\024\n\020EQ"
    "UIPTYPE_WEAPON\020\000\022\023\n\017EQUIPTYPE_ARMOR\020\001\022\026\n"
    "\022EQUIPTYPE_NECKLACE\020\002\022\022\n\016EQUIPTYPE_RING\020"
    "\003\022\026\n\022EQUIPTYPE_EARRINGS\020\004\022\023\n\017EQUIPTYPE_B"
    "ADGE\020\005\022\024\n\020EQUIPTYPE_HELMET\020\006\022\023\n\017EQUIPTYP"
    "E_SHAWL\020\007\022\023\n\017EQUIPTYPE_GLOVE\020\010\022\023\n\017EQUIPT"
    "YPE_WRIST\020\t\022\022\n\016EQUIPTYPE_BELT\020\n\022\022\n\016EQUIP"
    "TYPE_PANT\020\013\022\022\n\016EQUIPTYPE_BOOT\020\014\022\022\n\016EQUIP"
    "TYPE_WING\020\r\022\023\n\017EQUIPTYPE_CLOAK\020\016\022\025\n\021EQUI"
    "PTYPE_FASHION\020\017*\210\001\n\020EGameElementType\022\024\n\020"
    "EELEMENTTYPE_FLY\020\000\022\025\n\021EELEMENTTYPE_FIRE\020"
    "\001\022\030\n\024EELEMENTTYPE_THUNDER\020\002\022\025\n\021EELEMENTT"
    "YPE_SOIL\020\003\022\026\n\022EELEMENTTYPE_WATER\020\004*\241\002\n\020E"
    "GameItemSubType\022\022\n\016EGIT_ITEM_NONE\020\000\022\033\n\027E"
    "GIT_ITEM_PROPERTY_CARD\020\001\022\035\n\031EGIT_ITEM_PV"
    "P_ATTACK_CARD\020\002\022\036\n\032EGIT_ITEM_PVP_DEFENSE"
    "_CARD\020\003\022\030\n\024EGIT_ITEM_SKILL_CARD\020\004\022\036\n\032EGI"
    "T_ITEM_GUILD_SKILL_CARD\020\005\022\033\n\027EGIT_ITEM_G"
    "UILD_DIAMOND\020\006\022\026\n\022EGIT_ITEM_POSITION\020\007\022\030"
    "\n\024EGIT_ITEM_WORLD_HORN\020\010\022\024\n\020EGIT_ITEM_RE"
    "BORN\020\t*e\n\024EGameItemExpiredType\022\016\n\nEGIET_"
    "NONE\020\000\022\023\n\017EGIET_USE_TIMES\020\001\022\023\n\017EGIET_REA"
    "L_TIME\020\002\022\023\n\017EGIET_END_INDEX\020\003*Y\n\022EDrawDr"
    "opItemState\022\025\n\021E_DRAW_STATE_NONE\020\000\022\025\n\021E_"
    "DRAW_STATE_GAIN\020\001\022\025\n\021E_DRAW_STATE_RECV\020\002"
    "*s\n\017EGuildPowerType\022\033\n\027GUILD_POWER_TYPE_"
    "NORMAL\020\000\022#\n\037GUILD_POWER_TYPE_VICE_PRESID"
    "ENT\020\001\022\036\n\032GUILD_POWER_TYPE_PRESIDENT\020\002*V\n"
    "\nETaskState\022\023\n\017TASK_IN_PROCESS\020\000\022\r\n\tTASK"
    "_DONE\020\001\022\023\n\017TASK_DRAW_AWARD\020\002\022\017\n\013TASK_FIN"
    "ISH\020\003*\251\002\n\tETaskType\022 \n\034TASK_LEVEL_UPDATE"
    "_SOME_LEVEL\020\000\022\024\n\020TASK_PASS_ECTYPE\020\001\022\032\n\026T"
    "ASK_PASS_ECTYPE_COUNT\020\002\022$\n TASK_PASS_SOM"
    "E_TYPE_ECTYPE_COUNT\020\003\022\033\n\027TASK_UPDATE_SKI"
    "LL_COUNT\020\004\022\026\n\022TASK_CONSUME_MONEY\020\005\022\030\n\024TA"
    "SK_CONSUME_DIAMOND\020\006\022\024\n\020TASK_ARENA_COUNT"
    "\020\007\022\033\n\027TASK_KILL_MONSTER_COUNT\020\010\022 \n\034TASK_"
    "KILL_SOME_MONSTER_COUNT\020\t*5\n\013EBattleType"
    "\022\021\n\rBATTLE_SINGLE\020\000\022\023\n\017BATTLE_PVE_TEAM\020\001", 7120);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "NFDefine.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_NFDefine_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_NFDefine_2eproto {
  StaticDescriptorInitializer_NFDefine_2eproto() {
    protobuf_AddDesc_NFDefine_2eproto();
  }
} static_descriptor_initializer_NFDefine_2eproto_;
const ::google::protobuf::EnumDescriptor* EGameEventCode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameEventCode_descriptor_;
}
bool EGameEventCode_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 144:
    case 200:
    case 201:
    case 202:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameMsgID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameMsgID_descriptor_;
}
bool EGameMsgID_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
    case 11:
    case 12:
    case 20:
    case 21:
    case 22:
    case 30:
    case 31:
    case 32:
    case 40:
    case 41:
    case 42:
    case 50:
    case 100:
    case 101:
    case 102:
    case 103:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 120:
    case 122:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 150:
    case 151:
    case 152:
    case 153:
    case 154:
    case 155:
    case 156:
    case 157:
    case 158:
    case 200:
    case 201:
    case 202:
    case 203:
    case 210:
    case 211:
    case 212:
    case 213:
    case 214:
    case 220:
    case 221:
    case 222:
    case 223:
    case 224:
    case 225:
    case 226:
    case 227:
    case 228:
    case 229:
    case 230:
    case 231:
    case 232:
    case 233:
    case 240:
    case 241:
    case 242:
    case 243:
    case 244:
    case 245:
    case 246:
    case 247:
    case 250:
    case 251:
    case 252:
    case 253:
    case 254:
    case 255:
    case 256:
    case 257:
    case 260:
    case 261:
    case 262:
    case 280:
    case 281:
    case 282:
    case 283:
    case 290:
    case 291:
    case 300:
    case 301:
    case 302:
    case 303:
    case 304:
    case 305:
    case 306:
    case 307:
    case 308:
    case 309:
    case 310:
    case 311:
    case 400:
    case 401:
    case 402:
    case 403:
    case 404:
    case 405:
    case 406:
    case 407:
    case 408:
    case 409:
    case 410:
    case 411:
    case 450:
    case 451:
    case 500:
    case 501:
    case 502:
    case 503:
    case 504:
    case 505:
    case 506:
    case 507:
    case 1000:
    case 1001:
    case 1002:
    case 1003:
    case 1004:
    case 1005:
    case 1006:
    case 1007:
    case 10000:
    case 10001:
    case 10002:
    case 10003:
    case 10101:
    case 10102:
    case 10103:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EItemType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EItemType_descriptor_;
}
bool EItemType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 100:
    case 101:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameEquipSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameEquipSubType_descriptor_;
}
bool EGameEquipSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameElementType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameElementType_descriptor_;
}
bool EGameElementType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameItemSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameItemSubType_descriptor_;
}
bool EGameItemSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameItemExpiredType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameItemExpiredType_descriptor_;
}
bool EGameItemExpiredType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EDrawDropItemState_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EDrawDropItemState_descriptor_;
}
bool EDrawDropItemState_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGuildPowerType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGuildPowerType_descriptor_;
}
bool EGuildPowerType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETaskState_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETaskState_descriptor_;
}
bool ETaskState_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETaskType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETaskType_descriptor_;
}
bool ETaskType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EBattleType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EBattleType_descriptor_;
}
bool EBattleType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace NFMsg

// @@protoc_insertion_point(global_scope)
