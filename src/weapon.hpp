#pragma once

struct _Weapon {
    char _offset[28];
    char weapon_class[16];
};

struct _Current_Weapon {
    char _offset[12];
    _Weapon* description;
};

const char* WEAPON_FLASHBANG = "DT_Flashbang";