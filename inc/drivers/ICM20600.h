#ifndef CODAL_ICM20600_H
#define CODAL_ICM20600_H

#include "CodalConfig.h"
#include "CodalComponent.h"
#include "CoordinateSystem.h"
#include "I2C.h"
#include "Accelerometer.h"
#include "Gyroscope.h"

#define MPU6050_DEFAULT_ADDR    0x68
#define MPU6050_WHOAMI          0x75

#define MPU6050_WHOAMI_VAL      0x34
