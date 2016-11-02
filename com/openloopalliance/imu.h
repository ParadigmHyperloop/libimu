/**
 * This material is proprietary of The OpenLoop Alliance and its members.
 *
 * All rights reserved.
 *
 * The methods and techniques described herein are considered proprietary
 * information. Reproduction or distribution, in whole or in part, is forbidden
 * except by express written permission of OpenLoop.
 *
 * Source that is published publicly is for demonstration purposes only and shall
 * not be utilized to any extent without express written permission of OpenLoop.
 */
 
#ifdef __OPENLOOPALLIANCE_IMU_H__
#define __OPENLOOPALLIANCE_IMU_H__

/**
 * Connect to the IMU on the given device path
 * 
 * @param path The path to the IMU device, ex. "/dev/ttyUSB0"
 *
 * @return file descriptor on success, -1 on failure
 */
int imu_connect(char *path);

/**
 * Connect to the IMU on the given device path
 * 
 * @param path The path to the IMU device, ex. "/dev/ttyUSB0"
 *
 * @return 0 on success, -1 on failure
 */
int imu_read(int fd);


#endif
