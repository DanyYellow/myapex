//season 15 offset update
// 15/11/22
#pragma once
namespace offsets
{
    // buttons
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long IN_ATTACK = 0x07640a70; // [Buttons] -> in_attack
    // core
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long REGION = 0x140000000;     // [Mine]          -> Region
    const long LEVEL = 0x1432a28;        // [Miscellaneous] -> LevelName
    const long LOCAL_PLAYER = 0x1ebf488; // [Miscellaneous] -> LocalPlayer
    const long ENTITY_LIST = 0x1b0e678;  // [Miscellaneous] -> cl_entitylist
    // entity
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long LOCAL_ORIGIN = 0x0158; // [DataMap.CBaseViewModel]    -> m_localOrigin
    // player
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long GLOW_ENABLE = (0x03c0 + 0x8);        // [RecvTable.DT_HighlightSettings] -> m_highlightServerContextID + 0x8
    const long GLOW_THROUGH_WALL = (0x03c0 + 0x10); // [RecvTable.DT_HighlightSettings] -> m_highlightServerContextID + 0x10
    const long TEAM_NUMBER = 0x044c;                // [RecvTable.DT_BaseEntity]        -> m_iTeamNum
    const long NAME = 0x0589;                       // [RecvTable.DT_BaseEntity]        -> m_iName
    const long LIFE_STATE = 0x0798;                 // [RecvTable.DT_Player]            -> m_lifeState
    const long VEC_PUNCH_WEAPON_ANGLE = 0x2488;     // [DataMap.C_Player]               -> m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
    const long VIEW_ANGLE = (0x2584 - 0x14);        // [DataMap.C_Player]               -> m_ammoPoolCapacity - 0x14
    const long BLEEDOUT_STATE = 0x2718;             // [RecvTable.DT_Player]            -> m_bleedoutState
    const long ZOOMING = 0x1c31;                    // [RecvTable.DT_Player]            -> m_bZooming
    const long LAST_VISIBLE_TIME = 0x1a70;          // [Miscellaneous]                  -> CPlayer!lastVisibleTime  1st offset from dump
}
