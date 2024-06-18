// system headers
#include <filesystem>

// library headers
#include <linuxdeploy/log/log.h>

// local headers
#include "TextToSpeechPluginsDeployer.h"

using namespace linuxdeploy::plugin::qt;
using namespace linuxdeploy::log;

bool TextToSpeechPluginsDeployer::doDeploy() {
    return deployStandardQtPlugins({"texttospeech"});
}
