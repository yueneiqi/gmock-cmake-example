#include "baz.h"

bool Baz::qux()
{
    return true;
}

bool Baz::IsBigEndian()
{
    int check_num = 1;
    if (*(char *) &check_num == 1) {
        return false;
    }
    return true;
}

static bool IsBigEndian2()
{
    int check_num = 1;
    if (*(char *) &check_num == 1) {
        return false;
    }
    return true;
}
