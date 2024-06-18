// system headers
#include <filesystem>

// library headers
#include <linuxdeploy/log/log.h>

// local headers
#include "PositioningPluginsDeployer.h"

using namespace linuxdeploy::plugin::qt;
using namespace linuxdeploy::log;

bool PositioningPluginsDeployer::doDeploy() {
    return deployStandardQtPlugins({"position"});
}
