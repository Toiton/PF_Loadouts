tooltip = "Author: Toiton";
//Prairie Fire NVA '65, based on the roles in the faction from the CDLC.

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {
        "vn_o_uniform_nva_army_01_01",
        "vn_o_uniform_nva_army_01_02",
        "vn_o_uniform_nva_army_02_01",
        "vn_o_uniform_nva_army_02_02",
        "vn_o_uniform_nva_army_03_01",
        "vn_o_uniform_nva_army_03_02",
        "vn_o_uniform_nva_army_04_01",
        "vn_o_uniform_nva_army_04_02",
        "vn_o_uniform_nva_army_09_01",
        "vn_o_uniform_nva_army_09_02",
        "vn_o_uniform_nva_army_12_01",
        "vn_o_uniform_nva_army_12_02"
        };
    vest[] = {};
    backpack[] = {};
    headgear[] = {"vn_o_helmet_nva_06"};
    goggles[] = {
        "vn_o_scarf_01_01",
        "vn_b_scarf_01_01",
        "vn_o_scarf_01_02",
        "vn_o_scarf_01_03",
        "vn_o_scarf_01_04",
        "vn_b_scarf_01_03",
        "",
        "",
        ""
    };
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
    
    insignias[] = {};
    faces[] = {"faceset:american"};
};
class r : baseMan
{
    displayName = "Rifleman";
    vest[] = {"vn_o_vest_02"};
    backpack[] = {
        "vn_o_pack_01",
        "vn_o_pack_02",
        "vn_o_pack_04"
    };
    primaryWeapon[] = {"vn_type56"};
    attachment[] = {"vn_b_type56",""};
    magazines[] =
    {
        LIST_9("vn_type56_mag"),
        LIST_2("vn_type56_t_mag"),
        LIST_2("vn_t67_grenade_mag"),
        LIST_2("vn_m18_white_mag")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"vn_o_vest_01"};
    primaryWeapon[] = {"vn_sks_gl"};
    magazines[] =
    {
        LIST_12("vn_sks_mag"),
        LIST_4("vn_sks_t_mag"),
        LIST_6("vn_22mm_m60_heat_mag"),
        LIST_4("vn_22mm_m22_smoke_mag")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"vn_ppsh41"};
    magazines[] =
    {
        LIST_6("vn_ppsh41_35_mag"),
        LIST_2("vn_ppsh41_35_t_mag"),
        "vn_t67_grenade_mag",
        "vn_m18_white_mag"
    };
};
class m : r
{
    displayName = "Medic";
    vest[] = {"vn_o_vest_06"};
    backpackItems[] = {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_adenosine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_6("ACE_Splint"),
        LIST_1("ACE_surgicalKit"),
        "vn_m18_white_mag"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"vn_pps43"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("vn_pps_mag"),
        "vn_t67_grenade_mag",
        "vn_m18_white_mag"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "vn_m19_binocs_grn"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    vest[] = {"vn_o_vest_07"};
    backpack[] = {"vn_o_pack_t884_01"};
    items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"vn_o_vest_03"};
    primaryWeapon[] = {"vn_rpd"};
    secondaryWeapon[] = {"vn_m10"};
    magazines[] =
    {
        LIST_5("vn_rpd_100_mag"),
        LIST_3("vn_m10_mag"),
        "vn_t67_grenade_mag",
        "vn_m18_white_mag"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] = {LIST_5("vn_rpd_100_mag")};
    linkedItems[] += {"vn_m19_binocs_grn"};
};
class rat : r
{
    displayName = "Rifleman (B41)";
    secondaryWeapon[] = {"vn_rpg7"};
    backpack[] = {"vn_o_pack_03"};
    backpackItems[] = {LIST_3("vn_rpg7_mag")};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"vn_sks"};
    scope[] = {"vn_o_3x_m9130"};
    secondaryWeapon[] = {"vn_m10"};
    scope[] = {"vn_o_3x_m84"};
    magazines[] =
    {
        LIST_7("vn_carbine_30_mag"),
        LIST_3("vn_carbine_30_t_mag"),
        LIST_4("vn_m10_mag"),
        "vn_t67_grenade_mag",
        "vn_m18_white_mag"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : aar
{
    displayName = "MMG Ammo Carrier";
};
class mmgag : car
{
    displayName = "MMG Assistant Gunner";
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"vn_o_pack_static_dshkm_high_01"};
};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"vn_o_pack_static_dshkm_high_01"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"vn_o_pack_static_base_01"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "vn_m19_binocs_grn"
    };
};
class matg : rat
{
    displayName = "MAT Gunner";
};
class matac : rat
{
    displayName = "MAT Ammo Carrier";
    secondaryWeapon[] = {};
};
class matag : rat
{
    displayName = "MAT Assistant Gunner";
    secondaryWeapon[] = {};
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"vn_o_pack_static_at3_01"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"vn_o_pack_static_at3_01"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"vn_b_pack_static_base_01"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "vn_m19_binocs_grn"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"vn_o_pack_static_type63_01"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"vn_o_pack_static_type63_01"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"vn_b_pack_static_base_01"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "vn_m19_binocs_grn"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
};
class sn : dm
{
    displayName = "Sniper";
    headgear[] = {"vn_b_boonie_02_01"};
    backpack[] = {"vn_o_pack_06"};
    primaryWeapon[] = {"vn_m9130"};
    secondaryWeapon[] = {"vn_m10"};
    scope[] = {"vn_o_3x_m9130"};
    bipod[] = {"vn_b_camo_m40a1"};
    silencer[] = {};
    magazines[] =
    {
        LIST_8("vn_m38_mag"),
        LIST_3("vn_m38_t_mag"),
        "vn_t67_grenade_mag",
        LIST_4("vn_m10_mag")
    };
};
class sp : r
{
    displayName = "Spotter";
    backpack[] = {"vn_o_pack_06"};
    linkedItems[] += {"vn_m19_binocs_grn"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"vn_o_vest_06"};
    headgear[] = {"vn_o_helmet_tsh3_02", "vn_o_helmet_tsh3_01"};
    linkedItems[] += {"vn_m19_binocs_grn"};
    magazines[] += {
        LIST_2("vn_m18_green_mag")
    };
};
class vd : vc
{
    displayName = "Vehicle Driver";
    backpack[] = {"vn_o_pack_01"};
    backpackItems[] = {"ToolKit"};
};
class vg : vc
{
    displayName = "Vehicle Gunner";
    backpack[] = {"vn_o_pack_01"};
    backpackItems[] = {"ToolKit"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"vn_o_uniform_nva_army_01_03"};
    headgear[] = {"vn_o_helmet_shl61_02","vn_o_helmet_shl61_01"};
    vest[] = {"vn_b_vest_aircrew_01"};
    goggles[] = {};
    magazines[] += {
        LIST_2("vn_m18_green_mag")
    };
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    backpack[] = {"vn_o_pack_01"};
    headgear[] = {"vn_b_helmet_svh4_01_01"};
    backpackItems[] = {"ToolKit"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : pp
{
    displayName = "Jet pilot";
    uniform[] = {"vn_o_uniform_nva_air_01"};
    backpack[] = {"B_Parachute"};
    headgear[] = {"vn_o_helmet_shl61_01"};
    goggles[] = {"vn_o_acc_km32_01"};
    primaryWeapon[] = {};
    secondaryWeapon[] = {"vn_pm"};
    magazines[] =
    {
        LIST_5("vn_pm_mag"),
        "vn_t67_grenade_mag",
        "vn_m18_white_mag"
    };
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"vn_o_pack_01"};
    magazines[] +=
    {
        LIST_2("vn_mine_satchel_remote_02_mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_4("vn_mine_m112_remote_mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"vn_o_pack_01"};
    items[] +=
    {
        LIST_4("vn_mine_m14_mag"),
        LIST_2("vn_mine_m15_mag"),
        "ACE_M26_Clacker",
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
};