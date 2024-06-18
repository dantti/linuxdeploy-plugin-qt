// system headers
#include <filesystem>

// library headers
#include <linuxdeploy/log/log.h>

// local headers
#include "TlsBackendsDeployer.h"

using namespace linuxdeploy::plugin::qt;
using namespace linuxdeploy::log;

bool TlsBackendsDeployer::doDeploy() {
    return deployStandardQtPlugins({"tls"});
}
