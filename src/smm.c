
#ifdef __WIN32__
#include "smm_windows.c"   // Windows (win32)
#else
#include "smm_linux.c"   // Linux, Mac
#endif
