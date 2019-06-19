#include "devilution.h"
#include "miniwin/ddraw.h"
#include "stubs.h"
#include <SDL.h>

namespace dvl {

WINBOOL SetCursorPos(int X, int Y)
{
	 
	return true;
}

int ShowCursor(WINBOOL bShow)
{
 
	return 1;
}

WINBOOL TextOutA(HDC hdc, int x, int y, LPCSTR lpString, int c)
{ 

	return true;
}

} // namespace dvl
