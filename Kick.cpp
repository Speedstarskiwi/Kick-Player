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
