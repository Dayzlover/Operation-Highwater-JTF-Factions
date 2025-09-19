class CfgPatches
{
    class Operation_Highwater_JTF_Factions_Scripts
    {
        requiredAddons[] =
        {
            "DayZExpansion_AI_Scripts"
        };
    };
};
class CfgMods
{
    class Operation_Highwater_JTF_Factions
    {
        type = "mod";
        name = "Operation_Highwater_JTF_Factions";
        credits = "head_of_Sucurity, Dolphin, Demon";
        author = "head_of_Sucurity";
        authorID = "76561199481369702";
        dependencies[]=
        {
            "Game"
        };
        class defs
        {
            class gameScriptModule
            {
                files[] =
                {
                    "Operation_Highwater_JTF_Factions/scripts/3_game"
                };
            };
        };
    };
};
