void KickPlayer(DWORD rL, const char* reason)
{
	bool result = 0x0000000; /* null */
	DWORD Kick_Addy = (0x688DC0 - 0x400000 + (DWORD)GetModuleHandleA(NULL /* replace first dword with new address */

	using Kick_Def = DWORD(__thiscall*)(DWORD rL2, const char* reason2); /* arguments with convention */
	Kick_Def Kick = reinterpret_cast<Kick_Def>(Kick_Addy);

	Kick(rL, reason); /* kick the player */
	printf("Used reason: ", reason, " to kick player with state: ", rL);
	result = rL; /* pseudo uses so i use it */
}
                                                                   
/* aob -> 55 8B EC 51 8B 55 08 8B C2 56 8B F1 57 8D 78 01 */

KickPlayer(rL, "You have been kicked because you were a skid");

DWORD KickPlayer2(DWORD a, int b, unsigned int a3)
{
	bool result = 0x0000000; /* null */
	DWORD Kick_Addy = (0x689100 - 0x400000 + (DWORD)GetModuleHandleA(NULL /* replace first dword with new address */

	using Kick_Def = DWORD(__thiscall*)(DWORD a1, int b2, unsigned int 33); /* arguments with convention */
	Kick_Def Kick = reinterpret_cast<Kick_Def>(Kick_Addy);
									 
        Kick(a, b, a3);
        return result;
}
									 
KickPlayer2(rL, (int)"You were kicked from this game: No reason we just felt like kicking you lmfao!", (unsigned int)0x32u);
/* 8B F1 57 8B 7D 0C 8B 4E 14 */
									 
/* this is the second kick code, it is a backup and reviver to the first one */
