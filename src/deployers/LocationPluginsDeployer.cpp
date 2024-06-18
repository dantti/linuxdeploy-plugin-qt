// system headers
#include <filesystem>

// library headers
#include <linuxdeploy/log/log.h>

// local headers
#include "LocationPluginsDeployer.h"

using namespace linuxdeploy::plugin::qt;
using namespace linuxdeploy::log;

bool LocationPluginsDeployer::doDeploy() {
    return deployStandardQtPlugins({"geoservices"});
}
