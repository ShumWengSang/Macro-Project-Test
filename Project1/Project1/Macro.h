#pragma once
//Create the enum
#define REGISTER_ENUM(x) x,
typedef enum
{
#include "Names.h"
	MSG_NUM
}MSG_Name;
#undef REGISTER_ENUM

//Create the string
#define REGISTER_ENUM(x) #x,
static const char* MsgNameText[] =
{
#include "Names.h"
	"Invalid"
};
#undef REGISTER_ENUM
