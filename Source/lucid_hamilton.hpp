#pragma once

#include "types.hpp"
#include <windows.h>

struct wonderful_knuth_0xC
{
    __int16 field_0[6];
};

struct blissful_ganguly_0x20
{
    wchar_t field_0_str[16];
};

struct angry_lewin_0x85C;

struct lucid_hamilton
{
    char field_0_map_name[256];
    char field_100_style_name[256];
    char field_200_script_name[256];
    char field_300_debug_str[256];
    char field_400;
    char field_401;
    char field_402;
    unsigned __int8 field_403;
    char field_404;
    char field_405;
    char field_406;
    char field_407;
    int field_408[10];
    int field_430;
    int field_434;
    __int16 field_438;
    char field_43A;
    char field_43B;
    int field_43C;
    char field_440;
    char field_441;
    char field_442;
    char field_443;
    int field_444;
    wonderful_knuth_0xC field_448[6];
    WORD field_490[6];
    int field_49C[6];
    blissful_ganguly_0x20 field_4B4[6];

    EXPORT void sub_4C53D0();

    EXPORT char* SetMapName_4C5870(char *Source);

    EXPORT char* SetStyleName_4C5890(char *Source);

    EXPORT char* SetScriptName_4C58B0(char *Source);

    EXPORT char *DebugStr_4C58D0(char *Source);

    EXPORT void sub_4C58F0(char a2);

    EXPORT void sub_4C5900(char a2);

    EXPORT void sub_4C5910(char a2);

    EXPORT void sub_4C5920(char a2);

    EXPORT void sub_4C5930(char a2);

    EXPORT char *GetMapName_4C5940();

    EXPORT char *GetStyleName_4C5950();

    EXPORT char *GetScriptName_4C5960();

    EXPORT char *GetDebugStr_4C5970();

    EXPORT char sub_4C5980();

    EXPORT char sub_4C5990();

    EXPORT char sub_4C59A0();

    EXPORT unsigned __int8 sub_4C59B0();

    EXPORT char sub_4C59C0();

    EXPORT void sub_4C59D0(unsigned __int8 a2, int a3);

    EXPORT int sub_4C59F0(unsigned __int8 idx);

    EXPORT void sub_4C5A10(angry_lewin_0x85C *a1);

    EXPORT void sub_4C5A70(int a2);

    EXPORT int sub_4C5A80();

    EXPORT void sub_4C5A90(int a2);

    EXPORT int sub_4C5AA0();

    EXPORT void sub_4C5AB0(__int16 a2);

    EXPORT __int16 sub_4C5AC0();

    EXPORT void sub_4C5AD0(char a2);

    EXPORT char sub_4C5AE0();

    EXPORT void init_4C5AF0();

    EXPORT void sub_4C5B80(char a2, int a3, char a4, char a5, int a6);

    EXPORT char sub_4C5BC0();

    EXPORT int sub_4C5BD0();

    EXPORT char sub_4C5BE0();

    EXPORT char sub_4C5BF0();

    EXPORT void sub_4C5C00(char a2);

    EXPORT char sub_4C5C20();

    EXPORT void sub_4C5C30(int a2, wchar_t *Source);

    EXPORT blissful_ganguly_0x20 *sub_4C5C60(unsigned __int16 a2);

    EXPORT void sub_4C5C80(unsigned __int8 a2, int a3);

    EXPORT int sub_4C5CB0(unsigned __int8 a2);

    EXPORT void sub_4C5CD0(unsigned __int8 a2, unsigned __int8 a3);

    EXPORT WORD sub_4C5D60(unsigned __int8 a2);

    EXPORT __int16 sub_4C5D80(unsigned __int8 a2, unsigned __int8 a3);
};

extern lucid_hamilton gLucid_hamilton_67E8E0;
