// system headers
#include <filesystem>

// library headers
#include <linuxdeploy/log/log.h>

// local headers
#include "BearerPluginsDeployer.h"

using namespace linuxdeploy::plugin::qt;
using namespace linuxdeploy::log;

bool BearerPluginsDeployer::doDeploy() {
    return deployStandardQtPlugins({"bearer"});
}
