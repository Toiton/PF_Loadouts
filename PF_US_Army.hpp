tooltip = "Author: Toiton";
//Prairie Fire US Army, based on the roles in the faction from the CDLC.

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {
        "vn_b_uniform_macv_01_01",
        "vn_b_uniform_macv_04_01",
        "vn_b_uniform_macv_05_01"
        };
    vest[] = {};
    backpack[] = {};
    headgear[] = {"vn_b_helmet_m1_01_01"};
    goggles[] = {};
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
    vest[] = {
        "vn_b_vest_usarmy_02",
        "vn_b_vest_usarmy_03"
    };
    headgear[] = {
        "vn_b_helmet_m1_02_01",
        "vn_b_helmet_m1_03_01",
        "vn_b_helmet_m1_05_01",
        "vn_b_helmet_m1_06_01",
        "vn_b_helmet_m1_07_01"
    };
    backpack[] = {"vn_b_pack_lw_01_m16_pl"};
    primaryWeapon[] = {"vn_m16"};
    attachment[] = {"vn_b_m16",""};
    magazines[] =
    {
        LIST_9("vn_m16_20_mag"),
        LIST_2("vn_m16_20_t_mag"),
        LIST_2("vn_m61_grenade_mag"),
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
    displayName = "Grenadier - M16";
    vest[] = {"vn_b_vest_usarmy_05"};
    headgear[] += {"vn_b_helmet_m1_04_01"};
    primaryWeapon[] = {"vn_m16_xm148"};
    magazines[] +=
    {
        LIST_6("vn_40mm_m433_hedp_mag"),
        LIST_4("vn_40mm_m680_smoke_w_mag")
    };
};
class g_m79 : r
{
    displayName = "Grenadier - M79";
    vest[] = {"vn_b_vest_usarmy_05"};
    headgear[] += {"vn_b_helmet_m1_04_01"};
    primaryWeapon[] = {"vn_m79"};
    secondaryWeapon[] = {"vn_m1911"};
    magazines[] =
    {
        LIST_15("1Rnd_HE_Grenade_shell"),
        LIST_5("1Rnd_Smoke_Grenade_shell"),
        LIST_4("vn_m1911_mag")
    };
};
class car : r
{
    displayName = "Carabinier";
    magazines[] =
    {
        LIST_7("vn_m16_20_mag"),
        LIST_2("vn_m16_20_t_mag"),
        LIST_2("vn_m61_grenade_mag"),
        LIST_2("vn_m18_white_mag")
    };
};
class m : r
{
    displayName = "Medic";
    vest[] = {"vn_b_vest_usarmy_07"};
    backpack[] = {"vn_b_pack_lw_07"};
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
        LIST_2("vn_m18_white_mag")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"vn_m3a1"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("vn_m3a1_mag"),
        "vn_m61_grenade_mag",
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
    vest[] = {"vn_b_vest_usarmy_09"};
    backpack[] = {"vn_b_pack_lw_06"};
    items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
    backPack[] = {"vn_b_pack_prc77_01"};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backpack[] = {"vn_b_pack_lw_06"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"vn_b_vest_usarmy_06"};
    primaryWeapon[] = {"vn_m60"};
    secondaryWeapon[] = {"vn_m1911"};
    magazines[] =
    {
        LIST_5("vn_m60_100_mag"),
        LIST_3("vn_m1911_mag"),
        "vn_m61_grenade_mag",
        "vn_m18_white_mag"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"vn_b_pack_lw_05"};
    backpackItems[] = {LIST_5("vn_m60_100_mag")};
    linkedItems[] += {"vn_m19_binocs_grn"};
};
class rat : r
{
    displayName = "Rifleman (M72 LAW)";
    secondaryWeapon[] = {"vn_m72"};
};
class dm : r
{
    displayName = "Designated Marksman";
    vest[] = {"vn_b_vest_usarmy_08"};
    headgear[] = {"vn_b_bandana_01"};
    primaryWeapon[] = {"vn_m14"};
    secondaryWeapon[] = {"vn_m1911"};
    scope[] = {"vn_o_9x_m14"};
    magazines[] =
    {
        LIST_7("vn_m14_mag"),
        LIST_3("vn_m14_t_mag"),
        LIST_4("vn_m1911_mag"),
        "vn_m61_grenade_mag",
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
    backPack[] = {"vn_b_pack_static_m2_low_01"};
};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"vn_b_pack_static_m2_low_01"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"vn_b_pack_static_base_01"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder"
    };
};
class matg : rat
{
    displayName = "MAT Gunner";
};
class matac : rat
{
    displayName = "MAT Ammo Carrier";
};
class matag : rat
{
    displayName = "MAT Assistant Gunner";
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"vn_b_pack_static_tow"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"vn_b_pack_static_tow"};
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
    backPack[] = {"vn_b_pack_static_m2_01"};
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
    backPack[] = {"vn_b_pack_static_m2_01"};
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
    primaryWeapon[] = {"vn_m40a1_camo"};
    secondaryWeapon[] = {"vn_m1911"};
    scope[] = {"vn_o_9x_m40a1"};
    bipod[] = {"vn_b_camo_m40a1"};
    silencer[] = {};
    magazines[] =
    {
        LIST_8("vn_m40a1_mag"),
        LIST_3("vn_m40a1_t_mag"),
        "vn_m61_grenade_mag",
        LIST_4("vn_m1911_mag")
    };
    backpack[] = {};
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] += {"vn_m19_binocs_grn"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"vn_b_vest_usarmy_11", "vn_b_vest_usarmy_13"};
    headgear[] = {"vn_b_helmet_t56_01_02", "vn_b_helmet_t56_02_02"};
    linkedItems[] += {"vn_m19_binocs_grn"};
    magazines[] += {
        LIST_2("vn_m18_green_mag")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"vn_b_vest_usarmy_12","vn_b_vest_usarmy_14"};
    headgear[] = {"vn_b_helmet_t56_01_01", "vn_b_helmet_t56_02_01"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {"vn_b_pack_lw_04"};
    backpackItems[] = {"ToolKit"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"vn_b_uniform_heli_01_01"};
    vest[] = {"vn_b_vest_aircrew_01"};
    backpack[] = {};
    headgear[] = {"vn_b_helmet_svh4_01_01","vn_b_helmet_svh4_02_01"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("vn_m18_green_mag")
    };
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    backpack[] = {"vn_b_pack_lw_04"};
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
    headgear[] = {"vn_b_helmet_aph6_02_02"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"vn_b_pack_lw_04"};
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
    backpack[] = {"vn_b_pack_lw_04"};
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