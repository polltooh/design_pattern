#include "enemy_robot.h"
#include "enemy_robot_adaptor.h"
#include "enemy_attacker.h"
#include "enemy_tank.h"

int main(){

	std::shared_ptr<EnemyAttacker> enemy_robot(
                std::make_shared<EnemyRobotAdaptor>(std::make_shared<EnemyRobot>()));
	std::shared_ptr<EnemyAttacker> enemy_tank(std::make_shared<EnemyTank>());

	enemy_robot->attack();
	enemy_tank->attack();



}
