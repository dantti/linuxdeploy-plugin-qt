// system headers
#include <filesystem>

// library headers
#include <linuxdeploy/log/log.h>

// local headers
#include "PrintSupportPluginsDeployer.h"

using namespace linuxdeploy::plugin::qt;
using namespace linuxdeploy::log;

bool PrintSupportPluginsDeployer::doDeploy() {
    return deployStandardQtPlugins({"printsupport"});
}
