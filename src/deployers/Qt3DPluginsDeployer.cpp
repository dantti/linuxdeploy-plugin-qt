// system headers
#include <filesystem>

// library headers
#include <linuxdeploy/log/log.h>

// local headers
#include "Qt3DPluginsDeployer.h"

using namespace linuxdeploy::plugin::qt;
using namespace linuxdeploy::log;

bool Qt3DPluginsDeployer::doDeploy() {
    return deployStandardQtPlugins({"geometryloaders", "sceneparsers"});
}
