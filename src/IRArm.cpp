/*
 * IRArm.cpp
 *
 *  Created on: 2 feb. 2017
 *      Author: Dylan Vos
 */

#include <IRArm.h>

using namespace IR;

IRArm::IRArm(uint32_t ArmChannel) :
	Arm(ArmChannel)
{

}

void IRArm::StartArm()
{
	Arm.Set(1);

}

void IRArm::StopArm()
{
	Arm.Set(0);
}

void IRArm::BackwardsArm()
{

	Arm.Set(-1);
}




