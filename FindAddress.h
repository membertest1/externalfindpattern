#include "Process.h"

class FindAddress : public Process
{
public:
	static bool Prepare();
	static bool isgetaddress;
	static MODULEENTRY32 client, engine;
	static DWORD dwLocalPlayer;
	static DWORD localPlayer;
};

