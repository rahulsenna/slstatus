#include <netdb.h>

const char *internet(void)
{

  if (gethostbyname("google.com") == 0)
    return("🌐");
  else
    return("🖥");

  return 0;
}