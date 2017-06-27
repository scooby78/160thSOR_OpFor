#define Author_Macro author=$STR_AUTHOR_FULL;

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

#include "Rus_VDV\define_macros.hpp"
#include "4th_Reich\define_macros.hpp"