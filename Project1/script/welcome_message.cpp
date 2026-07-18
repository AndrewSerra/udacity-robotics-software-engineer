#include <gazebo/gazebo.hh>

namespace gazebo
{	
	class WorldPluginMyRobot : public WorldPlugin
	{
	public:
		// Constructor for WorldPluginMyRobot
		WorldPluginMyRobot() : WorldPlugin()
		{
			printf("Welcome to Andrew’s World!\n");
		}

        void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
		{
		}
	};
	// Register this plugin with Gazebo, 
	// making it discoverable at runtime
	GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
