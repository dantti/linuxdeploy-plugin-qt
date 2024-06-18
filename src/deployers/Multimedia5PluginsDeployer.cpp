// system headers
#include <filesystem>

// library headers
#include <linuxdeploy/log/log.h>

// local headers
#include "Multimedia5PluginsDeployer.h"

using namespace linuxdeploy::plugin::qt;
using namespace linuxdeploy::log;

bool Multimedia5PluginsDeployer::doDeploy() {
    return deployStandardQtPlugins({"mediaservice", "audio"});
}
