// system headers
#include <filesystem>

// library headers
#include <linuxdeploy/log/log.h>

// local headers
#include "WaylandcompositorPluginsDeployer.h"

using namespace linuxdeploy::plugin::qt;
using namespace linuxdeploy::log;

bool WaylandcompositorPluginsDeployer::doDeploy() {
    return deployStandardQtPlugins({"wayland-decoration-client",
        "wayland-graphics-integration-client",
        "wayland-shell-integration",});
}
