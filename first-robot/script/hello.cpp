#include <gz/sim/System.hh>
#include <gz/plugin/Register.hh>
#include <iostream>

namespace my_robot_plugin {

    class WorldPluginMyRobot: 
            public gz::sim::System, public gz::sim::ISystemConfigure {

        public:

            void Configure(const gz::sim::Entity &_entity,
                            const std::shared_ptr<const sdf::Element> &_sdf,
                            gz::sim::EntityComponentManager &_ecm,
                            gz::sim::EventManager &_eventMgr) override {
                std::cout << "Hello World!" <<std::endl;
            }

    };

}

GZ_ADD_PLUGIN(
    my_robot_plugin::WorldPluginMyRobot,
    gz::sim::System,
    my_robot_plugin::WorldPluginMyRobot::ISystemConfigure
)