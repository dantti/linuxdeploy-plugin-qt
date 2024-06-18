// system headers
#include <filesystem>

// library headers
#include <linuxdeploy/log/log.h>

// local headers
#include "GamepadPluginsDeployer.h"

using namespace linuxdeploy::plugin::qt;
using namespace linuxdeploy::log;

bool GamepadPluginsDeployer::doDeploy() {
    return deployStandardQtPlugins({"gamepads"});
}
