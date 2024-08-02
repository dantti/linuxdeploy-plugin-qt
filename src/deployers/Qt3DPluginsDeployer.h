#pragma once

#include "BasicPluginsDeployer.h"

namespace linuxdeploy {
    namespace plugin {
        namespace qt {
            class Qt3DPluginsDeployer : public BasicPluginsDeployer {
            public:
                // we can just use the base class's constructor
                using BasicPluginsDeployer::BasicPluginsDeployer;

                bool doDeploy() override;
            };
        }
    }
}
