#include "enemy_robot_adaptor.h"

EnemyRobotAdaptor::EnemyRobotAdaptor(std::shared_ptr<EnemyRobot> enemy_robot):
			enemy_robot_(enemy_robot){
}

void EnemyRobotAdaptor::attack(){
	enemy_robot_->smesh();
}
