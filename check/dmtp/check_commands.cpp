extern "C" {
#include "dime/dmessage/dmtp_commands.h"
}
#include "gtest/gtest.h"
#include "error-assert.h"

/**
 * Command parsing and formatting
 */
TEST(DIME, dmtp_command_formatting_and_parsing)
{
    dmtp_command_t *command;
    sds formatted;
}