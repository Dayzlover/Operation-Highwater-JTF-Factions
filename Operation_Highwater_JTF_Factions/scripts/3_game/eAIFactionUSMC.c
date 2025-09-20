[eAIRegisterFaction(eAIFactionUSMC)]
class eAIFactionUSMC : eAIFaction
{
	void eAIFactionUSMC()
	{
		m_Name = "USMC";
		m_Loadout = "USMCRifleman";
		m_IsGuard = true;
		m_HasUnlimitedStamina = true;
	}
	// Used to check if the target Faction should be considered Friendly
	override bool IsFriendly(notnull eAIFaction other)
	{
		// If you dont want your own Faction to kill each others make them friendly to their own Faction
		if (other.IsInherited(eAIFactionUSMC)) return true;
		if (other.IsInherited(eAIFactionCDF)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsInherited(eAIFactionEast)) return false;
		if (other.IsInherited(eAIFactionWest)) return true;
		if (other.IsInherited(eAIFactionMercenaries)) return false;
		if (other.IsInherited(eAIFactionRaiders)) return false;
		if (other.IsInherited(eAIFactionGuards)) return false;
		if (other.IsInherited(eAIFactionPassive)) return false;
		if (other.IsInherited(eAIFactionShamans)) return false;
		if (other.IsInherited(eAIFactionBandit)) return false;
		if (other.IsInherited(eAIFactionGorka)) return false;
		if (other.IsInherited(eAIFactionSurvivor)) return false;
		if (other.IsInherited(eAIFactionPlayerSurvivor)) return false;
		if (other.IsInherited(eAIFactionNorth)) return false;
		if (other.IsInherited(eAIFactionSouth)) return false;
		if (other.IsInherited(eAIFactionHumans)) return false;
		if (other.IsInherited(eAIFactionFireFighter)) return true;
		if (other.IsInherited(eAIFactionPolice)) return true;
		if (other.IsInherited(eAIFactionNBC)) return false;
		return false;
	}
	{
		return other.IsInherited(DayZCreatureAI);
	}
		return "#USMC";
	}
};