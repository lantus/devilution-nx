#include "diablo.h"

DEVILUTION_BEGIN_NAMESPACE

BOOL SystemSupported()
{
	 
	 
	return TRUE;
}

BOOL RestrictedTest()
{
#ifndef SWITCH	
	FILE *f;
	char Buffer[MAX_PATH];
	BOOL ret = FALSE;

	if (SystemSupported() && GetWindowsDirectory(Buffer, sizeof(Buffer))) {
		strcat(Buffer, "\\Diablo1RestrictedTest.foo");
		f = fopen(Buffer, "wt");
		if (f) {
			fclose(f);
			remove(Buffer);
		} else {
			ret = TRUE;
		}
	}
	return ret;
#else
	return TRUE;
#endif	
}

BOOL ReadOnlyTest()
{
	 return false;
}

DEVILUTION_END_NAMESPACE
