#include "nwnx_ruby"

void report(string func, int bSuccess)
{
    if (bSuccess)
        WriteTimestampedLogEntry("NWNX_Ruby: " + func + "() success");
    else
        WriteTimestampedLogEntry("NWNX_Ruby: " + func + "() failed");
}
void main()
{
    WriteTimestampedLogEntry("NWNX_Ruby unit test begin..");

    string sResult;

    sResult = NWNX_Ruby_Evaluate ("puts '<======== Test Ruby puts ========>'");

    WriteTimestampedLogEntry("NWNX_Ruby unit test end.");
}