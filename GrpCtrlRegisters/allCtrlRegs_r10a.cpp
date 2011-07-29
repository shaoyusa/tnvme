#include "allCtrlRegs_r10a.h"


AllCtrlRegs_r10a::AllCtrlRegs_r10a(int fd) : Test(fd)
{
    // 66 chars allowed:     xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
    mTestDesc.SetCompliance("revision 1.0a, section 3");
    mTestDesc.SetShort(     "Validate all controller registers syntactically");
    // No string size limit for the long description
    mTestDesc.SetLong(
        "Validates the following; the RO fields cannot be written; all ASCII "
        "fields only contain chars 0x20 to 0x7e.");
}


AllCtrlRegs_r10a::~AllCtrlRegs_r10a()
{
}


bool
AllCtrlRegs_r10a::RunCoreTest()
{
    return false;   // todo; add some reset logic when available
}


