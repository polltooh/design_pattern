#ifndef _ENEMY_ROBOT_ADAPTOR_H_
#define _ENEMY_ROBOT_ADAPTOR_H_

#include "enemy_attacker.h"
#include "enemy_robot.h"
#include <memory>

class EnemyRobotAdaptor : public EnemyAttacker{
private:
	std::shared_ptr<EnemyRobot> enemy_robot_;
public:
	EnemyRobotAdaptor(std::shared_ptr<EnemyRobot> enemy_robot);
	void attack();
};

#endif
